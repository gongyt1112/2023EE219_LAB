`timescale 1ns / 1ps
module vector_mac #(
    parameter C = 3,
    parameter VECTOR_SIZE = 9,
    parameter W_PRECISION = 8,
    parameter IA_PRECISION = 8,
    parameter ACCUM_PRECISION = 24
) (
    input clk,
    input rst,
    input [W_PRECISION*VECTOR_SIZE-1:0] weight,
    input [IA_PRECISION*VECTOR_SIZE-1:0] input_activation,
    output [ACCUM_PRECISION-1:0] accum_out
);



endmodule