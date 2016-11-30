`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:02:52 11/02/2015 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU
	#(parameter ALU_WIDTH = 8)
	(input [ALU_WIDTH-1:0] a,b,
	input [2:0] op,
	output reg [ALU_WIDTH-1:0] result
    );
	
	always@(a or b or op)
		begin
			case(op)
				0: result = a & b;
				1:	result = a | b;
				2: result = a + b;
				6: result = a - b;
				7: if( a < b )
					result = 1;
					else
					result = 0;
				default: result = 0;
			endcase
		end
		
endmodule
