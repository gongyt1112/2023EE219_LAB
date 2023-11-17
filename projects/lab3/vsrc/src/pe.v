`timescale 1ns / 1ps

module pe #(
    parameter H = 8,
    parameter W = 8,
    parameter K = 8,
    parameter C = 3,
    // fixed
    parameter NLANES = 8,
    parameter W_SIZE = 3,
    parameter VECTOR_SIZE = 9,
    parameter ADDR_WIDTH = 32,
    parameter W_PRECISION = 8,
    parameter IA_PRECISION = 8,
    parameter ACCUM_PRECISION = 24,
    parameter IA_BASE = 32'h00002000,
    parameter WEIGHT_BASE = 32'h00001000,
    parameter OUTPUT_BASE = 32'h00003000
) (
    input clk,
    input rst,
    input [W_PRECISION*VECTOR_SIZE*NLANES-1:0] w_rd,
    input [IA_PRECISION*VECTOR_SIZE-1:0] ia_rd,
    output [ADDR_WIDTH-1:0] w_addr_rd,
    output [ADDR_WIDTH-1:0] ia_addr_rd,
    output [ACCUM_PRECISION*NLANES-1:0] accumout_wr,
    output [ADDR_WIDTH-1:0] addr_wr,
    output reg done,
    output reg mem_wr_en
);


endmodule