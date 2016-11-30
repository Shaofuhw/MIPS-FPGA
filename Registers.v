`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:59 11/02/2015 
// Design Name: 
// Module Name:    Registers 
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
module Registers
	#(parameter REG_WIDTH = 8,
	parameter REG_FILE_DEPTH = 8,
	parameter REG_DIR_WIDTH = 3)
	(input [REG_DIR_WIDTH-1:0] readr1,readr2,writer,
	input [REG_WIDTH-1:0] writedata,
	input clk,rst,RegWrite,
	output [REG_WIDTH-1:0] readd1,readd2
    );
	 
	reg [REG_WIDTH-1:0] RegFile [0:REG_FILE_DEPTH-1];
	integer i;
	
	always@(posedge clk or posedge rst)
		if(rst)
			begin
				for(i=0;i<(REG_FILE_DEPTH);i=i+1)
					RegFile[i] <= 0;
			end
		else if ( RegWrite == 1)
			RegFile [writer] <= writedata;
			
	assign readd1 = ( readr1 == 0 )?0:
						 ( readr1 == writer )? writedata:RegFile[readr1];

	assign readd2 = ( readr2 == 0 )?0:
						 ( readr2 == writer )? writedata:RegFile[readr2];
	
endmodule
