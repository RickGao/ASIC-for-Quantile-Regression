import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, FallingEdge, ClockCycles
import random
import math
from collections import defaultdict

VECTOR_SIZE = 8

# Instruction opcodes
OPCODES = {
    "ADD": 0b0000,
    "SUB": 0b0001,
    "MUL": 0b0010,
    "DIV": 0b0011,
    "SLT": 0b0100,
    "LOAD": 0b1000,
    "STORE": 0b1001
}

class PerformanceMetrics:
    def __init__(self):
        self.cycle_counts = defaultdict(list)
        self.operation_counts = defaultdict(int)
        self.start_time = 0
        self.total_cycles = 0
        
    def start_operation(self, current_time):
        self.start_time = current_time
        
    def end_operation(self, operation, current_time):
        cycles = current_time - self.start_time
        self.cycle_counts[operation].append(cycles)
        self.operation_counts[operation] += 1
        
    def print_metrics(self):
        print("\nPerformance Metrics Summary:")
        print("-" * 50)
        print(f"{'Operation':<15} {'Avg Cycles':<12} {'Min':<8} {'Max':<8} {'Count':<8}")
        print("-" * 50)
        for op, cycles in self.cycle_counts.items():
            avg = sum(cycles) / len(cycles)
            min_cycles = min(cycles)
            max_cycles = max(cycles)
            count = self.operation_counts[op]
            print(f"{op:<15} {avg:<12.2f} {min_cycles:<8} {max_cycles:<8} {count:<8}")
        print(f"\nTotal Cycles: {self.total_cycles}")

class Fixed:
    OVERFLOW_CHECK = True  # Global constant to enable or disable overflow checking

    def __init__(self, value=0, from_raw=False):
        """
        Initialize the fixed-point number.
        :param value: A floating-point number or a 32-bit integer representing fixed-point.
        :param from_raw: If True, interpret the value as a raw 32-bit integer for fixed-point.
        """
        self.scale = 2 ** 16  # 16 bits for the fractional part
        self.max_value = (2 ** 31 - 1) / self.scale  # Maximum value
        self.min_value = -(2 ** 31) / self.scale  # Minimum value

        if from_raw:
            self.raw = self._from_raw(value)
        else:
            self.raw = self._to_fixed_point(value)

    def _to_fixed_point(self, value):
        """
        Convert a floating-point number or integer to the internal fixed-point representation.
        :param value: A floating-point number or integer.
        :return: The integer representation of the fixed-point number.
        """
        fixed_value = int(round(value * self.scale))
        if Fixed.OVERFLOW_CHECK and (fixed_value > 2 ** 31 - 1 or fixed_value < -2 ** 31):
            raise ValueError(f"Value {value} out of range for 32-bit fixed point.")
        # Simulate overflow by wrapping the value within 32-bit signed range
        return fixed_value & 0xFFFFFFFF

    def _from_raw(self, raw_value):
        """
        Interpret a 32-bit integer as a fixed-point number.
        :param raw_value: A 32-bit integer representing the fixed-point value.
        :return: The integer representation of the fixed-point number.
        """
        return raw_value & 0xFFFFFFFF

    def to_float(self):
        """
        Convert the fixed-point number to a floating-point number.
        :return: The floating-point representation.
        """
        # Interpret the raw value as a signed 32-bit integer
        if self.raw & 0x80000000:  # Check the sign bit
            signed_value = self.raw - (1 << 32)
        else:
            signed_value = self.raw
        return signed_value / self.scale

    def to_binary(self):
        """
        Convert the fixed-point number to a 32-bit binary string.
        :return: A string representing the binary format.
        """
        return self.raw & 0xFFFFFFFF

    def __eq__(self, other):
        """
        Check if two FixedPoint32 instances are equal.
        :param other: Another FixedPoint32 instance.
        :return: True if raw values are equal, False otherwise.
        """
        if not isinstance(other, Fixed):
            return False
        return self.raw == other.raw

    def __add__(self, other):
        """
        Add two fixed-point numbers.
        :param other: Another FixedPoint32 instance.
        :return: A new FixedPoint32 instance representing the result.
        """
        if not isinstance(other, Fixed):
            raise TypeError("Operands must be of type FixedPoint32.")
        result_raw = self.raw + other.raw
        # Simulate overflow by wrapping the result within 32-bit signed range
        result_raw &= 0xFFFFFFFF
        # if Fixed.OVERFLOW_CHECK and (result_raw > 0x7FFFFFFF or result_raw < -0x80000000):
        #     raise OverflowError("Overflow occurred during addition.")
        return Fixed(result_raw, from_raw=True)

    def __sub__(self, other):
        """
        Subtract two fixed-point numbers.
        :param other: Another FixedPoint32 instance.
        :return: A new FixedPoint32 instance representing the result.
        """
        if not isinstance(other, Fixed):
            raise TypeError("Operands must be of type FixedPoint32.")
        result_raw = self.raw - other.raw
        # Simulate overflow by wrapping the result within 32-bit signed range
        result_raw &= 0xFFFFFFFF
        if Fixed.OVERFLOW_CHECK and (result_raw > 0x7FFFFFFF or result_raw < -0x80000000):
            raise OverflowError("Overflow occurred during subtraction.")
        return Fixed(result_raw, from_raw=True)

    def __mul__(self, other):
        """
        Multiply two fixed-point numbers.
        :param other: Another FixedPoint32 instance.
        :return: A new FixedPoint32 instance representing the result.
        """
        if not isinstance(other, Fixed):
            raise TypeError("Operands must be of type FixedPoint32.")
        result_raw = (self.raw * other.raw) >> 16
        # Simulate overflow by wrapping the result within 32-bit signed range
        result_raw &= 0xFFFFFFFF
        if Fixed.OVERFLOW_CHECK and (result_raw > 0x7FFFFFFF or result_raw < -0x80000000):
            raise OverflowError("Overflow occurred during multiplication.")
        return Fixed(result_raw, from_raw=True)

    def __truediv__(self, other):
        """
        Divide two fixed-point numbers.
        :param other: Another FixedPoint32 instance.
        :return: A new FixedPoint32 instance representing the result.
        """
        if not isinstance(other, Fixed):
            raise TypeError("Operands must be of type FixedPoint32.")
        if other.raw == 0:
            raise ZeroDivisionError("Division by zero.")
        result_raw = (self.raw << 16) // other.raw
        # Simulate overflow by wrapping the result within 32-bit signed range
        result_raw &= 0xFFFFFFFF
        if Fixed.OVERFLOW_CHECK and (result_raw > 0x7FFFFFFF or result_raw < -0x80000000):
            raise OverflowError("Overflow occurred during division.")
        return Fixed(result_raw, from_raw=True)

    def __repr__(self):
        """
        Return the string representation of the fixed-point number.
        :return: A string.
        """
        return f"{self.to_float()}"

async def instruction(dut, metrics, opname, rd, rs1, rs2, index=0):
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.start_operation(current_time)
    
    opcode = OPCODES[opname]
    rd_address = int(rd[1:])
    rs1_address = int(rs1[1:])
    rs2_address = int(rs2[1:])
    instruction = (opcode << 28) | (rs2_address << 23) | (rs1_address << 18) | (rd_address << 13) | (index << 8)

    dut.instruction.value = instruction
    await ClockCycles(dut.clk, 1)
    
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.end_operation(opname, current_time)

async def load(dut, metrics, rd, input_vec):
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.start_operation(current_time)
    
    opcode = OPCODES["LOAD"]
    rd_address = int(rd[1:])
    instruction = (opcode << 28) | (rd_address << 13)

    for i in range(VECTOR_SIZE):
        dut.instruction.value = instruction | (i << 8)
        dut.input_data.value = input_vec[i].to_binary()
        await ClockCycles(dut.clk, 1)
        
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.end_operation("LOAD", current_time)


async def store(dut, metrics, rs2, expect_vec=None):
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.start_operation(current_time)
    
    opcode = OPCODES["STORE"]
    rs2_address = int(rs2[1:])
    instruction = (opcode << 28) | (rs2_address << 23)

    output_vec = [None] * VECTOR_SIZE

    # Add debug output
    dut._log.info(f"\nSTORE operation debug:")
    dut._log.info(f"rs2_address: {rs2_address}")
    dut._log.info(f"instruction: {hex(instruction)}")

    for i in range(VECTOR_SIZE):
        dut.instruction.value = instruction | (i << 8)
        await Timer(1, units="ns")
        raw_value = dut.output_data.value.integer
        dut._log.info(f"STORE index {i}: raw_value = {hex(raw_value)}")
        output_vec[i] = Fixed(raw_value, True)
        # output_vec[i] = Fixed(dut.output_data.value.integer, True)
        
        if expect_vec:
            assert abs(output_vec[i].to_float() - expect_vec[i].to_float()) < 1e-3, \
                f"Mismatch at index {i}: Expected {expect_vec[i]}, Got {output_vec[i]}"
                
        await ClockCycles(dut.clk, 1)
    
    current_time = cocotb.utils.get_sim_time('ns')
    metrics.end_operation("STORE", current_time)
    return output_vec

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
        if element & 0x80000000:
            element -= (1 << 32)
        result.append(element)
    return result

async def reset_dut(dut):
    """Reset the DUT."""
    dut.rst_n.value = 0  # Assert reset
    await RisingEdge(dut.clk)  # Wait for one clock cycle
    dut.rst_n.value = 1  # Deassert reset
    await RisingEdge(dut.clk)  # Wait for another clock cycle


@cocotb.test()
async def test_quantile_comprehensive(dut):
    """Comprehensive test for the quantile vector processor."""
    
    # Initialize performance metrics
    metrics = PerformanceMetrics()
    
    # Generate clock
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset DUT
    await reset_dut(dut)

    # Test cases
    dut._log.info("\n=== Basic Operations Test ===")
    
    # Test vectors
    vec_1 = [Fixed(x) for x in [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0]]
    vec_2 = [Fixed(x) for x in [0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0]]
    
    # Load test vectors
    await load(dut, metrics, "x1", vec_1)
    await load(dut, metrics, "x2", vec_2)
     
    # Test ADD
    await instruction(dut, metrics, "ADD", "x3", "x1", "x2")
    result = await store(dut, metrics, "x3")
    expected = [a + b for a, b in zip(vec_1, vec_2)]
    dut._log.info(f"ADD result: {result}")
    assert result == expected, "Wrong ADD result"
    
    # Test SUB
    await instruction(dut, metrics, "SUB", "x4", "x1", "x2")
    result = await store(dut, metrics, "x4")
    expected = [a - b for a, b in zip(vec_1, vec_2)]
    dut._log.info(f"SUB result: {result}")
    assert result == expected, "Wrong SUB result"


    dut._log.info("\n=== Testing Vector-Scalar Multiplication ===")

    # Test MUL
    for i in range(VECTOR_SIZE):
        await instruction(dut, metrics, "MUL", "x5", "x1", "x2", i)
        result = await store(dut, metrics, "x5")
        expected = [a * vec_2[i] for a in vec_1]
        dut._log.info(f"MUL result (scalar={vec_2[i]}): {result}")
        # dut._log.info(f"Expected MUL result: {expected}")
    # assert result == expected, "Wrong MUL result"

    # Test single multiplication first
    input_val = Fixed(2.0)
    scalar_val = Fixed(0.5)
    
    dut._log.info(f"Testing single multiplication:")
    dut._log.info(f"Input: {input_val.to_float()} (raw: {hex(input_val.to_binary())})")
    dut._log.info(f"Scalar: {scalar_val.to_float()} (raw: {hex(scalar_val.to_binary())})")
    
    # Load test values
    test_vec = [input_val] + [Fixed(0.0)] * 7
    scalar_vec = [scalar_val] + [Fixed(0.0)] * 7
    
    await load(dut, metrics, "x1", test_vec)
    await load(dut, metrics, "x2", scalar_vec)
    
    # Perform multiplication
    await instruction(dut, metrics, "MUL", "x3", "x1", "x2", 0)
    result = await store(dut, metrics, "x3")
    expected = Fixed(1.0)  # 2.0 * 0.5
    
    dut._log.info(f"Expected: {expected.to_float()} (raw: {hex(expected.to_binary())})")
    dut._log.info(f"Got: {result[0].to_float()} (raw: {hex(result[0].to_binary())})")
    
    # Now test full vector multiplication
    mul_vec = [Fixed(x) for x in [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0]]
    scalar_vec = [Fixed(0.5)] + [Fixed(0.0)] * 7
    
    await load(dut, metrics, "x1", mul_vec)
    await load(dut, metrics, "x2", scalar_vec)
    
    # Test multiplication with scalar
    await instruction(dut, metrics, "MUL", "x3", "x1", "x2", 0)
    result = await store(dut, metrics, "x3")
    expected = [a * scalar_vec[0] for a in mul_vec]
    
    dut._log.info("\nFull vector multiplication test:")
    for i in range(VECTOR_SIZE):
        dut._log.info(f"Index {i}:")
        dut._log.info(f"Input: {mul_vec[i].to_float()} (raw: {hex(mul_vec[i].to_binary())})")
        dut._log.info(f"Expected: {expected[i].to_float()} (raw: {hex(expected[i].to_binary())})")
        dut._log.info(f"Got: {result[i].to_float()} (raw: {hex(result[i].to_binary())})")
        

    '''
    # Test multiplication with different scalars
    for i in range(VECTOR_SIZE):
        await instruction(dut, metrics, "MUL", "x5", "x1", "x2", i)
        result = await store(dut, metrics, "x5")
        expected = [a * vec_2[i] for a in vec_1]
        dut._log.info(f"MUL test {i}:")
        dut._log.info(f"Input vector: {vec_1}")
        dut._log.info(f"Scalar: {vec_2[i]}")
        dut._log.info(f"Expected: {expected}")
        dut._log.info(f"Got: {result}")
        assert all(abs(r.to_float() - e.to_float()) < 1e-3 for r, e in zip(result, expected)), \
            "Multiplication result mismatch"
    '''
    dut._log.info("\n=== Edge Cases Test ===")
    
    # Edge case vectors
    edge_vec1 = [Fixed(x) for x in [0.0, -0.0, (2**15)-1, -(2**15), (2**15)-1, -(2**15), 1e3, -1e3]]
    edge_vec2 = [Fixed(x) for x in [1.0, -1.0, 2.0, -2.0, 0.5, -0.5, 0.1, -0.1]]
    
    await load(dut, metrics, "x6", edge_vec1)
    await load(dut, metrics, "x7", edge_vec2)
    
    # Test operations with edge cases
    await instruction(dut, metrics, "ADD", "x8", "x6", "x7")
    result = await store(dut, metrics, "x8")
    # expected = [a + b for a, b in zip(edge_vec1, edge_vec2)]
    dut._log.info(f"Edge case ADD result: {result}")
    # dut._log.info(f"Edge case expected ADD result: {expected}")
 
    
    # # Test division by zero handling
    # zero_vec = [Fixed(0.0)] * VECTOR_SIZE
    # await load(dut, metrics, "x9", zero_vec)
    # await instruction(dut, metrics, "DIV", "x10", "x1", "x9", 0)
    # result = await store(dut, metrics, "x10")
    # dut._log.info(f"Division by zero result: {result}")

    num_tests = 10
    random_vectors = []
    for _ in range(num_tests):
        vector = []
        for _ in range(VECTOR_SIZE):
            # Use smaller range to avoid overflow
            value = random.uniform(-5.0, 5.0)  # Reduced from ±10 to ±5
            vector.append(Fixed(value))
        random_vectors.append(vector)
    
    # Test each random vector
    for i, vector in enumerate(random_vectors):
        dut._log.info(f"\nTesting random vector {i}:")
        dut._log.info(f"Input values: {[v.to_float() for v in vector]}")
        
        # Write vector to register
        await load(dut, metrics, "x1", vector)
        
        # Test ADD with different vector
        other_vector = [Fixed(random.uniform(-2.0, 2.0)) for _ in range(VECTOR_SIZE)]  # Even smaller range for addition
        await load(dut, metrics, "x2", other_vector)
        await instruction(dut, metrics, "ADD", "x3", "x1", "x2")
        add_result = await store(dut, metrics, "x3")
        expected_add = [Fixed(a.to_float() + b.to_float()) for a, b in zip(vector, other_vector)]
        dut._log.info(f"ADD result: {[v.to_float() for v in add_result]}")
        dut._log.info(f"Expected ADD: {[v.to_float() for v in expected_add]}")
        
        # Test SUB
        await instruction(dut, metrics, "SUB", "x4", "x1", "x2")
        sub_result = await store(dut, metrics, "x4")
        expected_sub = [Fixed(a.to_float() - b.to_float()) for a, b in zip(vector, other_vector)]
        dut._log.info(f"SUB result: {[v.to_float() for v in sub_result]}")
        dut._log.info(f"Expected SUB: {[v.to_float() for v in expected_sub]}")
        
        # Test MUL with scalar
        scalar_index = random.randint(0, VECTOR_SIZE-1)
        scalar_value = Fixed(random.uniform(-1.0, 1.0))  # Use small scalar for multiplication
        scalar_vector = [scalar_value] + [Fixed(0.0)] * (VECTOR_SIZE-1)
        await load(dut, metrics, "x2", scalar_vector)
        await instruction(dut, metrics, "MUL", "x5", "x1", "x2", 0)
        mul_result = await store(dut, metrics, "x5")
        expected_mul = [Fixed(v.to_float() * scalar_value.to_float()) for v in vector]
        dut._log.info(f"MUL result: {[v.to_float() for v in mul_result]}")
        dut._log.info(f"Expected MUL: {[v.to_float() for v in expected_mul]}")
        
        # Verify results within tolerance
        for actual, expected in zip(add_result, expected_add):
            assert abs(actual.to_float() - expected.to_float()) < 0.1, \
                f"ADD mismatch: got {actual.to_float()}, expected {expected.to_float()}"
        
        for actual, expected in zip(sub_result, expected_sub):
            assert abs(actual.to_float() - expected.to_float()) < 0.1, \
                f"SUB mismatch: got {actual.to_float()}, expected {expected.to_float()}"
        
        for actual, expected in zip(mul_result, expected_mul):
            assert abs(actual.to_float() - expected.to_float()) < 0.1, \
                f"MUL mismatch: got {actual.to_float()}, expected {expected.to_float()}"


    # Print performance metrics
    metrics.print_metrics()