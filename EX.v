`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:57 11/03/2015 
// Design Name: 
// Module Name:    EX 
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
module EX
	#(parameter ALU_WIDTH = 8,
	parameter EXT_OUT_WIDTH = 8,
	parameter PC_WIDTH = 6,
	parameter REG_DIR_WIDTH = 3,
	parameter DATA_WIDTH = 8)
	(input [ALU_WIDTH-1:0] readd1,readd2,
	input [1:0] ALUop, Forward_A, Forward_B,
	input ALUSrc,RegDst,
	input [EXT_OUT_WIDTH-1:0] SignExtendOut,
	input [5:0] funct,
	input [REG_DIR_WIDTH-1:0] RegDst1,RegDst2,
	input [DATA_WIDTH-1:0] WBData,Address,
	output [ALU_WIDTH-1:0] ALUResult,
	output [REG_DIR_WIDTH-1:0] WriteReg,
	output [ALU_WIDTH-1:0] data1,data2,data2_2,
	output [2:0] ALUCtrl,
	output Ov,Zero
   );
	
	assign data1 = ( Forward_A == 0 )? readd1:			//Se elige un valor dependiendo del valor de Forward
						( Forward_A == 1 )? WBData:			//Que proviene del control de anticipación
						( Forward_A == 2 )? Address: 0;
						
	assign data2 = ( Forward_B == 0 )? readd2:
						( Forward_B == 1 )? WBData:
						( Forward_B == 2 )? Address: 0;
						
	assign data2_2 = (ALUSrc == 0)? data2:SignExtendOut;
	assign WriteReg = ( RegDst == 1 )?RegDst1:RegDst2; 	//Se elige el registro Rd
	
	ALU EX1 (
    .a(data1), 
    .b(data2_2), 
    .op(ALUCtrl), 
    .result(ALUResult),
	 .Ov(Ov),
	 .Zero(Zero)
    );
	 
	 ALUCtrl EX2 (
    .ALUop(ALUop), 
    .funct(funct), 
    .ALUCtrl(ALUCtrl)
    );

endmodule
