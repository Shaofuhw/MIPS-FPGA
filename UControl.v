`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:06 11/02/2015 
// Design Name: 
// Module Name:    UControl 
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
module UControl(
	input [5:0] op,
	output RegWrite, ALUSrc, RegDst, MemtoReg, MemWrite, Branch, MemRead,
	output [1:0] ALUop
    );

	wire Rtype,lw,sw;
	
	assign Rtype = ( op == 6'b000000 )? 1:0;
	assign lw = ( op == 6'b100011 )? 1:0;
	assign sw = ( op == 6'b101011 )? 1:0;
	
	assign RegWrite = ( Rtype || lw )? 1:0;
	assign ALUSrc = ( lw || sw )? 1:0;
	assign RegDst = ( Rtype )? 1:0;
	assign MemtoReg = ( lw )? 1:0;
	assign MemWrite = ( sw )? 1:0;
	assign Branch = ( op == 6'b000100 )? 1:0;
	assign MemRead = ( lw )? 1:0;
	assign ALUop[1] = ( Rtype )? 1:0;
	assign ALUop[0] = ( op == 6'b000100 )? 1:0;

endmodule
