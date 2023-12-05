
module v_regfile #(
    parameter VREG_DW    = 256,
    parameter VREG_AW    = 5
)(
    input                       clk,
    input                       rst,

    input                       vwb_en_i,
    input       [VREG_AW-1:0]   vwb_addr_i,
    input       [VREG_DW-1:0]   vwb_data_i,

    input                       vs1_en_i,
    input       [VREG_AW-1:0]   vs1_addr_i,
    output reg  [VREG_DW-1:0]   vs1_data_o,

    input                       vs2_en_i,
    input       [VREG_AW-1:0]   vs2_addr_i,
    output reg  [VREG_DW-1:0]   vs2_data_o
);

endmodule
