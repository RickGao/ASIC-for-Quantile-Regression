import cocotb
from cocotb.triggers import Timer
import struct
import math

VECTOR_SIZE = 8


def float_to_ieee754(value):
    """Convert Python float to IEEE-754 32-bit representation (as integer)."""
    return struct.unpack('I', struct.pack('f', float(value)))[0]


def ieee754_to_float(value):
    """Convert IEEE-754 32-bit representation (as integer) back to Python float."""
    return struct.unpack('f', struct.pack('I', value))[0]


def format_binary(value, bits=32):
    """Format an integer as a binary string with given bit width."""
    binary = bin(value if value >= 0 else (1 << bits) + value)[2:].zfill(bits)
    # Split into IEEE-754 parts for readability
    return f"{binary[0]}_{binary[1:9]}_{binary[9:]}"


def print_float_detail(name, value, ieee754):
    """Print detailed representation of a floating point number."""
    binary = format_binary(ieee754)
    cocotb.log.info(f"{name}: {value} = {binary} (hex: 0x{ieee754:08x})")


def compare_floats(a, b, epsilon=1e-6):
    """Compare two floating point numbers with tolerance."""
    return abs(a - b) < epsilon


@cocotb.test()
async def test_vector_processor(dut):
    """Test the vector_processor module with floating-point operations."""

    # Define test inputs as Python floats
    vec_a_float = [10.5, -20.25, 30.75, -40.125, 50.375, -60.625, 70.875, -80.0625]
    vec_b_float = [5.25, -10.125, 15.375, -20.0625, 25.1875, -30.3125, 35.4375, -40.03125]
    scalar_float = 2.5

    # Convert to IEEE-754 32-bit representation
    vec_a = [float_to_ieee754(x) for x in vec_a_float]
    vec_b = [float_to_ieee754(x) for x in vec_b_float]
    scalar = float_to_ieee754(scalar_float)

    # Print detailed input representations
    cocotb.log.info("\nInput vector A details:")
    for i, (f, ieee) in enumerate(zip(vec_a_float, vec_a)):
        print_float_detail(f"vec_a[{i}]", f, ieee)

    cocotb.log.info("\nInput vector B details:")
    for i, (f, ieee) in enumerate(zip(vec_b_float, vec_b)):
        print_float_detail(f"vec_b[{i}]", f, ieee)

    print_float_detail("\nScalar", scalar_float, scalar)

    # Assign inputs to DUT
    cocotb.log.info("\nInitializing inputs...")
    for i in range(VECTOR_SIZE):
        dut.vec_a[i].value = vec_a[i]
        dut.vec_b[i].value = vec_b[i]
    dut.scalar.value = scalar

    # Test vector addition
    cocotb.log.info("\nTesting vector addition...")
    dut.operation.value = 0b000
    await Timer(10, units="ns")
    for i in range(VECTOR_SIZE):
        expected = vec_a_float[i] + vec_b_float[i]
        expected_ieee = float_to_ieee754(expected)
        dut_value = int(dut.result[i].value)
        dut_float = ieee754_to_float(dut_value)

        cocotb.log.info(f"\nAddition index {i}:")
        print_float_detail("Input A", vec_a_float[i], vec_a[i])
        print_float_detail("Input B", vec_b_float[i], vec_b[i])
        print_float_detail("Expected", expected, expected_ieee)
        print_float_detail("Got", dut_float, dut_value)

        assert compare_floats(dut_float, expected), \
            f"Addition failed at index {i}: {dut_float} != {expected}"

    # Test vector subtraction
    cocotb.log.info("\nTesting vector subtraction...")
    dut.operation.value = 0b001
    await Timer(10, units="ns")
    for i in range(VECTOR_SIZE):
        expected = vec_a_float[i] - vec_b_float[i]
        expected_ieee = float_to_ieee754(expected)
        dut_value = int(dut.result[i].value)
        dut_float = ieee754_to_float(dut_value)

        cocotb.log.info(f"\nSubtraction index {i}:")
        print_float_detail("Input A", vec_a_float[i], vec_a[i])
        print_float_detail("Input B", vec_b_float[i], vec_b[i])
        print_float_detail("Expected", expected, expected_ieee)
        print_float_detail("Got", dut_float, dut_value)

        assert compare_floats(dut_float, expected), \
            f"Subtraction failed at index {i}: {dut_float} != {expected}"

    # Test scalar multiplication
    cocotb.log.info("\nTesting scalar multiplication...")
    dut.operation.value = 0b010
    await Timer(10, units="ns")
    for i in range(VECTOR_SIZE):
        expected = vec_a_float[i] * scalar_float
        expected_ieee = float_to_ieee754(expected)
        dut_value = int(dut.result[i].value)
        dut_float = ieee754_to_float(dut_value)

        cocotb.log.info(f"\nMultiplication index {i}:")
        print_float_detail("Input A", vec_a_float[i], vec_a[i])
        print_float_detail("Scalar", scalar_float, scalar)
        print_float_detail("Expected", expected, expected_ieee)
        print_float_detail("Got", dut_float, dut_value)

        assert compare_floats(dut_float, expected), \
            f"Scalar multiplication failed at index {i}: {dut_float} != {expected}"

    # Test scalar division
    cocotb.log.info("\nTesting scalar division...")
    dut.operation.value = 0b011
    await Timer(10, units="ns")
    for i in range(VECTOR_SIZE):
        expected = vec_a_float[i] / scalar_float
        expected_ieee = float_to_ieee754(expected)
        dut_value = int(dut.result[i].value)
        dut_float = ieee754_to_float(dut_value)

        cocotb.log.info(f"\nDivision index {i}:")
        print_float_detail("Input A", vec_a_float[i], vec_a[i])
        print_float_detail("Scalar", scalar_float, scalar)
        print_float_detail("Expected", expected, expected_ieee)
        print_float_detail("Got", dut_float, dut_value)

        assert compare_floats(dut_float, expected), \
            f"Scalar division failed at index {i}: {dut_float} != {expected}"

    # Test set less than (SLT)
    cocotb.log.info("\nTesting set less than (SLT)...")
    dut.operation.value = 0b100
    await Timer(10, units="ns")
    for i in range(VECTOR_SIZE):
        expected = 1 if vec_a_float[i] < vec_b_float[i] else 0
        dut_result = int(dut.result[i].value)

        cocotb.log.info(f"\nSLT index {i}:")
        print_float_detail("Input A", vec_a_float[i], vec_a[i])
        print_float_detail("Input B", vec_b_float[i], vec_b[i])
        cocotb.log.info(f"Expected: {expected}")
        cocotb.log.info(f"Got: {dut_result}")

        assert dut_result == expected, \
            f"SLT failed at index {i}: {dut_result} != {expected}"

    cocotb.log.info("\nAll tests passed successfully!")