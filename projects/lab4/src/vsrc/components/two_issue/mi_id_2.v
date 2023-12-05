`include "define_rv32im.v"

module mi_id_2 #(
    parameter INST_DW   = 32,
    parameter INST_AW   = 32,
    parameter MEM_AW    = 32,
    parameter REG_DW    = 32,
    parameter REG_AW    = 5,
    parameter ALUOP_DW  = 5

) (
    input                   clk,
    input                   rst,
    // instruction
    input   [INST_DW-1:0]   inst_i,
    // regfile
    output                  rs1_en_o,
    output  [REG_AW-1:0]    rs1_addr_o,
    input   [REG_DW-1:0]    rs1_dout_i,
    output                  rs2_en_o,
    output  [REG_AW-1:0]    rs2_addr_o,
    input   [REG_DW-1:0]    rs2_dout_i,
    // alu
    output  [ALUOP_DW-1:0]  alu_opcode_o,
    output  [REG_DW-1:0]    operand_1_o,
    output  [REG_DW-1:0]    operand_2_o,
    // mem-access
    output                  mem_ren_o,
    output                  mem_wen_o,
    output  [INST_DW-1:0]   mem_din_o,
    // write-back
    output                  id_wb_en_o,
    output  [REG_AW-1:0]    id_wb_addr_o 
);

localparam ALU_OP_NOP   = 5'd0 ;
localparam ALU_OP_ADD   = 5'd1 ;
localparam ALU_OP_MUL   = 5'd2 ;
localparam ALU_OP_BNE   = 5'd3 ;
localparam ALU_OP_JAL   = 5'd4 ;
localparam ALU_OP_LUI   = 5'd5 ;
localparam ALU_OP_AUIPC = 5'd6 ;
localparam ALU_OP_AND   = 5'd7 ;
localparam ALU_OP_SLL   = 5'd8 ;
localparam ALU_OP_SLT   = 5'd9 ;
localparam ALU_OP_BLT   = 5'd10 ;

endmodule 
