import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, ClockCycles
import random
import math
from collections import defaultdict
import numpy as np


VECTOR_SIZE = 8

SHOW_INSTRUCTIONS = 0

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

    def __init__(self, value, from_raw=False):
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
        if Fixed.OVERFLOW_CHECK and (result_raw > 0x7FFFFFFF or result_raw < -0x80000000):
            raise OverflowError("Overflow occurred during addition.")
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

    # Log details
    if (SHOW_INSTRUCTIONS):
        dut._log.info(f"{opname} {rd} {rs1} {rs2} {index}")
        dut._log.info(f"rd: {rd_address}, Opcode: {bin(opcode)[2:]}")
        print()

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

    if (SHOW_INSTRUCTIONS):
        dut._log.info(f"LOAD {rd} {input_vec}")
        dut._log.info(f"rd: {rd_address}, Opcode: {bin(opcode)[2:]}")
        print()

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

    if (SHOW_INSTRUCTIONS):
        dut._log.info(f"STORE {rs2}")
        dut._log.info(f"rs2: {rs2_address}, Opcode: {bin(opcode)[2:]}")
        print()

    # Add debug output
    # dut._log.info(f"\nSTORE operation debug:")
    # dut._log.info(f"rs2_address: {rs2_address}")
    # dut._log.info(f"instruction: {hex(instruction)}")

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


# def pack_vector(vector):
#     """Pack a list of 32-bit integers into a single VECTOR_SIZE*32-bit value."""
#     packed = 0
#     for i, val in enumerate(vector):
#         packed |= (val & 0xFFFFFFFF) << (32 * i)
#     return packed
#
# def unpack_vector(packed_value):
#     result = []
#     for i in range(VECTOR_SIZE):
#         element = (packed_value >> (32 * i)) & 0xFFFFFFFF
#         if element & 0x80000000:
#             element -= (1 << 32)
#         result.append(element)
#     return result

async def reset_dut(dut):
    """Reset the DUT."""
    dut.rst_n.value = 0  # Assert reset
    await RisingEdge(dut.clk)  # Wait for one clock cycle
    dut.rst_n.value = 1  # Deassert reset
    await RisingEdge(dut.clk)  # Wait for another clock cycle



def load_data_from_txt(filename="data.txt"):
    """
    Load the feature matrix X and target vector y from a txt file.

    Parameters:
    filename: Input file name (default: "data.txt")

    Returns:
    X: Feature matrix
    y: Target variable
    """
    with open(filename, "r") as f:
        lines = f.readlines()
        # Find the separator between X and y
        separator_index = lines.index("# Target Variable\n")
        # Parse X
        X = np.loadtxt(lines[:separator_index])
        # Parse y
        y = np.loadtxt(lines[separator_index + 1:])
    return X, y

def dump_result_to_file(result, filename="result.txt"):
    """
    Dump the result to a file in comma-separated format.

    Parameters:
    result: List of floats or Fixed-point numbers
    filename: Name of the file to save the result
    """
    with open(filename, "w") as f:
        result_floats = [str(x) for x in result]
        f.write(",".join(result_floats))
    print(f"Results successfully saved to {filename}")


def convert_matrix_to_fixed_vectors(matrix):
    """
    Convert a matrix into a list of Fixed-point vectors (column-wise).

    Parameters:
    matrix: 2D NumPy array

    Returns:
    List of lists, where each sublist is a Fixed-point column vector.
    """
    fixed_vectors = []
    for col in matrix.T:  # Iterate over columns
        fixed_vectors.append([Fixed(value) for value in col])
    return fixed_vectors


async def quantile_regression_hardware(dut, metrics, X, y, tau, learning_rate=0.01, max_iterations=1000):
    scalar_vec = [Fixed(learning_rate), Fixed(X.shape[0])] + [Fixed(0)] * (VECTOR_SIZE - 2)
    tau_vec = [Fixed(tau)] * VECTOR_SIZE
    y_vec = [Fixed(value) for value in y]
    X_columns = convert_matrix_to_fixed_vectors(X)
    Xt = np.transpose(X)
    Xt_columns = convert_matrix_to_fixed_vectors(Xt)

    beta_reg = "x1"
    r_reg = "x2"
    i_reg = "x3"
    descent_reg = "x7"
    grad_reg = "x8"
    xt_mul_reg = "x9"
    i_minus_tau_reg = "x10"
    xb_reg = "x11"
    mul_reg = "x12"
    scalar_reg = "x13"
    tau_reg = "x14"
    y_reg = "x15"

    await load(dut, metrics, beta_reg, [Fixed(0)] * VECTOR_SIZE)
    await load(dut, metrics, scalar_reg, scalar_vec)
    await load(dut, metrics, tau_reg, tau_vec)
    await load(dut, metrics, y_reg, y_vec)

    for i in range(VECTOR_SIZE):
        await load(dut, metrics, f"x{i + 16}", X_columns[i])

    for i in range(VECTOR_SIZE):
        await load(dut, metrics, f"x{i + 24}", Xt_columns[i])


    for iter in range(max_iterations):

        dut._log.info(f"Iteration {iter}")
        # Calculate Residual r
        await load(dut, metrics, xb_reg, [Fixed(0)] * VECTOR_SIZE)
        for i in range(VECTOR_SIZE):
            await instruction(dut, metrics, "MUL", mul_reg, f"x{i + 16}", beta_reg, index=i)
            await instruction(dut, metrics, "ADD", xb_reg, xb_reg, mul_reg)

        # print(await store(dut, metrics, y_reg))
        # print(await store(dut, metrics, xb_reg))
        await instruction(dut, metrics, "SUB", r_reg, y_reg, xb_reg)
        # print(await store(dut, metrics, r_reg))


        # Compute Indicator Function I
        await instruction(dut, metrics, "SLT", i_reg, r_reg, "x0")
        # print(await store(dut, metrics, i_reg))

        # Compute Gradient
        await instruction(dut, metrics, "SUB", i_minus_tau_reg, i_reg, tau_reg)
        # print(await store(dut, metrics, i_minus_tau_reg))
        await load(dut, metrics, xt_mul_reg, [Fixed(0)] * VECTOR_SIZE)
        for i in range(VECTOR_SIZE):
            await instruction(dut, metrics, "MUL", mul_reg, f"x{i + 24}", i_minus_tau_reg, index=i)
            # print((await store(dut, metrics, mul_reg)))
            await instruction(dut, metrics, "ADD", xt_mul_reg, xt_mul_reg, mul_reg)
            # print((await store(dut, metrics, xt_mul_reg)))
        # print(await store(dut, metrics, xt_mul_reg))
        await instruction(dut, metrics, "DIV", grad_reg, xt_mul_reg, scalar_reg, index=1)

        # Update Parameters Beta
        await instruction(dut, metrics, "MUL", descent_reg, grad_reg, scalar_reg, index=0)
        await instruction(dut, metrics, "SUB", beta_reg, beta_reg, descent_reg)

    result = await store(dut, metrics, beta_reg)
    return result



@cocotb.test()
async def test_quantile_regression(dut):
    """Comprehensive test for the quantile vector processor."""

    # Initialize performance metrics
    metrics = PerformanceMetrics()

    # Generate clock
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())


    # Reset DUT
    await reset_dut(dut)

    X, y = load_data_from_txt()

    # print(X)
    # print(y)

    result = await quantile_regression_hardware(dut, metrics, X, y, 0.5, learning_rate=0.01, max_iterations=3000)

    dut._log.info(f"Result: {result}")

    dump_result_to_file(result, "result.txt")


    # Print performance metrics
    metrics.print_metrics()