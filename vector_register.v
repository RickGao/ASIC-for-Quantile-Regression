`define VECTOR_SIZE 8  // Define the vector size (number of 32-bit elements per vector)

module vector_register (
    input  wire clk,                                      // Clock signal
    input  wire rst_n,                                    // Active-low reset signal
    input  wire [4:0] read_addr_a,                        // 5-bit address for read vector 1
    input  wire [4:0] read_addr_b,                        // 5-bit address for read vector 2
    input  wire [4:0] write_addr,                         // 5-bit address for write vector
    input  wire we,                                       // Write enable
    input  wire [`VECTOR_SIZE*32-1:0] write_vec,          // Data to write (full vector)
    input  wire [31:0] write_scalar,                      // Data to write (scalar element)
    input  wire [2:0] index,                              // Index of the element within the vector
    input  wire index_mode,                               // Mode: 0 for vector write, 1 for scalar write
    output wire [`VECTOR_SIZE*32-1:0] read_vec_a,         // Output vector 1
    output wire [`VECTOR_SIZE*32-1:0] read_vec_b,         // Output vector 2
    output wire [31:0] read_scalar                        // Output scalar element
);

    // Define 32 vector registers, each holding VECTOR_SIZE 32-bit elements
    reg [`VECTOR_SIZE*32-1:0] reg_file [31:0];

    // Asynchronous read for full vectors
    assign read_vec_a = reg_file[read_addr_a];
    assign read_vec_b = reg_file[read_addr_b];

    // Asynchronous read for scalar elements
    assign read_scalar = reg_file[read_addr_b][index*32 +: 32];

    // Synchronous write
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all vector registers to 0
            for (int i = 0; i < 32; i = i + 1) begin
                reg_file[i] <= '0;
            end
        end else if (index_mode) begin
            // Scalar write operation
            if (we && write_addr != 5'b00000) begin
                reg_file[write_addr][index*32 +: 32] <= write_scalar;
            end
        end else if (we && write_addr != 5'b00000) begin
            // Vector write operation
            reg_file[write_addr] <= write_vec;
        end
    end

endmodule
