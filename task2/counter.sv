module counter #(
    parameter WIDTH = 8
)(
    //interface signals
    input logic             clk,    // clock
    input logic             rst,    // reset
    input logic             en,     // counter enable
    input logic  [WIDTH-1:0] incr,   //increment for addr counter
    output logic [WIDTH-1:0] count   // counter output
    //           [7:0] (WIDTH-1)=7
);

always_ff @ (posedge clk, posedge rst)
    if (rst) count <= {WIDTH{1'b0}};
    else if (en) count <= count + incr;
    else    count <= count;  
endmodule


//file name and module name must be the same
//number of bits in the counter is specified with WIDTH parameter
//always_ff @ (posedge clk) specifies a clocked circuit
// <= is a non block assignment which should only be used within an always_ff block
//{WIDTH{1’b0}} in line 12 uses the concatenation operator { } to form WIDTH bits of ‘0’
//WIDTH-1 creates 7 bits of '0' and if enable=1 then LSB becomes 1
