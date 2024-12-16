`define VECTOR_SIZE 8

// Vector addition module for floating point
module vector_add (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] vec_b[`VECTOR_SIZE-1:0],
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i++) begin : add_loop
            fp_add adder (
                .a(vec_a[i]),
                .b(vec_b[i]),
                .result(result[i])
            );
        end
    endgenerate
endmodule

// Vector subtraction module for floating point
module vector_sub (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] vec_b[`VECTOR_SIZE-1:0],
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i++) begin : sub_loop
            fp_sub subtractor (
                .a(vec_a[i]),
                .b(vec_b[i]),
                .result(result[i])
            );
        end
    endgenerate
endmodule

// Vector scalar multiplication module for floating point
module vector_muls (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] scalar,
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i++) begin : mul_loop
            fp_mul multiplier (
                .a(vec_a[i]),
                .b(scalar),
                .result(result[i])
            );
        end
    endgenerate
endmodule

// Vector scalar division module for floating point
module vector_divs (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] scalar,
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i++) begin : div_loop
            fp_div divider (
                .a(vec_a[i]),
                .b(scalar),
                .result(result[i])
            );
        end
    endgenerate
endmodule

// Vector comparison (Set Less Than) module for floating point
module vector_slt (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] vec_b[`VECTOR_SIZE-1:0],
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i++) begin : slt_loop
            fp_compare comparator (
                .a(vec_a[i]),
                .b(vec_b[i]),
                .result(result[i])
            );
        end
    endgenerate
endmodule



// Fixed-point adder
module fp_add(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);
    reg signed [47:0] extended_a;
    reg signed [47:0] extended_b;
    reg signed [47:0] extended_result;

    always_comb begin
        // Extend to higher precision to avoid overflow
        extended_a = {{16{a[31]}}, a};
        extended_b = {{16{b[31]}}, b};
        extended_result = extended_a + extended_b;
        
        // Truncate back to 32 bits
        result = extended_result[31:0];
    end
endmodule

// Fixed-point subtractor
module fp_sub(
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    reg signed [47:0] extended_a;
    reg signed [47:0] extended_b;
    reg signed [47:0] extended_result;

    always_comb begin
        // Extend to higher precision to avoid overflow
        extended_a = {{16{a[31]}}, a};
        extended_b = {{16{b[31]}}, b};
        extended_result = extended_a - extended_b;
        
        // Truncate back to 32 bits
        result = extended_result[31:0];
    end
endmodule

// Fixed-point multiplier
module fp_mul(
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    reg signed [63:0] product;

    always_comb begin
        // Perform multiplication
        product = $signed(a) * $signed(b);

        // Adjust the result by right-shifting 16 bits (to account for fixed-point scaling)
        result = product[47:16];
    end
endmodule

module fp_div(
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    reg signed [63:0] dividend;  // Extend to 64 bits for shift
    reg signed [63:0] divisor;   // Extend divisor to 64 bits
    reg signed [63:0] quotient;  // Store full division result before truncation

    always_comb begin
        // Extend inputs to 64 bits
        dividend = { {32{a[31]}}, a } <<< 16;  // Sign-extend 'a' to 64 bits, then shift
        divisor = { {32{b[31]}}, b };         // Sign-extend 'b' to 64 bits

        // Perform division
        quotient = dividend / divisor;

        // Truncate the result back to 32 bits
        result = quotient[31:0];
    end
endmodule


// Fixed-point comparator
module fp_compare(
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    always_comb begin
        if ($signed(a) < $signed(b)) begin
            result = 32'b1;
        end else begin
            result = 32'b0;
        end
    end
endmodule





// Top module
module vector_processor (
    input wire [31:0] vec_a[`VECTOR_SIZE-1:0],
    input wire [31:0] vec_b[`VECTOR_SIZE-1:0],
    input wire [31:0] scalar,
    input wire [2:0] operation,
    output reg [31:0] result[`VECTOR_SIZE-1:0]
);
    wire [31:0] add_result[`VECTOR_SIZE-1:0];
    wire [31:0] sub_result[`VECTOR_SIZE-1:0];
    wire [31:0] mul_result[`VECTOR_SIZE-1:0];
    wire [31:0] div_result[`VECTOR_SIZE-1:0];
    wire [31:0] slt_result[`VECTOR_SIZE-1:0];

    vector_add add_inst (
        .vec_a(vec_a),
        .vec_b(vec_b),
        .result(add_result)
    );

    vector_sub sub_inst (
        .vec_a(vec_a),
        .vec_b(vec_b),
        .result(sub_result)
    );

    vector_muls mult_inst (
        .vec_a(vec_a),
        .scalar(scalar),
        .result(mul_result)
    );

    vector_divs div_inst (
        .vec_a(vec_a),
        .scalar(scalar),
        .result(div_result)
    );

    vector_slt comp_inst (
        .vec_a(vec_a),
        .vec_b(vec_b),
        .result(slt_result)
    );

    always_comb begin
        case (operation)
            3'b000: result = add_result;
            3'b001: result = sub_result;
            3'b010: result = mul_result;
            3'b011: result = div_result;
            3'b100: result = slt_result;
            default: result = '{default: 32'b0};
        endcase
    end
endmodule