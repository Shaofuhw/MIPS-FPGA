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
	parameter CODE_DEPTH = 16,
	parameter EXCEPTION_JMP = 6'b111111)
	(input clk,rst,Branch,Zero,PCWrite,
	input [2:0] ExceptionCause,
	input [PC_WIDTH-1:0] jmp_address,
	output [PC_WIDTH-1:0] PCnext,PCout,
	output [31:0] Instruction
    );
	 
	wire [PC_WIDTH-1:0] PCin;
		 	 
	PC IF1(
    .clk(clk), 
    .rst(rst), 
	 .PCWrite(PCWrite),
    .PCin(PCin), 
    .PCout(PCout)
    );
	 
	assign PCnext = PCout + 4;
	assign PCin = ( Branch == 1 && Zero == 1 )? jmp_address:
					  ( ExceptionCause != 0 )? 	  EXCEPTION_JMP:PCnext;		//En el caso de que una instrucción BEQ se cumpla
		
	IMemory IF2 (
    .Address(PCout), 
    .Instruction(Instruction)
    );


endmodule
