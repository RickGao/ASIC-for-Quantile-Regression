`define VECTOR_SIZE 8  // Define the number of 32-bit elements per vector

module quantile (
    input wire clk,                                      // Clock signal
    input wire rst_n,                                    // Active-low reset signal
    input wire [31:0] instruction,                      // 32-bit instruction
    input wire [31:0] input_data,                       // Input scalar (used for STORE and scalar writes)
    output wire [31:0] output_data                      // Output scalar (used for LOAD and scalar reads)
);

    // Internal signals
    wire [3:0] opcode;                                  // Operation code
    wire [4:0] rs1, rs2, rd;                            // Register addresses
    wire [4:0] index;                                   // Scalar index
    wire we;                                            // Write enable
    wire index_mode;                                    // Determines if operation is scalar or vector
    wire [31:0] read_scalar;                            // Scalar read from vector register
    wire [`VECTOR_SIZE*32-1:0] read_vec_a;              // Read vector A (packed)
    wire [`VECTOR_SIZE*32-1:0] read_vec_b;              // Read vector B (packed)
    wire [`VECTOR_SIZE*32-1:0] result_vec;              // Result vector (packed)

    // Decode instruction
    assign opcode = instruction[31:28];
    assign rs2 = instruction[27:23];
    assign rs1 = instruction[22:18];
    assign rd = instruction[17:13];
    assign index = instruction[12:8];

    // Write enable logic
    assign we = (opcode == 4'b0000 || opcode == 4'b0001 || opcode == 4'b0010 || opcode == 4'b0011 || opcode == 4'b0100 || opcode == 4'b1000);

    // Scalar or index-based operation mode
    assign index_mode = (opcode == 4'b1000 || opcode == 4'b1001);

    // Instantiate vector register file
    vector_register vreg (
        .clk(clk),
        .rst_n(rst_n),
        .read_addr_a(rs1),
        .read_addr_b(rs2),
        .write_addr(rd),
        .we(we),
        .write_vec(result_vec),                         // Write result vector for vector operations
        .write_scalar(input_data),                      // Write input scalar for STORE
        .index(index[2:0]),
        .index_mode(index_mode),
        .read_vec_a(read_vec_a),
        .read_vec_b(read_vec_b),
        .read_scalar(read_scalar)
    );

    // Instantiate vector processor
    vector_processor vproc (
        .vec_a(read_vec_a),
        .vec_b(read_vec_b),
        .scalar(read_scalar),                           // Scalar input for scalar operations
        .operation(opcode[2:0]),                        // Use lower 3 bits of opcode for operation
        .result(result_vec)                             // Output result vector
    );

    // Output data logic for LOAD operation
    assign output_data = (opcode == 4'b1001) ? read_scalar : 32'b0;

endmodule
