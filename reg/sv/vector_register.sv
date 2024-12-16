`define VECTOR_SIZE 8  // Define the vector size (number of 32-bit elements per vector)

module vector_register (
    input  wire clk,                                      // Clock signal
    input  wire rst_n,                                    // Active-low reset signal
    input  wire [4:0] read_addr_a,                         // 5-bit address for read vector 1
    input  wire [4:0] read_addr_b,                         // 5-bit address for read vector 2
    input  wire [4:0] write_addr,                         // 5-bit address for write vector
    input  wire we,                                       // Write enable
    input  wire [31:0] write_vec[`VECTOR_SIZE-1:0],       // Data to write (unpacked vector)
    output wire [31:0] read_vec_a[`VECTOR_SIZE-1:0],      // Output vector 1 (unpacked)
    output wire [31:0] read_vec_b[`VECTOR_SIZE-1:0]       // Output vector 2 (unpacked)
);

    // Define 32 vector registers, each holding VECTOR_SIZE 32-bit elements
    reg [31:0] reg_file[31:0][`VECTOR_SIZE-1:0];

    // Asynchronous read
    generate
        genvar i;
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : gen_read
            assign read_vec_a[i] = reg_file[read_addr_a][i];
            assign read_vec_b[i] = reg_file[read_addr_b][i];
        end
    endgenerate

    // Synchronous write
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset all vector registers to 0
            integer reg_idx, elem_idx;
            for (reg_idx = 0; reg_idx < 32; reg_idx = reg_idx + 1) begin
                for (elem_idx = 0; elem_idx < `VECTOR_SIZE; elem_idx = elem_idx + 1) begin
                    reg_file[reg_idx][elem_idx] <= 32'b0;
                end
            end
        end else if (we && write_addr != 5'b00000) begin
            // Write vector to the specified register, skip register 0
            integer elem_idx;
            for (elem_idx = 0; elem_idx < `VECTOR_SIZE; elem_idx = elem_idx + 1) begin
                reg_file[write_addr][elem_idx] <= write_vec[elem_idx];
            end
        end
    end


endmodule
