`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:30 11/02/2015 
// Design Name: 
// Module Name:    ID 
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
module ID
	#(parameter REG_WIDTH = 8,
	parameter REG_FILE_DEPTH = 8,
	parameter REG_DIR_WIDTH = 3,
	parameter EXT_IN_WIDTH = 6,
	parameter EXT_OUT_WIDTH = 8,
	parameter SH_IN_WIDTH = 8,
	parameter SH_OUT_WIDTH = 6,
	parameter DATA_WIDTH = 8,
	parameter PC_WIDTH = 6)
	(input clk,rst,Zero,
	input [DATA_WIDTH-1:0] WriteBack,
	input [31:0] Instruction,
	input [PC_WIDTH-1:0] PCnext,
	output [REG_WIDTH-1:0] readd1,readd2,
	output ALUSrc,MemtoReg,MemWrite,MemRead,RegWrite,Branch,
	output [1:0] ALUop,
	output [SH_OUT_WIDTH-1:0] PCJout,
	output [EXT_OUT_WIDTH-1:0] SignExtendOut
	);
	
	wire [REG_DIR_WIDTH-1:0] WriteReg;
	 
	 UControl ID1 (
    .op(Instruction[31:26]), 
    .RegWrite(RegWrite), 
    .ALUSrc(ALUSrc), 
    .RegDst(RegDst), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .Branch(Branch), 
    .MemRead(MemRead), 
    .ALUop(ALUop)
    );
		
	Registers ID2 (
    .readr1(Instruction[REG_DIR_WIDTH-1+21:21]), 
    .readr2(Instruction[REG_DIR_WIDTH-1+16:16]), 
    .writer(WriteReg), 
    .writedata(WriteBack), 
    .clk(clk), 
    .rst(rst), 
    .RegWrite(RegWrite), 
    .readd1(readd1), 
    .readd2(readd2)
    );
	 
	 SignExt ID3 (
    .In(Instruction[EXT_IN_WIDTH-1:0]),  
    .Out(SignExtendOut)
    );
	 
	CJump ID4 (
    .ShiftIn(SignExtendOut), 
    .PCNext(PCnext), 
    .Branch(Branch), 
    .Zero(Zero), 
    .PCJout(PCJout)
    );
	 
	 assign WriteReg = (RegDst == 1)? Instruction[REG_DIR_WIDTH+11:11]:Instruction[REG_DIR_WIDTH+16:16];

endmodule
