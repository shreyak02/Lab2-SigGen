//Top level hardware program to combine counter and ram blocks

module sigdelay#(
    parameter   A_WIDTH = 8,
                D_WIDTH = 8
)(
    input logic                 clk,   // clock
    input logic                 rst,   // reset
    input logic                 en,    // enable 
    input logic [D_WIDTH-1:0]   incr,  
    input logic [D_WIDTH-1:0]   wr_en,
    input logic [D_WIDTH-1:0]   rd_en, 
    input logic [A_WIDTH-1:0]       din,
    input logic [D_WIDTH-1:0]       offset,  
    output logic [D_WIDTH-1:0]   dout   // output data
    );

logic [A_WIDTH-1:0]     address;
//logic [A_WIDTH-1:0]     rd_addr;

counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address)
    //.count (rd_addr)
);

ram #(.A_WIDTH(9)) sineRam (
    .clk (clk),
    .wr_addr (address+offset),
    .rd_addr (address),
    .wr_en(wr_en),
    .rd_en(rd_en),
    .din (din),
    .dout (dout)
);



endmodule
