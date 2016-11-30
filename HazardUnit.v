`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:35:53 11/16/2015 
// Design Name: 
// Module Name:    HazardUnit 
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
module HazardUnit
	#(parameter REG_DIR_WIDTH = 3)
	(input [REG_DIR_WIDTH-1:0]IDEXRegisterRt,IFIDRegisterRs,IFIDRegisterRt,
	input IDEXMemRead,
	output PCWrite,IFIDWrite,CControl
    );

	assign PCWrite = ( (IDEXMemRead == 1) && ( (IDEXRegisterRt == IFIDRegisterRs) || (IDEXRegisterRt == IFIDRegisterRt) ) )? 0:1;
	assign IFIDWrite = ( (IDEXMemRead == 1) && ( (IDEXRegisterRt == IFIDRegisterRs) || (IDEXRegisterRt == IFIDRegisterRt) ) )? 0:1;
	assign CControl = ( (IDEXMemRead == 1) && ( (IDEXRegisterRt == IFIDRegisterRs) || (IDEXRegisterRt == IFIDRegisterRt) ) )? 0:1;

endmodule
