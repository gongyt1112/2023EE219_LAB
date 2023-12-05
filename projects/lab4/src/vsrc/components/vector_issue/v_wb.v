
module v_wb #(
    parameter VREG_DW = 256,
    parameter VREG_AW = 5
) (
    input                   clk,
    input                   rst,

    input                   vid_wb_en_i,
    input                   vid_wb_sel_i,
    input   [VREG_AW-1:0]   vid_wb_addr_i,
    input   [VREG_DW-1:0]   valu_result_i,
    input   [VREG_DW-1:0]   vmem_result_i,

    output                  vwb_en_o,
    output  [VREG_AW-1:0]   vwb_addr_o,
    output  [VREG_DW-1:0]   vwb_data_o
);

assign vwb_en_o     = vid_wb_en_i ;
assign vwb_addr_o   = vid_wb_addr_i ;
assign vwb_data_o   = ( vid_wb_sel_i )  ?   vmem_result_i : valu_result_i ;

endmodule 
