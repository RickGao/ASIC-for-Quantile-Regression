`define VECTOR_SIZE 8

// Vector addition module for floating point
module vector_add (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,  // Parameterized width
    input [(32*`VECTOR_SIZE)-1:0] vec_b,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : add_loop
            fp_add adder (
                .a(vec_a[32*i+31 : 32*i]),
                .b(vec_b[32*i+31 : 32*i]),
                .result(result[32*i+31 : 32*i])
            );
        end
    endgenerate
endmodule

// Vector subtraction module for floating point
module vector_sub (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,
    input [(32*`VECTOR_SIZE)-1:0] vec_b,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : sub_loop
            fp_sub subtractor (
                .a(vec_a[32*i+31 : 32*i]),
                .b(vec_b[32*i+31 : 32*i]),
                .result(result[32*i+31 : 32*i])
            );
        end
    endgenerate
endmodule

// Vector scalar multiplication module for floating point
module vector_muls (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,
    input [31:0] scalar,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : mul_loop
            fp_mul multiplier (
                .a(vec_a[32*i+31 : 32*i]),
                .b(scalar),
                .result(result[32*i+31 : 32*i])
            );
        end
    endgenerate
endmodule

// Vector scalar division module for floating point
module vector_divs (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,
    input [31:0] scalar,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : div_loop
            fp_div divider (
                .a(vec_a[32*i+31 : 32*i]),
                .b(scalar),
                .result(result[32*i+31 : 32*i])
            );
        end
    endgenerate
endmodule

// Vector comparison (Set Less Than) module for floating point
module vector_slt (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,
    input [(32*`VECTOR_SIZE)-1:0] vec_b,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    genvar i;
    generate
        for (i = 0; i < `VECTOR_SIZE; i = i + 1) begin : slt_loop
            fp_compare comparator (
                .a(vec_a[32*i+31 : 32*i]),
                .b(vec_b[32*i+31 : 32*i]),
                .result(result[32*i+31 : 32*i])
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
    reg [47:0] extended_a;
    reg [47:0] extended_b;
    reg [47:0] extended_result;

    always @(*) begin
        extended_a = {{16{a[31]}}, a};
        extended_b = {{16{b[31]}}, b};
        extended_result = extended_a + extended_b;
        result = extended_result[31:0];
    end
endmodule

// Fixed-point subtractor
module fp_sub(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);
    reg [47:0] extended_a;
    reg [47:0] extended_b;
    reg [47:0] extended_result;

    always @(*) begin
        extended_a = {{16{a[31]}}, a};
        extended_b = {{16{b[31]}}, b};
        extended_result = extended_a - extended_b;
        result = extended_result[31:0];
    end
endmodule

// Fixed-point multiplier
module fp_mul(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);
    reg [63:0] product;

    always @(*) begin
        product = $signed(a) * $signed(b);
        result = product[47:16];
    end
endmodule

// Fixed-point divider
module fp_div(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);
    reg [63:0] dividend;
    reg [63:0] divisor;
    reg [63:0] quotient;

    always @(*) begin
        dividend = {{32{a[31]}}, a} << 16;
        divisor = {{32{b[31]}}, b};
        quotient = dividend / divisor;
        result = quotient[31:0];
    end
endmodule

// Fixed-point comparator
module fp_compare(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);  
    localparam FIXED_POINT_ONE = 32'h0001_0000;
    localparam FIXED_POINT_ZERO = 32'h0000_0000;

    always @(*) begin
        if (a[31] != b[31]) begin
            result = (a[31]) ? FIXED_POINT_ONE : FIXED_POINT_ZERO;
        end else begin
            result = (a < b) ? FIXED_POINT_ONE : FIXED_POINT_ZERO;
        end
    end
endmodule

// Top module
module vector_processor (
    input [(32*`VECTOR_SIZE)-1:0] vec_a,
    input [(32*`VECTOR_SIZE)-1:0] vec_b,
    input [31:0] scalar,
    input [2:0] operation,
    output [(32*`VECTOR_SIZE)-1:0] result
);
    wire [(32*`VECTOR_SIZE)-1:0] add_result;
    wire [(32*`VECTOR_SIZE)-1:0] sub_result;
    wire [(32*`VECTOR_SIZE)-1:0] mul_result;
    wire [(32*`VECTOR_SIZE)-1:0] div_result;
    wire [(32*`VECTOR_SIZE)-1:0] slt_result;

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
    

    assign result = (operation == 3'b000) ? add_result :
                    (operation == 3'b001) ? sub_result :
                    (operation == 3'b010) ? mul_result :
                    (operation == 3'b011) ? div_result :
                    (operation == 3'b100) ? slt_result :
                    {(32*`VECTOR_SIZE){1'b0}};
                    
endmodule