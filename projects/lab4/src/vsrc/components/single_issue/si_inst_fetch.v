
module si_inst_fetch #(
    parameter PC_START  = 32'h8000_0000, 
    parameter INST_DW   = 32,
    parameter INST_AW   = 32
)(
    input                   clk,
    input                   rst,

    input                   control_en_i,
    input   [INST_AW-1:0]   control_pc_i,
    output  [INST_AW-1:0]   current_pc_o,

    output                  inst_en_o,
    output  [INST_AW-1:0]   inst_addr_o,
    input   [INST_DW-1:0]   inst_i,
    output  [INST_DW-1:0]   inst_o
);

reg [INST_AW-1:0]   pc ;
reg [INST_AW-1:0]   addr ;

always @( posedge clk ) begin
    if( rst == 1'b1 ) begin
        pc <= PC_START ;
        addr <= PC_START ;
    end else begin
        if( control_en_i ) begin
            pc <= control_pc_i + 4 ;
            addr <= control_pc_i ;
        end else begin
            pc <= pc + 4 ;
            addr <= pc ;
        end
    end
end

assign current_pc_o = addr ;
assign inst_addr_o = addr ;
assign inst_en_o = ( rst != 1'b1 ) ;
assign inst_o = inst_i ;

endmodule


