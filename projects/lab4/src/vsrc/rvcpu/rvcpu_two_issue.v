
module rvcpu_two_issue #(
    parameter PC_START  = 32'h8000_0000, 
    parameter ISSUE_NUM = 2,
    parameter INST_DW   = 32,
    parameter INST_AW   = 32,
    parameter MEM_DW    = 32,
    parameter MEM_AW    = 32,
    parameter RAM_DW    = 32,
    parameter RAM_AW    = 32,
    parameter REG_DW    = 32,
    parameter REG_AW    = 5,
    parameter ALUOP_DW  = 5
)(
    input                           clk,
    input                           rst,

    output                          inst_en_o,
    output  [INST_AW-1:0]           inst_addr_o,
    input   [INST_DW*ISSUE_NUM-1:0] inst_i,

    output                          ram_ren_o,
    output                          ram_wen_o,
    output  [RAM_AW-1:0]            ram_addr_o,
    output  [RAM_DW-1:0]            ram_mask_o,
    output  [RAM_DW-1:0]            ram_din_o,
    input   [RAM_DW-1:0]            ram_dout_i
);


endmodule 
