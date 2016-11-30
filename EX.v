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
	parameter EXT_OUT_WIDTH = 8)
	(input [ALU_WIDTH-1:0] readd1,readd2,
	input [1:0] ALUop,
	input ALUSrc,
	input [EXT_OUT_WIDTH-1:0] SignExtendOut,
	input [5:0] funct,
	output [ALU_WIDTH-1:0] ALUResult,
	output Zero
   );

	wire [ALU_WIDTH-1:0] data2;
	wire [2:0] ALUCtrl;
	
	assign data2 = (ALUSrc == 0)? readd2:SignExtendOut;
	
	ALU EX1 (
    .a(readd1), 
    .b(data2), 
    .op(ALUCtrl), 
    .result(ALUResult), 
    .z(Zero), 
    .Ov(ov)
    );
	 
	 ALUCtrl EX2 (
    .ALUop(ALUop), 
    .funct(funct), 
    .ALUCtrl(ALUCtrl)
    );

endmodule
