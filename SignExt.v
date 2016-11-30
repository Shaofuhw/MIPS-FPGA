`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:25 11/02/2015 
// Design Name: 
// Module Name:    SignExt 
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
module SignExt
	#(parameter EXT_IN_WIDTH = 6,
	parameter EXT_OUT_WIDTH = 8)
	(input [EXT_IN_WIDTH-1:0] In,
	output [EXT_OUT_WIDTH-1:0] Out);
		
	assign Out = {{(EXT_OUT_WIDTH-EXT_IN_WIDTH){In[EXT_IN_WIDTH-1]}},In};		//Extiende el valor de entrada

endmodule
