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
	input Iguales, 
	input [2:0] ExceptionCause,
	output RegWrite, ALUSrc, RegDst, MemtoReg, MemWrite, Branch, MemRead, IF_Flush, ID_Flush, EX_Flush, 
	output [1:0] ALUop
    );

	wire Rtype,lw,sw,beq;
	
	assign Rtype = ( op == 6'b000000 )? 1:0;
	assign lw = ( op == 6'b100011 )? 1:0;
	assign sw = ( op == 6'b101011 )? 1:0;
	assign beq = ( op == 6'b000100 )? 1:0;
	
	assign IF_Flush = ( (beq == 1 && Iguales != 1) || ExceptionCause != 0 )? 1:0;	//Se�al que limpia en condici�n de salto
	assign ID_Flush = ( ExceptionCause != 0 )? 1:0;				//Se�ales que paran el programa en caso de excepci�n
	assign EX_Flush = ( ExceptionCause != 0 )? 1:0;
	
	assign RegWrite = ( Rtype || lw )? 1:0;
	assign ALUSrc = ( lw || sw )? 1:0;
	assign RegDst = ( Rtype )? 1:0;
	assign MemtoReg = ( lw )? 1:0;
	assign MemWrite = ( sw )? 1:0;
	assign Branch = ( beq )? 1:0;
	assign MemRead = ( lw )? 1:0;
	assign ALUop[1] = ( Rtype )? 1:0;
	assign ALUop[0] = ( beq )? 1:0;

endmodule
