`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:31:26 10/27/2015 
// Design Name: 
// Module Name:    PC 
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
module PC
	#(parameter PC_WIDTH = 6)
	(input clk, rst,PCWrite,
	input [PC_WIDTH-1:0] PCin,
	output reg [PC_WIDTH-1:0] PCout
    );
			
	always@(posedge clk or posedge rst)
		if(rst)
			PCout = 0;
		else if(PCWrite == 1)		//En caso de Excepción o de una burbuja, no escribe
			PCout = PCin;
			
endmodule
