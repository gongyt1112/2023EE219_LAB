
module v_mem_access #(
    parameter VMEM_DW   = 256,
    parameter VMEM_AW   = 32,
    parameter VRAM_DW   = 256,
    parameter VRAM_AW   = 32
)(
    input                   clk,
    input                   rst,
    
    input                   vmem_ren_i,
    input                   vmem_wen_i,
    input   [VMEM_AW-1:0]   vmem_addr_i,
    input   [VMEM_DW-1:0]   vmem_din_i,
    output  [VMEM_DW-1:0]   vmem_dout_o,

    output                  vram_ren_o,
    output                  vram_wen_o,
    output  [VRAM_AW-1:0]   vram_addr_o,
    output  [VRAM_DW-1:0]   vram_mask_o,
    output  [VRAM_DW-1:0]   vram_din_o,
    input   [VRAM_DW-1:0]   vram_dout_i
);

assign vram_ren_o   = vmem_ren_i ;
assign vram_wen_o   = vmem_wen_i ;
assign vram_addr_o  = vmem_addr_i ;
assign vram_din_o   = vmem_din_i ;
assign vram_mask_o  = {(VRAM_DW){1'b1}};
assign vmem_dout_o  = vram_dout_i ;

endmodule
