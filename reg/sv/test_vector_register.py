import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, FallingEdge
from random import randint

VECTOR_SIZE = 8  # Set the constant vector size


async def reset_dut(dut):
    """Reset the DUT."""
    dut.rst_n.value = 0  # Assert reset
    await RisingEdge(dut.clk)  # Wait for one clock cycle
    dut.rst_n.value = 1  # Deassert reset
    await RisingEdge(dut.clk)  # Wait for another clock cycle


async def write_vector_register(dut, addr, data):
    """Writes a vector to the specified register."""
    dut.write_addr.value = addr
    for i in range(VECTOR_SIZE):
        dut.write_vec[i].value = int(data[i], 16)  # Assign individual elements
    dut.we.value = 1
    await RisingEdge(dut.clk)  # Perform the write on the clock edge
    dut.we.value = 0


async def read_vector_register(dut, addr_a, addr_b):
    """Reads vectors from two specified registers asynchronously."""
    dut.read_addr_a.value = addr_a
    dut.read_addr_b.value = addr_b
    await Timer(1, units="ns")  # Small delay to stabilize the asynchronous read
    read_a = [dut.read_vec_a[i].value.integer for i in range(VECTOR_SIZE)]
    read_b = [dut.read_vec_b[i].value.integer for i in range(VECTOR_SIZE)]
    return read_a, read_b


@cocotb.test()
async def test_vector_register(dut):
    """Test the vector register with comprehensive scenarios."""

    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset the DUT
    await reset_dut(dut)

    # Common Use Cases

    # Test Case 1: Sequential write and read to multiple registers
    dut._log.info("Test Case 1: Sequential write and read")
    test_values = [
        ["11111111" for _ in range(VECTOR_SIZE)],
        ["22222222" for _ in range(VECTOR_SIZE)],
        ["33333333" for _ in range(VECTOR_SIZE)],
    ]

    for i, data in enumerate(test_values, 1):
        await write_vector_register(dut, addr=i, data=data)
        read_a, _ = await read_vector_register(dut, addr_a=i, addr_b=0)
        assert read_a == [int(val, 16) for val in data], f"Sequential write/read failed at register {i}"

    # Test Case 2: Back-to-back writes
    dut._log.info("Test Case 2: Back-to-back writes")
    data1 = ["AAAAAAAA" for _ in range(VECTOR_SIZE)]
    data2 = ["BBBBBBBB" for _ in range(VECTOR_SIZE)]
    await write_vector_register(dut, addr=1, data=data1)
    await write_vector_register(dut, addr=2, data=data2)
    read_a, read_b = await read_vector_register(dut, addr_a=1, addr_b=2)
    assert read_a == [int(val, 16) for val in data1] and read_b == [int(val, 16) for val in
                                                                    data2], "Back-to-back writes failed"

    # Corner Cases

    # Test Case 3: Maximum register address
    dut._log.info("Test Case 3: Maximum register address")
    max_addr = (1 << len(dut.write_addr.value)) - 1
    test_data = ["FEEDBEEF" for _ in range(VECTOR_SIZE)]
    await write_vector_register(dut, addr=max_addr, data=test_data)
    read_a, _ = await read_vector_register(dut, addr_a=max_addr, addr_b=0)
    assert read_a == [int(val, 16) for val in test_data], "Maximum address write/read failed"

    # Test Case 4: All zeros and all ones data patterns
    dut._log.info("Test Case 4: All zeros and all ones patterns")
    all_zeros = ["00000000" for _ in range(VECTOR_SIZE)]
    all_ones = ["FFFFFFFF" for _ in range(VECTOR_SIZE)]
    await write_vector_register(dut, addr=1, data=all_zeros)
    await write_vector_register(dut, addr=2, data=all_ones)
    read_a, read_b = await read_vector_register(dut, addr_a=1, addr_b=2)
    assert read_a == [0 for _ in range(len(all_zeros))], "All zeros pattern failed"
    assert read_b == [(1 << 32) - 1 for _ in range(len(all_ones))], "All ones pattern failed"

    # Uncommon Use Cases

    # Test Case 5: Write-read-write to same register
    dut._log.info("Test Case 5: Write-read-write to same register")
    data1 = ["12345678" for _ in range(VECTOR_SIZE)]
    data2 = ["FEDCBA98" for _ in range(VECTOR_SIZE)]
    await write_vector_register(dut, addr=1, data=data1)
    read_a, _ = await read_vector_register(dut, addr_a=1, addr_b=0)
    await write_vector_register(dut, addr=1, data=data2)
    read_b, _ = await read_vector_register(dut, addr_a=1, addr_b=0)
    assert read_a == [int(val, 16) for val in data1] and read_b == [int(val, 16) for val in
                                                                    data2], "Write-read-write failed"

    # Test Case 6: Alternating between reads and writes
    dut._log.info("Test Case 6: Alternating reads and writes")
    for i in range(1, 4):
        test_data = [hex(randint(0, (1 << 32) - 1))[2:].zfill(8) for _ in range(VECTOR_SIZE)]
        await write_vector_register(dut, addr=i, data=test_data)
        read_a, _ = await read_vector_register(dut, addr_a=i, addr_b=0)
        assert read_a == [int(val, 16) for val in test_data], f"Alternating read/write failed at iteration {i}"

    # Test Case 7: Reset behavior during active operation
    dut._log.info("Test Case 7: Reset during operation")
    await write_vector_register(dut, addr=1, data=["DEADDEAD" for _ in range(VECTOR_SIZE)])
    await reset_dut(dut)
    read_a, read_b = await read_vector_register(dut, addr_a=1, addr_b=2)
    assert read_a == [0 for _ in range(len(dut.write_vec))] and read_b == [0 for _ in range(
        len(dut.write_vec))], "Reset during operation failed"

    # Test Case 8: Write enable timing
    dut._log.info("Test Case 8: Write enable timing")
    test_data = ["CAFECAFE" for _ in range(VECTOR_SIZE)]
    dut.we.value = 1  # Set write enable without clock edge
    dut.write_addr.value = 1
    for i in range(len(test_data)):
        dut.write_vec[i].value = int(test_data[i], 16)
    await Timer(5, units="ns")  # Half clock cycle
    read_before_clock, _ = await read_vector_register(dut, addr_a=1, addr_b=0)
    await RisingEdge(dut.clk)
    read_after_clock, _ = await read_vector_register(dut, addr_a=1, addr_b=0)
    assert read_after_clock == [int(val, 16) for val in test_data], "Write enable timing failed"

    dut._log.info("All test cases passed!")
