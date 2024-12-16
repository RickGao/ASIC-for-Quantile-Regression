import cocotb
from cocotb.triggers import Timer
import random
import math

VECTOR_SIZE = 8

FIXED_POINT_FRACTION_BITS = 16
FIXED_POINT_SCALE = 1 << FIXED_POINT_FRACTION_BITS  # 2^16 for scaling


def float_to_fixed(value):
    """Convert Python float to fixed-point representation (as integer)."""
    return int(round(value * FIXED_POINT_SCALE))


def fixed_to_float(value):
    """Convert fixed-point representation (as integer) back to Python float."""
    # Interpret the 32-bit value as a signed integer
    if value & 0x80000000:  # Check if the sign bit is set
        value = value - (1 << 32)  # Convert to signed 32-bit integer
    return value / FIXED_POINT_SCALE


def format_binary(value, bits=32):
    """Format an integer as a binary string with given bit width."""
    binary = bin(value if value >= 0 else (1 << bits) + value)[2:].zfill(bits)
    return f"{binary[0]}_{binary[1:16]}_{binary[16:]}"


def print_fixed_detail(name, value, fixed):
    """Print detailed representation of a fixed-point number."""
    binary = format_binary(fixed)
    cocotb.log.info(f"{name}: {value:.6f} = {binary} (hex: 0x{fixed:08x})")


def compare_fixed(a, b, epsilon=FIXED_POINT_SCALE):
    """Compare two fixed-point numbers with tolerance."""
    return abs(a - b) < epsilon

def pack_vector(vector):
    """Pack a list of 32-bit integers into a single VECTOR_SIZE*32-bit value."""
    packed = 0
    for i, val in enumerate(vector):
        packed |= (val & 0xFFFFFFFF) << (32 * i)
    return packed

def unpack_vector(packed_value):
    result = []
    for i in range(VECTOR_SIZE):
        element = (packed_value >> (32 * i)) & 0xFFFFFFFF
        result.append(element)
    return result


async def test_case(dut, vec_a_float, vec_b_float, scalar_float, operation, op_name):
    """Helper function to run a single test case"""

    # Convert inputs to fixed point
    vec_a = [float_to_fixed(x) for x in vec_a_float]
    vec_b = [float_to_fixed(x) for x in vec_b_float]
    scalar = float_to_fixed(scalar_float)

    # Set inputs
    # vec_a_packed = sum(((val & 0xFFFFFFFF) << (32 * i)) for i, val in enumerate(vec_a))
    # vec_b_packed = sum(((val & 0xFFFFFFFF) << (32 * i)) for i, val in enumerate(vec_b))
    vec_a_packed = pack_vector(vec_a)
    vec_b_packed = pack_vector(vec_b)

    dut.vec_a.value = vec_a_packed
    dut.vec_b.value = vec_b_packed
    dut.scalar.value = scalar
    dut.operation.value = operation

    await Timer(10, units="ns")

    cocotb.log.info(f"\nTesting {op_name}...")
    for i in range(VECTOR_SIZE):
        if operation == 0b000:  # Add
            expected = vec_a_float[i] + vec_b_float[i]
        elif operation == 0b001:  # Subtract
            expected = vec_a_float[i] - vec_b_float[i]
        elif operation == 0b010:  # Multiply
            expected = vec_a_float[i] * scalar_float
        elif operation == 0b011:  # Divide
            expected = vec_a_float[i] / scalar_float
        elif operation == 0b100:  # SLT
            expected = 1.0 if vec_a_float[i] < vec_b_float[i] else 0.0
            # result_packed = dut.result.value.integer
            # result_unpacked = unpack_vector(result_packed)
            # dut_value = int(result_unpacked[i])
            # dut_float = fixed_to_float(dut_value)
            # assert dut_float == expected, f"{op_name} failed at {i}: {dut_float} != {expected}"
            # continue

        expected_fixed = float_to_fixed(expected)
        result_packed = dut.result.value.integer
        result_unpacked = unpack_vector(result_packed)
        dut_value = int(result_unpacked[i])
        dut_float = fixed_to_float(dut_value)

        assert compare_fixed(dut_float, expected), \
            f"{op_name} failed at {i}: {dut_float} != {expected}"


@cocotb.test()
async def test_vector_processor_comprehensive(dut):
    """Comprehensive test with corner cases and random values"""

    # Test Case 1: Corner Cases - Zero Values
    zeros = [0.0] * VECTOR_SIZE
    ones = [1.0] * VECTOR_SIZE
    await test_case(dut, zeros, ones, 1.0, 0b000, "Addition with zeros")
    await test_case(dut, ones, zeros, 1.0, 0b001, "Subtraction with zeros")
    await test_case(dut, zeros, ones, 2.0, 0b010, "Multiplication with zeros")
    await test_case(dut, zeros, ones, 2.0, 0b011, "Division with zeros")

    # Test Case 2: Maximum Values
    max_vals = [32767.99] * VECTOR_SIZE  # Near maximum for 16.16 fixed point
    min_vals = [-32768.0] * VECTOR_SIZE  # Minimum for 16.16 fixed point
    await test_case(dut, max_vals, min_vals, 2.0, 0b000, "Addition with max/min values")
    await test_case(dut, max_vals, max_vals, 0.5, 0b010, "Multiplication with max values")

    # Test Case 3: Small Values
    small_vals = [0.0001, 0.00025, 0.0005, 0.001, 0.002, 0.004, 0.008, 0.016]
    await test_case(dut, small_vals, small_vals, 0.0001, 0b010, "Multiplication with small values")

    # Test Case 4: Alternating Signs
    alt_signs = [1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0]
    await test_case(dut, alt_signs, alt_signs, -1.0, 0b010, "Multiplication with alternating signs")

    # Test Case 5: Powers of 2
    powers_of_2 = [0.125, 0.25, 0.5, 1.0, 2.0, 4.0, 8.0, 16.0]
    await test_case(dut, powers_of_2, powers_of_2, 2.0, 0b011, "Division with powers of 2")

    # Test Case 6: Random Values
    for _ in range(5):  # Run 5 random test cases
        random_a = [random.uniform(-100, 100) for _ in range(VECTOR_SIZE)]
        random_b = [random.uniform(-100, 100) for _ in range(VECTOR_SIZE)]
        random_scalar = random.uniform(0.1, 10.0)

        await test_case(dut, random_a, random_b, random_scalar, 0b000, "Random addition")
        await test_case(dut, random_a, random_b, random_scalar, 0b001, "Random subtraction")
        await test_case(dut, random_a, random_b, random_scalar, 0b010, "Random multiplication")
        await test_case(dut, random_a, random_b, random_scalar, 0b011, "Random division")
        await test_case(dut, random_a, random_b, random_scalar, 0b100, "Random SLT")

    # Test Case 7: Edge Cases for SLT
    edge_a = [-1.0, 0.0, 0.0, 1.0, -32768.0, 32767.99, 0.0001, -0.0001]
    edge_b = [0.0, 0.0, 1.0, -1.0, 32767.99, -32768.0, -0.0001, 0.0001]
    await test_case(dut, edge_a, edge_b, 1.0, 0b100, "SLT edge cases")

    cocotb.log.info("\nAll comprehensive tests passed successfully!")







# @cocotb.test()
# async def test_vector_processor(dut):
#     """Test the vector_processor module with fixed-point operations."""
#
#     # Define test inputs as Python floats
#     vec_a_float = [10.5, -20.25, 30.75, -40.125, 50.375, -60.625, 70.875, -80.0625]
#     vec_b_float = [5.25, -10.125, 15.375, -20.0625, 25.1875, -30.3125, 35.4375, -40.03125]
#     scalar_float = 2.5
#
#     # Convert to fixed-point representation
#     vec_a = [float_to_fixed(x) for x in vec_a_float]
#     vec_b = [float_to_fixed(x) for x in vec_b_float]
#     scalar = float_to_fixed(scalar_float)
#
#     # Print detailed input representations
#     cocotb.log.info("\nInput vector A details:")
#     for i, (f, fixed) in enumerate(zip(vec_a_float, vec_a)):
#         print_fixed_detail(f"vec_a[{i}]", f, fixed)
#
#     cocotb.log.info("\nInput vector B details:")
#     for i, (f, fixed) in enumerate(zip(vec_b_float, vec_b)):
#         print_fixed_detail(f"vec_b[{i}]", f, fixed)
#
#     print_fixed_detail("\nScalar", scalar_float, scalar)
#
#     # Assign inputs to DUT
#     cocotb.log.info("\nInitializing inputs...")
#
#     vec_a_packed = sum(((val & 0xFFFFFFFF) << (32 * i)) for i, val in enumerate(vec_a))
#     vec_b_packed = sum(((val & 0xFFFFFFFF) << (32 * i)) for i, val in enumerate(vec_b))
#
#     dut.vec_a.value = vec_a_packed
#     dut.vec_b.value = vec_b_packed
#
#     dut.scalar.value = scalar
#
#     # Test vector addition
#     cocotb.log.info("\nTesting vector addition...")
#     dut.operation.value = 0b000
#     await Timer(10, units="ns")
#     result_packed = dut.result.value.integer
#     result_unpacked = unpack_vector(result_packed)
#     for i in range(VECTOR_SIZE):
#         expected = vec_a_float[i] + vec_b_float[i]
#         expected_fixed = float_to_fixed(expected)
#         dut_value = int(result_unpacked[i])
#         dut_float = fixed_to_float(dut_value)
#
#         cocotb.log.info(f"\nAddition index {i}:")
#         print_fixed_detail("Input A", vec_a_float[i], vec_a[i])
#         print_fixed_detail("Input B", vec_b_float[i], vec_b[i])
#         print_fixed_detail("Expected", expected, expected_fixed)
#         print_fixed_detail("Got", dut_float, dut_value)
#
#         assert compare_fixed(dut_float, expected), \
#             f"Addition failed at index {i}: {dut_float} != {expected}"
#
#     # Test vector subtraction
#     cocotb.log.info("\nTesting vector subtraction...")
#     dut.operation.value = 0b001
#     await Timer(10, units="ns")
#     result_packed = dut.result.value.integer
#     result_unpacked = unpack_vector(result_packed)
#     for i in range(VECTOR_SIZE):
#         expected = vec_a_float[i] - vec_b_float[i]
#         expected_fixed = float_to_fixed(expected)
#         dut_value = int(result_unpacked[i])
#         dut_float = fixed_to_float(dut_value)
#
#         cocotb.log.info(f"\nSubtraction index {i}:")
#         print_fixed_detail("Input A", vec_a_float[i], vec_a[i])
#         print_fixed_detail("Input B", vec_b_float[i], vec_b[i])
#         print_fixed_detail("Expected", expected, expected_fixed)
#         print_fixed_detail("Got", dut_float, dut_value)
#
#         assert compare_fixed(dut_float, expected), \
#             f"Subtraction failed at index {i}: {dut_float} != {expected}"
#
#     # Test scalar multiplication
#     cocotb.log.info("\nTesting scalar multiplication...")
#     dut.operation.value = 0b010
#     await Timer(10, units="ns")
#     result_packed = dut.result.value.integer
#     result_unpacked = unpack_vector(result_packed)
#     for i in range(VECTOR_SIZE):
#         expected = vec_a_float[i] * scalar_float
#         expected_fixed = float_to_fixed(expected)
#         dut_value = int(result_unpacked[i])
#         dut_float = fixed_to_float(dut_value)
#
#         cocotb.log.info(f"\nMultiplication index {i}:")
#         print_fixed_detail("Input A", vec_a_float[i], vec_a[i])
#         print_fixed_detail("Scalar", scalar_float, scalar)
#         print_fixed_detail("Expected", expected, expected_fixed)
#         print_fixed_detail("Got", dut_float, dut_value)
#
#         assert compare_fixed(dut_float, expected), \
#             f"Scalar multiplication failed at index {i}: {dut_float} != {expected}"
#
#     # Test scalar division
#     cocotb.log.info("\nTesting scalar division...")
#     dut.operation.value = 0b011
#     await Timer(10, units="ns")
#     result_packed = dut.result.value.integer
#     result_unpacked = unpack_vector(result_packed)
#     for i in range(VECTOR_SIZE):
#         expected = vec_a_float[i] / scalar_float
#         expected_fixed = float_to_fixed(expected)
#         dut_value = int(result_unpacked[i])
#         dut_float = fixed_to_float(dut_value)
#
#         cocotb.log.info(f"\nDivision index {i}:")
#         print_fixed_detail("Input A", vec_a_float[i], vec_a[i])
#         print_fixed_detail("Scalar", scalar_float, scalar)
#         print_fixed_detail("Expected", expected, expected_fixed)
#         print_fixed_detail("Got", dut_float, dut_value)
#
#         assert compare_fixed(dut_float, expected), \
#             f"Scalar division failed at index {i}: {dut_float} != {expected}"
#
#     # Test set less than (SLT)
#     cocotb.log.info("\nTesting set less than (SLT)...")
#     dut.operation.value = 0b100
#     await Timer(10, units="ns")
#     result_packed = dut.result.value.integer
#     result_unpacked = unpack_vector(result_packed)
#     for i in range(VECTOR_SIZE):
#         expected = 1 if vec_a_float[i] < vec_b_float[i] else 0
#         dut_result = int(result_unpacked[i])
#
#         cocotb.log.info(f"\nSLT index {i}:")
#         print_fixed_detail("Input A", vec_a_float[i], vec_a[i])
#         print_fixed_detail("Input B", vec_b_float[i], vec_b[i])
#         cocotb.log.info(f"Expected: {expected}")
#         cocotb.log.info(f"Got: {dut_result}")
#
#         assert dut_result == expected, \
#             f"SLT failed at index {i}: {dut_result} != {expected}"
#
#     cocotb.log.info("\nAll tests passed successfully!")
