module ram#(
    parameter A_WIDTH = 8,
              D_WIDTH = 8
)(
    input logic         clk,
    input logic         wr_en,
    input logic [D_WIDTH-1:0] din,
    input logic [A_WIDTH-1:0] wr_addr,
    input logic [A_WIDTH-1:0] rd_addr,
    input logic         rd_en,
    output logic [D_WIDTH-1:0] dout

);

logic [D_WIDTH-1:0] ram_array [(2**(A_WIDTH))-1:0]; //THIS COULD BE WRONG


always_ff @(posedge clk) begin // begin...end used for multiple statements
    if (wr_en == 1'b1)
        ram_array[wr_addr] <= din;
    if (rd_en == 1'b1)
        //output is synchronus
        dout <= ram_array[rd_addr];
end
//assign dout = ram_array[rd_addr];

endmodule
