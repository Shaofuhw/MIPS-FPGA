`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:32:16 11/15/2015 
// Design Name: 
// Module Name:    ForwardUnit 
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
module ForwardUnit#(
	parameter REG_DIR_WIDTH = 3)
	(input [REG_DIR_WIDTH-1:0]IDEXRegisterRs, IDEXRegisterRt, EXMEMRegisterRd, MEMWBRegisterRd,
	input EXMEMRegWrite, MEMWBRegWrite,
	output [1:0] Forward_A, Forward_B
    );
	
	//Control de anticipación, es el encargado de colocar un valor u otro en la entrada de la ALU, en caso de necesidad
	
	assign Forward_A = ( (EXMEMRegWrite == 1) && (EXMEMRegisterRd != 0) && (EXMEMRegisterRd == IDEXRegisterRs) )? 2:
							 ( (MEMWBRegWrite == 1) && (MEMWBRegisterRd != 0) && (EXMEMRegisterRd != IDEXRegisterRs) && (MEMWBRegisterRd == IDEXRegisterRs))? 1:0;
	assign Forward_B = ( (EXMEMRegWrite == 1) && (EXMEMRegisterRd != 0) && (EXMEMRegisterRd == IDEXRegisterRt) )? 2:
							 ( (MEMWBRegWrite == 1) && (MEMWBRegisterRd != 0) && (EXMEMRegisterRd != IDEXRegisterRs) && (MEMWBRegisterRd == IDEXRegisterRt))? 1:0;

endmodule
