
module top_three_issue #(
    parameter PC_START  = 32'h8000_0000, 
    parameter ISSUE_NUM = 3,
    parameter INST_DW   = 32,
    parameter INST_AW   = 32,
    parameter MEM_DW    = 32,
    parameter MEM_AW    = 32,
    parameter RAM_DW    = 32,
    parameter RAM_AW    = 32,
    parameter REG_DW    = 32,
    parameter REG_AW    = 5,
    parameter ALUOP_DW  = 5,

    parameter SEW       = 32, 
    parameter VLMAX     = 8,
    parameter VALUOP_DW = 5,
    parameter VREG_DW   = 256,
    parameter VREG_AW   = 5,
    parameter VMEM_DW   = 256,
    parameter VMEM_AW   = 32,
    parameter VRAM_DW   = 256,
    parameter VRAM_AW   = 32
)(
    input clk,
    input rst 
);

wire                            inst_en   ;
wire  [INST_AW-1:0]             inst_addr ;
wire  [INST_DW*ISSUE_NUM-1:0]   inst      ;

wire                            ram_ren   ;
wire                            ram_wen   ;
wire  [RAM_AW-1:0]              ram_addr  ;
wire  [RAM_DW-1:0]              ram_mask  ;
wire  [RAM_DW-1:0]              ram_din   ;
wire  [RAM_DW-1:0]              ram_dout  ;

wire                            vram_ren   ;
wire                            vram_wen   ;
wire  [VRAM_AW-1:0]             vram_addr  ;
wire  [VRAM_DW-1:0]             vram_mask  ;
wire  [VRAM_DW-1:0]             vram_din   ;
wire  [VRAM_DW-1:0]             vram_dout  ;

rvcpu_three_issue #(
    .PC_START       ( PC_START  ),
    .ISSUE_NUM      ( ISSUE_NUM ),
    .INST_DW        ( INST_DW   ),
    .INST_AW        ( INST_AW   ),
    .MEM_DW         ( MEM_DW    ),
    .MEM_AW         ( MEM_AW    ),
    .RAM_DW         ( RAM_DW    ),
    .RAM_AW         ( RAM_AW    ),
    .REG_DW         ( REG_DW    ),
    .REG_AW         ( REG_AW    ),
    .ALUOP_DW       ( ALUOP_DW  ),
    .SEW            ( SEW       ),
    .VLMAX          ( VLMAX     ),
    .VALUOP_DW      ( VALUOP_DW ),
    .VREG_DW        ( VREG_DW   ),
    .VREG_AW        ( VREG_AW   ),
    .VMEM_DW        ( VMEM_DW   ),
    .VMEM_AW        ( VMEM_AW   ),
    .VRAM_DW        ( VRAM_DW   ),
    .VRAM_AW        ( VRAM_AW   )
) rvcpu_three_issue(
    .clk            ( clk       ),
    .rst            ( rst       ),
    .inst_en_o      ( inst_en   ),
    .inst_addr_o    ( inst_addr ),
    .inst_i         ( inst      ),
    .ram_ren_o      ( ram_ren   ),
    .ram_wen_o      ( ram_wen   ),
    .ram_addr_o     ( ram_addr  ),
    .ram_mask_o     ( ram_mask  ),
    .ram_din_o      ( ram_din   ),
    .ram_dout_i     ( ram_dout  ),
    .vram_ren_o     ( vram_ren  ),
    .vram_wen_o     ( vram_wen  ),
    .vram_addr_o    ( vram_addr ),
    .vram_mask_o    ( vram_mask ),
    .vram_din_o     ( vram_din  ),
    .vram_dout_i    ( vram_dout )
);

INST_RAMHelper #(
    .ISSUE_NUM      ( ISSUE_NUM )
) INST_RAMHelper (
    .clk            ( clk               ),
    .ren            ( inst_en           ),
    .raddr          ( inst_addr >> 2    ),
    .rdata          ( inst              )    
);

SCALAR_RAMHelper SCALAR_RAMHelper(
    .clk            ( clk               ),
    .ren            ( ram_ren           ),
    .raddr          ( ram_addr >> 2     ),
    .rdata          ( ram_dout          ),
    .wen            ( ram_wen           ),
    .waddr          ( ram_addr >> 2     ),
    .wdata          ( ram_din           ),
    .wmask          ( ram_mask          )
);

VECTOR_RAMHelper VECTOR_RAMHelper(
    .clk            ( clk               ),
    .ren            ( vram_ren          ),
    .raddr          ( vram_addr >> 2    ),
    .rdata          ( vram_dout         ),
    .wen            ( vram_wen          ),
    .waddr          ( vram_addr >> 2    ),
    .wdata          ( vram_din          ),
    .wmask          ( vram_mask         )
);

endmodule
