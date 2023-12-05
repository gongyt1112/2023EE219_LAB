
module si_write_back #(
    parameter REG_DW = 32,
    parameter REG_AW = 5
)(
    input                   clk,
    input                   rst,

    input                   id_wb_en_i,
    input   [REG_AW-1:0]    id_wb_addr_i,
    input                   id_wb_sel_i,
    input   [REG_DW-1:0]    alu_result_i,
    input   [REG_DW-1:0]    mem_result_i,

    output                  wb_en_o,
    output  [REG_AW-1:0]    wb_addr_o,
    output  [REG_DW-1:0]    wb_data_o
);

assign wb_en_o      =   (rst == 1'b1)   ? 0 : id_wb_en_i ;
assign wb_addr_o    =   (rst == 1'b1)   ? 0 : id_wb_addr_i ;
assign wb_data_o    =   (rst == 1'b1)   ? 0 : 
                        (id_wb_sel_i)   ? mem_result_i  :   alu_result_i ;

endmodule
