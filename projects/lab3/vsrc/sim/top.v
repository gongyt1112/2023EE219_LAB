`timescale 1ns / 1ps
`define W 3
`define H 5
`define K 8
`define C 2
`define W_SIZE 3
`define DEBUG 0

module pe_top(
    input clk
);

parameter H = `H;
parameter W = `W;
parameter K = `K;
parameter C = `C;

// fixed
parameter NLANES = 8;
parameter W_SIZE = 3;
parameter VECTOR_SIZE = 9;
parameter ADDR_WIDTH = 32;
parameter W_PRECISION = 8;
parameter IA_PRECISION = 8;
parameter ACCUM_PRECISION = 24;

parameter MEM_SIZE = 32'h00005000;
parameter IA_BASE = 32'h00002000;
parameter WEIGHT_BASE = 32'h00001000;
parameter OUTPUT_BASE = 32'h00003000;

reg rst;
reg [W_PRECISION*VECTOR_SIZE*NLANES-1:0] w_rd;
reg [IA_PRECISION*VECTOR_SIZE-1:0] ia_rd;
wire [ADDR_WIDTH-1:0] w_addr_rd;
wire [ADDR_WIDTH-1:0] ia_addr_rd;
wire [ACCUM_PRECISION*NLANES-1:0] accumout_wr;
wire [ADDR_WIDTH-1:0] addr_wr;
reg done_PE,done;
reg mem_wr_en;

reg [23:0] mem [MEM_SIZE-1:0];

pe #(
    .H(H),
    .W(W),
    .K(K),
    .C(C),
    .NLANES(NLANES),
    .W_SIZE(W_SIZE),
    .VECTOR_SIZE(VECTOR_SIZE),
    .ADDR_WIDTH(ADDR_WIDTH),
    .W_PRECISION(W_PRECISION),
    .IA_PRECISION(IA_PRECISION),
    .ACCUM_PRECISION(ACCUM_PRECISION),
    .IA_BASE(IA_BASE),
    .WEIGHT_BASE(WEIGHT_BASE),
    .OUTPUT_BASE(OUTPUT_BASE)
) pe (
    .clk(clk),
    .rst(rst),
    .w_rd(w_rd),
    .ia_rd(ia_rd),
    .w_addr_rd(w_addr_rd),
    .ia_addr_rd(ia_addr_rd),
    .accumout_wr(accumout_wr),
    .addr_wr(addr_wr),
    .done(done_PE),
    .mem_wr_en(mem_wr_en)
);

initial begin
    $readmemh("../mem/mem_init.txt", mem);
    rst = 0;
    done = 0;
end
genvar i;

// read weights 
for (i = 0; i < VECTOR_SIZE*NLANES; i = i + 1) begin
    always@(posedge clk) begin
        w_rd[(i+1)*W_PRECISION-1:i*W_PRECISION] <= mem[i+w_addr_rd][W_PRECISION-1:0];
    end
end

// read input activation
for (i = 0; i < VECTOR_SIZE; i = i + 1) begin
    always@(posedge clk) begin
        ia_rd[(i+1)*IA_PRECISION-1:i*IA_PRECISION] <= mem[i+ia_addr_rd][IA_PRECISION-1:0];
    end
end


//write output
for (i = 0; i < NLANES; i = i + 1) begin
    always @(posedge clk) begin
        if (mem_wr_en) begin
            mem[addr_wr+i][ACCUM_PRECISION-1:0] <= accumout_wr[(i+1)*ACCUM_PRECISION-1:i*ACCUM_PRECISION];

        end
    end
end




always @(posedge clk) begin
    if(done_PE == 1)begin
        done <= 1;
        $writememh("../mem/mem_out.txt", mem);
    end
    if(done == 1)begin
        rst <= 1;
    end
    else rst <= 0;
end



endmodule