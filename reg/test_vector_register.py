import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from random import randint

# Define VECTOR_SIZE as a constant for Python
VECTOR_SIZE = 8


async def reset_dut(dut):
    """Reset the DUT."""
    dut.rst_n.value = 0  # Assert reset
    await RisingEdge(dut.clk)  # Wait for one clock cycle
    dut.rst_n.value = 1  # Deassert reset
    await RisingEdge(dut.clk)  # Wait for another clock cycle


async def write_vector_register(dut, addr, data):
    """Writes a vector to the specified register."""
    data_256 = int(data, 16) & ((1 << 256) - 1)
    dut.write_addr.value = addr
    dut.write_vec.value = data_256
    dut.index_mode.value = 0  # Vector operation
    dut.we.value = 1
    await RisingEdge(dut.clk)
    dut.we.value = 0


async def read_vector_register(dut, addr_a, addr_b):
    """Reads vectors from two specified registers asynchronously."""
    dut.read_addr_a.value = addr_a
    dut.read_addr_b.value = addr_b
    await Timer(1, units="ns")  # Small delay to stabilize the asynchronous read
    read_a = dut.read_vec_a.value.integer
    read_b = dut.read_vec_b.value.integer
    return read_a, read_b


async def write_scalar_register(dut, addr, index, scalar):
    """Writes a scalar to a specific index of the register."""
    dut.write_addr.value = addr
    dut.write_scalar.value = scalar
    dut.index.value = index
    dut.index_mode.value = 1  # Scalar operation
    dut.we.value = 1
    await RisingEdge(dut.clk)
    dut.we.value = 0


async def read_scalar_register(dut, addr, index):
    """Reads a scalar from a specific index of the register."""
    dut.read_addr_b.value = addr
    dut.index.value = index
    await Timer(1, units="ns")  # Small delay to stabilize the asynchronous read
    return dut.read_scalar.value.integer


@cocotb.test()
async def test_vector_register(dut):
    """Test the vector register with comprehensive scenarios."""
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset the DUT
    await reset_dut(dut)

    # Test Case 1: Sequential write and read of full vectors
    dut._log.info("Test Case 1: Sequential write and read of full vectors")
    test_values = [
        "1111111111111111111111111111111111111111111111111111111111111111",
        "2222222222222222222222222222222222222222222222222222222222222222",
        "3333333333333333333333333333333333333333333333333333333333333333",
    ]
    for i, data in enumerate(test_values, 1):
        await write_vector_register(dut, addr=i, data=data)
        read_a, _ = await read_vector_register(dut, addr_a=i, addr_b=0)
        assert read_a == int(data, 16), f"Sequential write/read failed at register {i}"

    # Test Case 2: Scalar write and read
    dut._log.info("Test Case 2: Scalar write and read")
    scalar_value = 0xAABBCCDD
    scalar_index = 3
    register_addr = 5
    await write_scalar_register(dut, addr=register_addr, index=scalar_index, scalar=scalar_value)
    read_scalar = await read_scalar_register(dut, addr=register_addr, index=scalar_index)
    assert read_scalar == scalar_value, f"Scalar write/read failed at index {scalar_index} in register {register_addr}"

    # Test Case 3: Reset during operation
    dut._log.info("Test Case 3: Reset during operation")
    await write_vector_register(dut, addr=1, data="DEAD" * 16)
    await reset_dut(dut)
    read_a, _ = await read_vector_register(dut, addr_a=1, addr_b=0)
    assert read_a == 0, "Reset during operation failed"

    # Test Case 4: Back-to-back scalar writes
    dut._log.info("Test Case 4: Back-to-back scalar writes")
    for i in range(VECTOR_SIZE):
        await write_scalar_register(dut, addr=2, index=i, scalar=i)
    for i in range(VECTOR_SIZE):
        read_scalar = await read_scalar_register(dut, addr=2, index=i)
        assert read_scalar == i, f"Back-to-back scalar writes failed at index {i}"

    # Test Case 5: Mixed scalar and vector writes
    dut._log.info("Test Case 5: Mixed scalar and vector writes")
    await write_vector_register(dut, addr=3, data="CAFEBABE" * 8)
    await write_scalar_register(dut, addr=3, index=4, scalar=0xDEADBEEF)
    read_scalar = await read_scalar_register(dut, addr=3, index=4)
    assert read_scalar == 0xDEADBEEF, "Mixed scalar and vector write failed"
    read_a, _ = await read_vector_register(dut, addr_a=3, addr_b=0)
    assert (read_a >> (4 * 32)) & 0xFFFFFFFF == 0xDEADBEEF, "Mixed write data mismatch"

    dut._log.info("All test cases passed!")
