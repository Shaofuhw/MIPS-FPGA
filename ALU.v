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
	output reg [ALU_WIDTH-1:0] result,
	output z,
	output reg Ov
    );
	
	always@(a or b or op)
		begin
			case(op)
				0: result = a & b;
				1:	result = a | b;
				2: begin
						result = a + b;
						if ( (a[ALU_WIDTH-1] == b[ALU_WIDTH-1]) && (a[ALU_WIDTH-1] != result[ALU_WIDTH-1]) )
							Ov = 1;
						else
							Ov = 0;
					end
				6: begin
						result = a - b;
						if ( (a[ALU_WIDTH-1] != b[ALU_WIDTH-1]) && (b[ALU_WIDTH-1] == result[ALU_WIDTH-1]) )
							Ov = 1;
						else
							Ov = 0;
					end
				7: if( a < b )
					result = 1;
					else
					result = 0;
				default: result = 0;
			endcase
		end
		
	assign z = ( result == 0 )? 1:0;
	
endmodule
