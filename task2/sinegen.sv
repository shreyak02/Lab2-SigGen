module sinegen #(
    parameter       A_WIDTH = 8,
                    D_WIDTH = 8
)(
    // interface signals
    //Top level components needed to instatiate inputs and outputs
    input logic                 clk,   // clock
    input logic                 rst,   // reset
    input logic                 en,    // enable 
    input logic [D_WIDTH-1:0]   incr,  
    input logic [D_WIDTH-1:0]   offset, 
    output logic [D_WIDTH-1:0]   dout,   // output data
    output logic [D_WIDTH-1:0]  dout2
    );

logic [A_WIDTH-1:0]     address;    // interconnect wire

counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address)
);

rom sineRom #(.ADDRESS_WIDTH(8))(
    .clk (clk),
    .addr (address),
    .dout (dout),
    .addr2 (address+offset),
    .dout2 (dout2)
);

endmodule
