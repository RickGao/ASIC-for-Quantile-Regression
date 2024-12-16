module quantile_chip (
    input  wire clk,             // Clock signal
    input  wire rst_n,           // Active-low reset signal
    input  wire [31:0] instruction, // 32-bit instruction
    input  wire [31:0] input_data,  // Input scalar (used for STORE and scalar writes)
    output wire [31:0] output_data  // Output scalar (used for LOAD and scalar reads)
);

    // Internal signals connecting quantile module to I/O pads
    wire io_clk;
    wire io_rst_n;
    wire [31:0] io_instruction;
    wire [31:0] io_input_data;
    wire [31:0] io_output_data;

    // Instantiate the quantile module
    quantile quantile_inst (
        .clk          ( io_clk         ),
        .rst_n        ( io_rst_n       ),
        .instruction  ( io_instruction ),
        .input_data   ( io_input_data  ),
        .output_data  ( io_output_data )
    );

    // Define macros for I/O instantiation
    `define IN_PAD(name, chip_signal, core_signal) \
        sky130_ef_io__gpiov2_pad_wrapped u_``name ( \
            .PAD      ( chip_signal ), \
            .IN       ( core_signal ), \
            .OUT      ( 1'b0 ), \
            .DM       ( 3'b001 ), \
            .OE_N     ( 1'b1 ), \
            .HLD_H_N  ( 1'b0 ), \
            .ENABLE_H ( 1'b0 ), \
            .ENABLE_INP_H ( 1'b0 ), \
            .ENABLE_VDDA_H ( 1'b0 ), \
            .ENABLE_VSWITCH_H ( 1'b0 ), \
            .ENABLE_VDDIO ( 1'b0 ), \
            .INP_DIS  ( 1'b0 ), \
            .IB_MODE_SEL ( 1'b0 ), \
            .VTRIP_SEL ( 1'b0 ), \
            .SLOW     ( 1'b0 ), \
            .HLD_OVR  ( 1'b0 ), \
            .ANALOG_EN ( 1'b0 ), \
            .ANALOG_SEL ( 1'b0 ), \
            .ANALOG_POL ( 1'b0 ), \
            .AMUXBUS_A ( 1'b0 ), \
            .AMUXBUS_B ( 1'b0 ), \
            .TIE_HI_ESD ( ), \
            .TIE_LO_ESD ( ) \
        );

    `define OUT_PAD(name, chip_signal, core_signal) \
        sky130_ef_io__gpiov2_pad_wrapped u_``name ( \
            .PAD      ( chip_signal ), \
            .OUT      ( core_signal ), \
            .DM       ( 3'b110 ), \
            .OE_N     ( 1'b0 ), \
            .HLD_H_N  ( 1'b0 ), \
            .ENABLE_H ( 1'b0 ), \
            .ENABLE_INP_H ( 1'b0 ), \
            .ENABLE_VDDA_H ( 1'b0 ), \
            .ENABLE_VSWITCH_H ( 1'b0 ), \
            .ENABLE_VDDIO ( 1'b0 ), \
            .INP_DIS  ( 1'b0 ), \
            .IB_MODE_SEL ( 1'b0 ), \
            .VTRIP_SEL ( 1'b0 ), \
            .SLOW     ( 1'b0 ), \
            .HLD_OVR  ( 1'b0 ), \
            .ANALOG_EN ( 1'b0 ), \
            .ANALOG_SEL ( 1'b0 ), \
            .ANALOG_POL ( 1'b0 ), \
            .AMUXBUS_A ( 1'b0 ), \
            .AMUXBUS_B ( 1'b0 ), \
            .IN        (), \
            .TIE_HI_ESD (  ), \
            .TIE_LO_ESD (  ) \
        );


    // Instantiate input pads
    `IN_PAD(clk_pad, clk, io_clk)
    `IN_PAD(rst_n_pad, rst_n, io_rst_n)


    // Instantiate instruction input pads
    `IN_PAD(instruction_pad_0, instruction[0], io_instruction[0])
    `IN_PAD(instruction_pad_1, instruction[1], io_instruction[1])
    `IN_PAD(instruction_pad_2, instruction[2], io_instruction[2])
    `IN_PAD(instruction_pad_3, instruction[3], io_instruction[3])
    `IN_PAD(instruction_pad_4, instruction[4], io_instruction[4])
    `IN_PAD(instruction_pad_5, instruction[5], io_instruction[5])
    `IN_PAD(instruction_pad_6, instruction[6], io_instruction[6])
    `IN_PAD(instruction_pad_7, instruction[7], io_instruction[7])
    `IN_PAD(instruction_pad_8, instruction[8], io_instruction[8])
    `IN_PAD(instruction_pad_9, instruction[9], io_instruction[9])
    `IN_PAD(instruction_pad_10, instruction[10], io_instruction[10])
    `IN_PAD(instruction_pad_11, instruction[11], io_instruction[11])
    `IN_PAD(instruction_pad_12, instruction[12], io_instruction[12])
    `IN_PAD(instruction_pad_13, instruction[13], io_instruction[13])
    `IN_PAD(instruction_pad_14, instruction[14], io_instruction[14])
    `IN_PAD(instruction_pad_15, instruction[15], io_instruction[15])
    `IN_PAD(instruction_pad_16, instruction[16], io_instruction[16])
    `IN_PAD(instruction_pad_17, instruction[17], io_instruction[17])
    `IN_PAD(instruction_pad_18, instruction[18], io_instruction[18])
    `IN_PAD(instruction_pad_19, instruction[19], io_instruction[19])
    `IN_PAD(instruction_pad_20, instruction[20], io_instruction[20])
    `IN_PAD(instruction_pad_21, instruction[21], io_instruction[21])
    `IN_PAD(instruction_pad_22, instruction[22], io_instruction[22])
    `IN_PAD(instruction_pad_23, instruction[23], io_instruction[23])
    `IN_PAD(instruction_pad_24, instruction[24], io_instruction[24])
    `IN_PAD(instruction_pad_25, instruction[25], io_instruction[25])
    `IN_PAD(instruction_pad_26, instruction[26], io_instruction[26])
    `IN_PAD(instruction_pad_27, instruction[27], io_instruction[27])
    `IN_PAD(instruction_pad_28, instruction[28], io_instruction[28])
    `IN_PAD(instruction_pad_29, instruction[29], io_instruction[29])
    `IN_PAD(instruction_pad_30, instruction[30], io_instruction[30])
    `IN_PAD(instruction_pad_31, instruction[31], io_instruction[31])

    // Instantiate input_data input pads
    `IN_PAD(input_data_pad_0, input_data[0], io_input_data[0])
    `IN_PAD(input_data_pad_1, input_data[1], io_input_data[1])
    `IN_PAD(input_data_pad_2, input_data[2], io_input_data[2])
    `IN_PAD(input_data_pad_3, input_data[3], io_input_data[3])
    `IN_PAD(input_data_pad_4, input_data[4], io_input_data[4])
    `IN_PAD(input_data_pad_5, input_data[5], io_input_data[5])
    `IN_PAD(input_data_pad_6, input_data[6], io_input_data[6])
    `IN_PAD(input_data_pad_7, input_data[7], io_input_data[7])
    `IN_PAD(input_data_pad_8, input_data[8], io_input_data[8])
    `IN_PAD(input_data_pad_9, input_data[9], io_input_data[9])
    `IN_PAD(input_data_pad_10, input_data[10], io_input_data[10])
    `IN_PAD(input_data_pad_11, input_data[11], io_input_data[11])
    `IN_PAD(input_data_pad_12, input_data[12], io_input_data[12])
    `IN_PAD(input_data_pad_13, input_data[13], io_input_data[13])
    `IN_PAD(input_data_pad_14, input_data[14], io_input_data[14])
    `IN_PAD(input_data_pad_15, input_data[15], io_input_data[15])
    `IN_PAD(input_data_pad_16, input_data[16], io_input_data[16])
    `IN_PAD(input_data_pad_17, input_data[17], io_input_data[17])
    `IN_PAD(input_data_pad_18, input_data[18], io_input_data[18])
    `IN_PAD(input_data_pad_19, input_data[19], io_input_data[19])
    `IN_PAD(input_data_pad_20, input_data[20], io_input_data[20])
    `IN_PAD(input_data_pad_21, input_data[21], io_input_data[21])
    `IN_PAD(input_data_pad_22, input_data[22], io_input_data[22])
    `IN_PAD(input_data_pad_23, input_data[23], io_input_data[23])
    `IN_PAD(input_data_pad_24, input_data[24], io_input_data[24])
    `IN_PAD(input_data_pad_25, input_data[25], io_input_data[25])
    `IN_PAD(input_data_pad_26, input_data[26], io_input_data[26])
    `IN_PAD(input_data_pad_27, input_data[27], io_input_data[27])
    `IN_PAD(input_data_pad_28, input_data[28], io_input_data[28])
    `IN_PAD(input_data_pad_29, input_data[29], io_input_data[29])
    `IN_PAD(input_data_pad_30, input_data[30], io_input_data[30])
    `IN_PAD(input_data_pad_31, input_data[31], io_input_data[31])

    // Instantiate output pads
    `OUT_PAD(output_data_pad_0, output_data[0], io_output_data[0])
    `OUT_PAD(output_data_pad_1, output_data[1], io_output_data[1])
    `OUT_PAD(output_data_pad_2, output_data[2], io_output_data[2])
    `OUT_PAD(output_data_pad_3, output_data[3], io_output_data[3])
    `OUT_PAD(output_data_pad_4, output_data[4], io_output_data[4])
    `OUT_PAD(output_data_pad_5, output_data[5], io_output_data[5])
    `OUT_PAD(output_data_pad_6, output_data[6], io_output_data[6])
    `OUT_PAD(output_data_pad_7, output_data[7], io_output_data[7])
    `OUT_PAD(output_data_pad_8, output_data[8], io_output_data[8])
    `OUT_PAD(output_data_pad_9, output_data[9], io_output_data[9])
    `OUT_PAD(output_data_pad_10, output_data[10], io_output_data[10])
    `OUT_PAD(output_data_pad_11, output_data[11], io_output_data[11])
    `OUT_PAD(output_data_pad_12, output_data[12], io_output_data[12])
    `OUT_PAD(output_data_pad_13, output_data[13], io_output_data[13])
    `OUT_PAD(output_data_pad_14, output_data[14], io_output_data[14])
    `OUT_PAD(output_data_pad_15, output_data[15], io_output_data[15])
    `OUT_PAD(output_data_pad_16, output_data[16], io_output_data[16])
    `OUT_PAD(output_data_pad_17, output_data[17], io_output_data[17])
    `OUT_PAD(output_data_pad_18, output_data[18], io_output_data[18])
    `OUT_PAD(output_data_pad_19, output_data[19], io_output_data[19])
    `OUT_PAD(output_data_pad_20, output_data[20], io_output_data[20])
    `OUT_PAD(output_data_pad_21, output_data[21], io_output_data[21])
    `OUT_PAD(output_data_pad_22, output_data[22], io_output_data[22])
    `OUT_PAD(output_data_pad_23, output_data[23], io_output_data[23])
    `OUT_PAD(output_data_pad_24, output_data[24], io_output_data[24])
    `OUT_PAD(output_data_pad_25, output_data[25], io_output_data[25])
    `OUT_PAD(output_data_pad_26, output_data[26], io_output_data[26])
    `OUT_PAD(output_data_pad_27, output_data[27], io_output_data[27])
    `OUT_PAD(output_data_pad_28, output_data[28], io_output_data[28])
    `OUT_PAD(output_data_pad_29, output_data[29], io_output_data[29])
    `OUT_PAD(output_data_pad_30, output_data[30], io_output_data[30])
    `OUT_PAD(output_data_pad_31, output_data[31], io_output_data[31])


endmodule
