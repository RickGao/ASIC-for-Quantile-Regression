import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, FallingEdge, ClockCycles
from random import randint
from cocotb.triggers import Timer
import random
import math

VECTOR_SIZE = 8


# FIXED_POINT_FRACTION_BITS = 16
# FIXED_POINT_SCALE = 1 << FIXED_POINT_FRACTION_BITS  # 2^16 for scaling


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


# def compare_fixed(a, b, epsilon=FIXED_POINT_SCALE):
#     """Compare two fixed-point numbers with tolerance."""
#     return abs(a - b) < epsilon


async def instruction(dut, opname, rd, rs1, rs2, index=0):
    opcode = OPCODES[opname]
    rd_address = int(rd[1:])
    rs1_address = int(rs1[1:])
    rs2_address = int(rs2[1:])
    instruction = (opcode << 28) | (rs2_address << 23) | (rs1_address << 18) | (rd_address << 13) | (index << 8)

    # Log details
    dut._log.info(f"{opname} {rd} {rs1} {rs2} {index}")
    dut._log.info(f"rd: {rd_address}, Opcode: {bin(opcode)[2:]}")

    dut.instruction.value = instruction
    await ClockCycles(dut.clk, 1)


async def load(dut, rd, input_vec):
    opcode = OPCODES["LOAD"]
    rd_address = int(rd[1:])
    instruction = (opcode << 28) | (rd_address << 13)

    # Log details
    dut._log.info(f"LOAD {rd} {input_vec}")
    dut._log.info(f"rd: {rd_address}, Opcode: {bin(opcode)[2:]}")

    for i in range(VECTOR_SIZE):
        dut.instruction.value = instruction | (i << 8)
        dut.input_data.value = input_vec[i].to_binary()
        await ClockCycles(dut.clk, 1)


async def store(dut, rs2):
    opcode = OPCODES["STORE"]
    rs2_address = int(rs2[1:])
    instruction = (opcode << 28) | (rs2_address << 23)

    output_vec = [None] * VECTOR_SIZE
    # Log details
    dut._log.info(f"STORE {rs2}")
    dut._log.info(f"rs2: {rs2_address}, Opcode: {bin(opcode)[2:]}")

    for i in range(VECTOR_SIZE):
        dut.instruction.value = instruction | (i << 8)
        await Timer(1, units="ns")
        output_vec[i] = (Fixed(dut.output_data.value.integer, True))
        await ClockCycles(dut.clk, 1)

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
async def test_quantile(dut):
    """Test the quantile module with LOAD and STORE instructions."""
    # Generate clock
    # Set the clock period to 10 us (100 MHz)
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset the DUT
    await reset_dut(dut)



    # Define input vector
    vec_1 = [Fixed(1.5), Fixed(-2.25), Fixed(3.75), Fixed(-4.125), Fixed(5.375), Fixed(-6.625), Fixed(7.875), Fixed(-8.0625)]
    vec_2 = [Fixed(1.5), Fixed(-2.25), Fixed(3.75), Fixed(-4.125), Fixed(5.375), Fixed(-6.625), Fixed(7.875), Fixed(-8.0625)]

    dut._log.info(f"x0 = {await store(dut, "x0")}")

    await load(dut,"x1", vec_1)
    await load(dut,"x2", vec_2)

    dut._log.info(f"x1 = {await store(dut, "x1")}")
    dut._log.info(f"x2 = {await store(dut, "x2")}")

    await instruction(dut, "ADD", "x3", "x0", "x1")

    dut._log.info(f"x3 = {await store(dut, "x3")}")

    await instruction(dut, "ADD", "x4", "x1", "x2")

    dut._log.info(f"x4 = {await store(dut, "x4")}")

    await instruction(dut, "SUB", "x5", "x4", "x1")

    dut._log.info(f"x5 = {await store(dut, "x5")}")

    scaler = [Fixed(2.0)] + [Fixed(1.0)] * (VECTOR_SIZE - 1)

    await load(dut, "x8", scaler)

    await instruction(dut, "MUL", "x6", "x1", "x8", 0)

    dut._log.info(f"x6 = {await store(dut, "x6")}")

    await instruction(dut, "DIV", "x7", "x1", "x8", 0)

    dut._log.info(f"x6 = {await store(dut, "x7")}")

    await instruction(dut, "SLT", "x9", "x1", "x8")

    dut._log.info(f"x6 = {await store(dut, "x9")}")
