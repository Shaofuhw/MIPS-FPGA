`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:18:31 11/03/2015 
// Design Name: 
// Module Name:    MEM 
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
module MEM
	#(parameter DATA_DEPTH = 4,
	parameter DATA_WIDTH = 8,
	parameter DATA_DIR_WIDTH = 8)
	(input clk,rst,MemWrite,MemRead,
	input [DATA_DIR_WIDTH-1:0] Address,
	input [DATA_WIDTH-1:0] WriteData,
	output [DATA_WIDTH-1:0] ReadData
    );

	reg [DATA_WIDTH-1:0] RegFile [0:DATA_DEPTH-1];
	integer i;
	
	always@(posedge rst or posedge clk)
		if(rst)
			begin
				for(i=0;i<(DATA_DEPTH);i=i+1)
					RegFile[i] <= 0;
				RegFile[0] <= 3;
				RegFile[1] <= 2;
			end
		else if (MemWrite == 1)
			begin
				RegFile[Address[1:0]] <= WriteData;
			end
	
	assign ReadData = (MemRead == 1)?RegFile[Address[1:0]]:0;
			
endmodule
