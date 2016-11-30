`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:14:53 11/02/2015 
// Design Name: 
// Module Name:    CJump 
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
module CJump
	#(parameter SH_IN_WIDTH = 8,
	parameter SH_OUT_WIDTH = 6,
	parameter PC_WIDTH = 6)
	(input [SH_IN_WIDTH-1:0] ShiftIn,
	input [PC_WIDTH-1:0] PCNext,
	input Branch,Zero,
	output [SH_OUT_WIDTH-1:0] PCJout
    );

	wire [SH_OUT_WIDTH-1:0] ShiftOut;
	wire [SH_OUT_WIDTH-1:0] ALUR;
	
	assign ShiftOut = ShiftIn << 2;
	assign ALUR = ShiftOut + PCNext;
	assign PCJout = ( Branch == 1 && Zero == 1 )? ALUR:PCNext;

endmodule