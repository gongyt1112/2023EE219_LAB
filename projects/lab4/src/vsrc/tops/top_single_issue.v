
module top_single_issue #(
    parameter PC_START  = 32'h8000_0000, 
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
    input clk,
    input rst 
);

wire                  inst_en   ;
wire  [INST_AW-1:0]   inst_addr ;
wire  [INST_DW-1:0]   inst      ;
wire                  ram_ren   ;
wire                  ram_wen   ;
wire  [RAM_AW-1:0]    ram_addr  ;
wire  [RAM_DW-1:0]    ram_mask  ;
wire  [RAM_DW-1:0]    ram_din   ;
wire  [RAM_DW-1:0]    ram_dout  ;

rvcpu_single_issue #(
    .PC_START       ( PC_START ),
    .INST_DW        ( INST_DW  ),
    .INST_AW        ( INST_AW  ),
    .MEM_DW         ( MEM_DW   ),
    .MEM_AW         ( MEM_AW   ),
    .RAM_DW         ( RAM_DW   ),
    .RAM_AW         ( RAM_AW   ),
    .REG_DW         ( REG_DW   ),
    .REG_AW         ( REG_AW   ),
    .ALUOP_DW       ( ALUOP_DW )
) rvcpu_single_issue(
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
    .ram_dout_i     ( ram_dout  )
);

INST_RAMHelper INST_RAMHelper(
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
    .wmask          ( ram_mask         )
);


endmodule
