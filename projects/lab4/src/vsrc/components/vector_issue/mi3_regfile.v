
module mi3_regfile #(
    parameter REG_DW    = 32,
    parameter REG_AW    = 5
)(
    input                       clk,
    input                       rst,

    input                       is1_wb_en_i,
    input       [REG_AW-1:0]    is1_wb_addr_i,
    input       [REG_DW-1:0]    is1_wb_data_i,
    input                       is1_rs1_en_i,
    input       [REG_AW-1:0]    is1_rs1_addr_i,
    output reg  [REG_DW-1:0]    is1_rs1_data_o,
    input                       is1_rs2_en_i,
    input       [REG_AW-1:0]    is1_rs2_addr_i,
    output reg  [REG_DW-1:0]    is1_rs2_data_o,

    input                       is2_wb_en_i,
    input       [REG_AW-1:0]    is2_wb_addr_i,
    input       [REG_DW-1:0]    is2_wb_data_i,
    input                       is2_rs1_en_i,
    input       [REG_AW-1:0]    is2_rs1_addr_i,
    output reg  [REG_DW-1:0]    is2_rs1_data_o,
    input                       is2_rs2_en_i,
    input       [REG_AW-1:0]    is2_rs2_addr_i,
    output reg  [REG_DW-1:0]    is2_rs2_data_o,

    input                       is3_rs1_en_i,
    input       [REG_AW-1:0]    is3_rs1_addr_i,
    output reg  [REG_DW-1:0]    is3_rs1_data_o
);


endmodule
