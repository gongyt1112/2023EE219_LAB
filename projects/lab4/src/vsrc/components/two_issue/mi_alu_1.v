
module mi_alu_1 #(
    parameter PC_START  = 32'h8000_0000, 
    parameter INST_DW   = 32,
    parameter INST_AW   = 32,
    parameter REG_DW    = 32,
    parameter ALUOP_DW  = 5
)(
    input                   clk,
    input                   rst,
    
    // arithmetic
    input   [ALUOP_DW-1:0]  alu_opcode_i,
    input   [REG_DW-1:0]    operand_1_i,
    input   [REG_DW-1:0]    operand_2_i,
    output  [REG_DW-1:0]    alu_result_o,
    // branch
    input   [INST_AW-1:0]   current_pc_i,
    input                   branch_en_i,
    input   [INST_AW-1:0]   branch_offset_i,
    input                   jump_en_i,
    input   [INST_AW-1:0]   jump_offset_i,
    output                  control_en_o,
    output  [INST_AW-1:0]   control_pc_o
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
