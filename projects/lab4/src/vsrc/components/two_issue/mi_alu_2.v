
module mi_alu_2 #(
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
    output  [REG_DW-1:0]    alu_result_o
);

localparam ALU_OP_NOP   = 5'd0 ;
localparam ALU_OP_ADD   = 5'd1 ;

endmodule 
