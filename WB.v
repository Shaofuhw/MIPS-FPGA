`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:59 11/03/2015 
// Design Name: 
// Module Name:    WB 
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
module WB
	#(parameter DATA_WIDTH = 8)
	(input MemtoReg,
	input [DATA_WIDTH-1:0] ALUr,ReadD,
	output [DATA_WIDTH-1:0] WriteBack
    );

	assign WriteBack = ( MemtoReg == 0 )? ALUr:ReadD;

endmodule
