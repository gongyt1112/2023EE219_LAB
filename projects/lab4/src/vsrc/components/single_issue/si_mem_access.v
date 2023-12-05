
module si_mem_access #(
    parameter MEM_DW = 32,
    parameter MEM_AW = 32,
    parameter RAM_DW = 32,
    parameter RAM_AW = 32
)(
    input                   clk,
    input                   rst,

    input                   mem_ren_i,
    input                   mem_wen_i,
    input   [MEM_AW-1:0]    mem_addr_i,
    input   [MEM_DW-1:0]    mem_din_i,
    output  [MEM_DW-1:0]    mem_dout_o,

    output                  ram_ren_o,
    output                  ram_wen_o,
    output  [RAM_AW-1:0]    ram_addr_o,
    output  [RAM_DW-1:0]    ram_mask_o,
    output  [RAM_DW-1:0]    ram_din_o,
    input   [RAM_DW-1:0]    ram_dout_i
);

assign ram_ren_o = mem_ren_i ;
assign ram_wen_o = mem_wen_i ;
assign ram_addr_o = mem_addr_i ;
assign ram_mask_o = {(RAM_DW){1'b1}} ;
assign ram_din_o = mem_din_i ;
assign mem_dout_o = ram_dout_i ;

endmodule
