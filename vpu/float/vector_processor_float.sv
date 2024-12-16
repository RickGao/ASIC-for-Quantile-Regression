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

// Floating point adder
module fp_add(
    input [31:0] a,
    input [31:0] b,
    output reg [31:0] result
);
    // Extract the sign, exponent, and fraction fields
    wire sign_a = a[31];
    wire [7:0] exp_a = a[30:23];
    wire [22:0] frac_a = a[22:0];

    wire sign_b = b[31];
    wire [7:0] exp_b = b[30:23];
    wire [22:0] frac_b = b[22:0];

    // Intermediate signals
    reg [23:0] mantissa_a;
    reg [23:0] mantissa_b;
    reg [23:0] mantissa_large;
    reg [23:0] mantissa_small_shifted;
    reg [7:0] exp_large;
    reg [7:0] exp_diff;
    reg sign_large;
    reg [24:0] mantissa_sum;

    // Normalization result
    reg [7:0] exp_result;
    reg [23:0] frac_result;
    reg sign_result;

    always_comb begin
        // Add implicit leading 1 for normalized numbers, handle denormals
        mantissa_a = (exp_a == 8'd0) ? {1'b0, frac_a} : {1'b1, frac_a};
        mantissa_b = (exp_b == 8'd0) ? {1'b0, frac_b} : {1'b1, frac_b};

        // Align exponents
        if (exp_a > exp_b) begin
            exp_diff = exp_a - exp_b;
            exp_large = exp_a;
            sign_large = sign_a;
            mantissa_large = mantissa_a;
            mantissa_small_shifted = mantissa_b >> exp_diff;
        end else begin
            exp_diff = exp_b - exp_a;
            exp_large = exp_b;
            sign_large = sign_b;
            mantissa_large = mantissa_b;
            mantissa_small_shifted = mantissa_a >> exp_diff;
        end

        // Perform addition or subtraction based on the sign
        if (sign_large == sign_b) begin
            mantissa_sum = {1'b0, mantissa_large} + {1'b0, mantissa_small_shifted};
        end else begin
            mantissa_sum = {1'b0, mantissa_large} - {1'b0, mantissa_small_shifted};
        end

        // Normalize the result
        if (mantissa_sum[24]) begin
            // If carry, shift right and increase exponent
            frac_result = mantissa_sum[24:1];
            exp_result = exp_large + 1;
        end else begin
            // Normalize by left-shifting mantissa and decrementing exponent
            frac_result = mantissa_sum[23:0];
            exp_result = exp_large;
            while (frac_result[23] == 0 && exp_result > 0) begin
                frac_result = frac_result << 1;
                exp_result = exp_result - 1;
            end
        end

        // Determine the result sign
        sign_result = sign_large;

        // Construct the final result
        result = {sign_result, exp_result, frac_result[22:0]};
    end
endmodule



// Floating point subtractor
module fp_sub (
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    wire [31:0] neg_b;
    assign neg_b = {~b[31], b[30:0]}; // Negate b by flipping sign bit
    
    fp_add adder (
        .a(a),
        .b(neg_b),
        .result(result)
    );
endmodule

// Floating point multiplier
module fp_mul (
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    wire sign_a = a[31];
    wire sign_b = b[31];
    wire [7:0] exp_a = a[30:23];
    wire [7:0] exp_b = b[30:23];
    wire [22:0] frac_a = a[22:0];
    wire [22:0] frac_b = b[22:0];
    
    reg sign_result;
    reg [8:0] exp_result;
    reg [47:0] mul_frac;
    
    always_comb begin
        // Default assignments
        sign_result = 1'b0;
        exp_result = 9'd0;
        mul_frac = 48'd0;
        result = 32'd0;

        if ((exp_a == 0 && frac_a == 0) || (exp_b == 0 && frac_b == 0)) begin
            result = 32'd0;
        end else begin
            // Calculate sign
            sign_result = sign_a ^ sign_b;
            
            // Calculate exponent
            exp_result = exp_a + exp_b - 8'd127;
            
            // Multiply fractions (including hidden bits)
            mul_frac = ({1'b1, frac_a} * {1'b1, frac_b});
            
            // Normalize
            if (mul_frac[47]) begin
                mul_frac = mul_frac >> 1;
                exp_result = exp_result + 9'd1;
            end
            
            // Final result
            result = {sign_result, exp_result[7:0], mul_frac[45:23]};
        end
    end
endmodule


    
// Mantissa inverter with higher precision
module mantissa_inverter (
    input  logic [22:0] in1,
    output logic [23:0] out
);
    logic [47:0] dividend;
    logic [47:0] divisor;
    logic [47:0] temp;
    logic [24:0] rounded;
    
    always_comb begin
        // 2.0 in fixed point (2 << 46)
        dividend = 48'h200000000000;
        // Extend divisor with hidden bit
        divisor = {24'b0, 1'b1, in1};
        // Perform division
        temp = dividend / divisor;
        // Round to nearest
        rounded = temp[46:22] + {24'b0, temp[21]};
        // Output with proper scaling
        out = rounded[23:0];
    end
endmodule

// Main division module
module fp_div (
    input  logic [31:0] a,
    input  logic [31:0] b,
    output logic [31:0] result
);
    // Internal signals
    logic [22:0] b_mantissa;
    logic [23:0] inv_mant;
    logic [7:0] neg_exp_tmp, neg_exp;
    logic [31:0] mult_in_b;
    
    // Instantiate submodules
    mantissa_inverter inverter (
        .in1(b[22:0]),
        .out(inv_mant)
    );

    fp_mul multiplier (
        .a(a),
        .b(mult_in_b),
        .result(result)
    );

    always_comb begin
        // Default assignments
        b_mantissa = b[22:0];
        neg_exp_tmp = 8'd254 - b[30:23];
        neg_exp = (inv_mant == 24'h0) ? neg_exp_tmp : (neg_exp_tmp - 8'd1);
        
        // Assemble multiplier input B (reciprocal of b)
        mult_in_b = {b[31], neg_exp, inv_mant[23:1]};
    end

endmodule



// Floating point comparator
module fp_compare (
    input wire [31:0] a,
    input wire [31:0] b,
    output reg [31:0] result
);
    wire sign_a = a[31];
    wire sign_b = b[31];
    wire [7:0] exp_a = a[30:23];
    wire [7:0] exp_b = b[30:23];
    wire [22:0] frac_a = a[22:0];
    wire [22:0] frac_b = b[22:0];
    
    always_comb begin
        result = 32'b0;  // Default assignment
        
        if (sign_a != sign_b) begin
            result = sign_a ? 32'b1 : 32'b0;
        end else if (exp_a != exp_b) begin
            result = (sign_a ^ (exp_a < exp_b)) ? 32'b1 : 32'b0;
        end else if (frac_a != frac_b) begin
            result = (sign_a ^ (frac_a < frac_b)) ? 32'b1 : 32'b0;
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