`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:54 10/27/2015 
// Design Name: 
// Module Name:    IF 
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
module IF
	#(parameter PC_WIDTH=6,
	parameter CODE_DIR_WIDTH = 4,
	parameter CODE_DEPTH = 16)
	(input clk,rst,
	input [PC_WIDTH-1:0] jmp_address,
	output [PC_WIDTH-1:0] PCnext,PCout,
	output [31:0] Instruction
    );
	 	 
	PC IF1(
    .clk(clk), 
    .rst(rst), 
    .PCin(jmp_address), 
    .PCout(PCout)
    );
	 
	assign PCnext = PCout + 4;
		
	IMemory IF2 (
    .Address(PCout), 
    .Instruction(Instruction)
    );


endmodule