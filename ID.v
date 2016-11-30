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
	parameter PC_WIDTH = 6,
	parameter ALU_WIDTH = 8)
	(input clk,rst,RegWriteBack,
	input [DATA_WIDTH-1:0] WriteBack,
	input [31:0] Instruction,
	input [PC_WIDTH-1:0] PCNext,
	input [REG_DIR_WIDTH-1:0] WriteReg,
	input [REG_DIR_WIDTH-1:0] IFID_RegisterRs, IFID_RegisterRt, IDEX_RegisterRd,
	input [ALU_WIDTH-1:0] ALUResult,
	input [2:0] ExceptionCause,
	output [REG_WIDTH-1:0] readd1,readd2,reg1,reg2,Register1,Register2,Register3,Register4,
	output ALUSrc,MemtoReg,MemWrite,MemRead,RegWrite,Branch,RegDst,IF_Flush,ID_Flush,EX_Flush,Iguales,
	output [1:0] ALUop,
	output [EXT_OUT_WIDTH-1:0] SignExtendOut,
	output [PC_WIDTH-1:0] ALUR
	);
		
	 UControl ID1 (
    .op(Instruction[31:26]), 
	 .Iguales(Iguales),
	 .ExceptionCause(ExceptionCause),
    .RegWrite(RegWrite), 
    .ALUSrc(ALUSrc), 
    .RegDst(RegDst), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .Branch(Branch), 
    .MemRead(MemRead), 
    .ALUop(ALUop),
	 .IF_Flush(IF_Flush),
	 .ID_Flush(ID_Flush),
	 .EX_Flush(EX_Flush)
    );
		
	Registers ID2 (
    .readr1(Instruction[REG_DIR_WIDTH-1+21:21]), 
    .readr2(Instruction[REG_DIR_WIDTH-1+16:16]), 
    .writer(WriteReg), 
    .writedata(WriteBack), 
    .clk(clk), 
    .rst(rst), 
    .RegWrite(RegWriteBack), 
    .readd1(readd1), 
    .readd2(readd2),
	 .Register1(Register1),
	 .Register2(Register2),
	 .Register3(Register3),
	 .Register4(Register4)
    );
	 
	 assign reg1 = (IDEX_RegisterRd == IFID_RegisterRs)?ALUResult:readd1;		//Control de Anticipación en el caso de saltos
	 assign reg2 = (IDEX_RegisterRd == IFID_RegisterRt)?ALUResult:readd2;
	 
	 assign Iguales = ( reg1 == reg2 )? 1:0;		//Es 1 si el valor de ambos registros es igual
	 
	 SignExt ID3 (
    .In(Instruction[EXT_IN_WIDTH-1:0]),  
    .Out(SignExtendOut)
    );
	 
	 CJump ID4 (
    .ShiftIn(SignExtendOut), 
    .PCNext(PCNext), 
    .ALUR(ALUR)
    );
	 
endmodule
