`include "ram_helper.v"

module top #(
    parameter ISSUE_NUM = 1
)(
    input clk,
    input rst
);

generate
    if (ISSUE_NUM == 1) begin : gen_single_issue
        top_single_issue top_single_issue_inst(
            .clk(clk),
            .rst(rst)
        );
    end else if (ISSUE_NUM == 2) begin : gen_two_issue
        top_two_issue top_two_issue_inst(
            .clk(clk),
            .rst(rst)
        );
    end else if (ISSUE_NUM == 3) begin : gen_three_issue
        top_three_issue top_three_issue_inst(
            .clk(clk),
            .rst(rst)
        );
    end
endgenerate

endmodule
