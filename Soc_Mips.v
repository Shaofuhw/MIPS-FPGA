`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:07 11/02/2015 
// Design Name: 
// Module Name:    Soc_Mips 
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
module Soc_Mips
	#(parameter PC_WIDTH = 6,
	parameter CODE_DIR_WIDTH = 4,
	parameter CODE_DEPTH = 16,
	parameter REG_WIDTH = 8,
	parameter REG_FILE_DEPTH = 8,
	parameter REG_DIR_WIDTH = 3,
	parameter EXT_IN_WIDTH = 6,
	parameter EXT_OUT_WIDTH = 8,
	parameter SH_IN_WIDTH = 8,
	parameter SH_OUT_WIDTH = 6,
	parameter DATA_WIDTH = 8,
	parameter DATA_DEPTH = 4,
	parameter DATA_DIR_WIDTH = 8,
	parameter ALU_WIDTH = 8)
	(input clk,rst,
	output MemRead,MemWrite,RegWrite,Zero,Branch,
	output [31:0]Instruction,
	output [PC_WIDTH-1:0]PCnext,
	output [PC_WIDTH-1:0]PCJout,
	output [PC_WIDTH-1:0]PCout,
	output [ALU_WIDTH-1:0]ALUResult,
	output [DATA_WIDTH-1:0] Data,
	output [REG_WIDTH-1:0]readd1,readd2,WriteBack,
	output [4:0] readr1,readr2,
	output [EXT_OUT_WIDTH-1:0] SignExtendOut
);
	
	wire [5:0] funct;
	wire ALUSrc,MemtoReg;
	wire [1:0] ALUop;

	IF IF (
    .clk(clk), 
    .rst(rst), 
    .jmp_address(PCJout), 
    .PCnext(PCnext), 
    .Instruction(Instruction),
	 .PCout(PCout)
    );
	
	ID ID (
    .clk(clk), 
    .rst(rst), 
    .Zero(Zero), 
    .WriteBack(WriteBack), 
    .Instruction(Instruction), 
    .PCnext(PCnext), 
    .readd1(readd1), 
    .readd2(readd2), 
    .ALUSrc(ALUSrc), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .ALUop(ALUop), 
    .PCJout(PCJout),
	 .SignExtendOut(SignExtendOut),
	 .RegWrite(RegWrite),
	 .Branch(Branch)
    );
	 
	 assign readr1 = Instruction[25:21];
	 assign readr2 = Instruction[20:16];
	 assign funct = Instruction[5:0];
	 
	 EX EX (
    .readd1(readd1), 
    .readd2(readd2), 
    .ALUop(ALUop), 
    .ALUSrc(ALUSrc), 
    .SignExtendOut(SignExtendOut), 
    .funct(funct), 
    .ALUResult(ALUResult), 
    .Zero(Zero)
    );
	 
	 MEM MEM (
    .clk(clk), 
    .rst(rst), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .Address(ALUResult), 
    .WriteData(readd2), 
    .ReadData(Data)
    );

	WB WB (
    .MemtoReg(MemtoReg), 
    .ALUr(ALUResult), 
    .ReadD(Data), 
    .WriteBack(WriteBack)
    );

endmodule
