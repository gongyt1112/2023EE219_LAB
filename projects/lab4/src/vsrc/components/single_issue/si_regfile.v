
module si_regfile #(
    parameter REG_DW    = 32,
    parameter REG_AW    = 5
)(
    input                       clk,
    input                       rst,

    input                       wb_en_i,
    input       [REG_AW-1:0]    wb_addr_i,
    input       [REG_DW-1:0]    wb_data_i,

    input                       rs1_en_i,
    input       [REG_AW-1:0]    rs1_addr_i,
    output reg  [REG_DW-1:0]    rs1_data_o,

    input                       rs2_en_i,
    input       [REG_AW-1:0]    rs2_addr_i,
    output reg  [REG_DW-1:0]    rs2_data_o
);

integer i ;

reg [REG_DW-1:0] regfile [2**REG_AW-1:0] ;

always @(posedge clk ) begin
    if ( rst == 1'b1 ) begin
        for(i=0; i<2**REG_AW; i=i+1) begin
            regfile[ i ] <= {(REG_DW){1'b0}} ;
        end
    end else begin
        if ( (wb_en_i == 1'b1) && (wb_addr_i != 0) ) begin
            regfile[ wb_addr_i ] <= wb_data_i ;
        end 
    end
end

always @(*) begin
    if( rst == 1'b1 ) begin
        rs1_data_o = {(REG_DW){1'b0}} ;
    end else begin
        if ( rs1_en_i ) begin
            rs1_data_o = regfile[ rs1_addr_i ] ;
        end else begin
            rs1_data_o = {(REG_DW){1'b0}} ;
        end
    end
end

always @(*) begin
    if( rst == 1'b1 ) begin
        rs2_data_o = {(REG_DW){1'b0}} ;
    end else begin
        if ( rs2_en_i ) begin
            rs2_data_o = regfile[ rs2_addr_i ] ;
        end else begin
            rs2_data_o = {(REG_DW){1'b0}} ;
        end
    end
end


endmodule
