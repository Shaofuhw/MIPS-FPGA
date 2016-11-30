`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:39 12/10/2015 
// Design Name: 
// Module Name:    ExceptionUnit 
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
module ExceptionUnit
	#(parameter PC_WIDTH = 6,
	parameter REG_DIR_WIDTH = 3,
	//OPCodes
	parameter RTYPE = 6'd00,
	parameter LW = 6'd35,
	parameter SW = 6'd43,
	parameter BEQ = 6'd04,
	//Functions
	parameter ADD = 6'd32,
	parameter SUB = 6'd34,
	parameter AND = 6'd36,
	parameter OR  = 6'd37,
	parameter SLT = 6'd42)
	(input Ov,rst,clk,
	input [4:0] RegisterRs, RegisterRt, RegisterRd,
	input [5:0] OPCode, Function,
	input [PC_WIDTH-1:0] IFID_PC, IDEX_PC,
	output reg [2:0] ExceptionCause,
	output reg [PC_WIDTH-1:0] ExceptionPC
    );
	
	//ExceptionCause = 1 = OPCode Inválido
	//ExceptionCause = 2 = Function Inválido
	//ExceptionCause = 3 = Dirección Registro Inválido
	//ExceptionCause = 4 = Overflow en la ALU
	
	always@(posedge clk or posedge rst)
		if( rst )
			begin
				ExceptionPC <= 0;
				ExceptionCause <= 0;
			end
		
		else if( Ov == 1 && ExceptionCause == 0)		//Excepción si hay overflow
			begin
				ExceptionPC <= IDEX_PC;
				ExceptionCause <= 4;
			end
		
		//Excepción si OPCode no es ninguna de las opciones implementadas
		
		else if( OPCode != RTYPE && OPCode != LW && OPCode != SW && OPCode != BEQ && ExceptionCause == 0)
			begin
				ExceptionPC <= IFID_PC;
				ExceptionCause <= 1;
			end
			
		//Excepción si Function no es ninguna de las implementadas en el caso de una operación tipo R
		//El caso de Function 0 se descarta ya que empieza en cero tras un reset, para evitar que salte una excepción ahí
			
		else if( (OPCode == RTYPE) && (Function != ADD && Function != SUB && Function != AND && Function != OR &&
					Function != SLT && Function != 0) && ExceptionCause == 0)
			begin
				ExceptionPC <= IFID_PC;
				ExceptionCause <= 2;
			end
		
		//Excepción en el caso de que se direccione un registro no existente. Operaciones tipo R
		
		else if( (OPCode == RTYPE) && (REG_DIR_WIDTH < 5) && ExceptionCause == 0)
			begin
				if( RegisterRs[4:REG_DIR_WIDTH] != 0 || RegisterRt[4:REG_DIR_WIDTH] != 0 || RegisterRd[4:REG_DIR_WIDTH] != 0 )
					begin
						ExceptionPC <= IFID_PC;
						ExceptionCause <= 3;
					end
			end
			
		//Igual que el de arriba pero para operaciones tipo I
			
		else if( (OPCode == LW || OPCode == SW || OPCode == BEQ) && (REG_DIR_WIDTH < 5) && ExceptionCause == 0)
			begin
				if( RegisterRs[4:REG_DIR_WIDTH] != 0 || RegisterRt[4:REG_DIR_WIDTH] != 0 )
					begin
						ExceptionPC <= IFID_PC;
						ExceptionCause <= 3;
					end
			end
endmodule
