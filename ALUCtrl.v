`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:45 11/03/2015 
// Design Name: 
// Module Name:    ALUCtrl 
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
module ALUCtrl(
	input [1:0] ALUop,
	input [5:0] funct,
	output reg [2:0] ALUCtrl
    );

	always@(ALUop or funct)
		begin
			case(ALUop)
				0: ALUCtrl = 3'b010;
				1: ALUCtrl = 3'b110;
				2: case(funct)					//Operaciones Tipo R
					32: ALUCtrl = 3'b010;
					34: ALUCtrl = 3'b110;
					36: ALUCtrl = 3'b000;
					37: ALUCtrl = 3'b001;
					42: ALUCtrl = 3'b111;
					default: ALUCtrl = 3'b101;
					endcase
				default: ALUCtrl = 3'b101;
			endcase
		end

endmodule
