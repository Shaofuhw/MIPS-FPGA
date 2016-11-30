`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:28:02 11/03/2015 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory
	#(parameter DATA_DEPTH = 4,
	parameter DATA_WIDTH = 8,
	parameter DATA_DIR_WIDTH = 8)
	(input rst,clk,
	input [DATA_DIR_WIDTH-1:0] Address,
	input [DATA_WIDTH-1:0] WriteData,
	input MemWrite,MemRead,
	output reg [DATA_WIDTH-1:0] ReadData
    );

	reg [DATA_WIDTH-1:0] RegFile [0:DATA_DEPTH-1];
	integer i;
	
	always@(posedge rst or posedge clk)
		if(rst)
			begin
				ReadData <= 0;
				for(i=0;i<(DATA_DEPTH);i=i+1)
					RegFile[i] <= 0;
			end
		else if (MemWrite == 1)
			begin
				RegFile[Address] <= WriteData;
			end
		else if (MemRead == 1)
			begin
				ReadData <= RegFile[Address];	
			end
			
endmodule
