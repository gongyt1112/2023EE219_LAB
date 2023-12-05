

module INST_RAMHelper #(
  parameter ISSUE_NUM = 1
)(
  input                     clk,
  input                     ren,
  input  [31:0]             raddr,
  output [32*ISSUE_NUM-1:0] rdata
);

genvar i ;
generate
  for( i=0; i<ISSUE_NUM; i=i+1) begin
    assign rdata[32*(i+1)-1:32*i] = ram_read_helper(ren, raddr+i);
  end
endgenerate

endmodule

