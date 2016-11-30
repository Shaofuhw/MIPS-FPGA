`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:55:06 11/10/2015
// Design Name:   MEM
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3/MemTB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MemTB;

	// Inputs
	reg clk;
	reg rst;
	reg MemWrite;
	reg MemRead;
	reg [7:0] Address;
	reg [7:0] WriteData;

	// Outputs
	wire [7:0] ReadData;

	// Instantiate the Unit Under Test (UUT)
	MEM uut (
		.clk(clk), 
		.rst(rst), 
		.MemWrite(MemWrite), 
		.MemRead(MemRead), 
		.Address(Address), 
		.WriteData(WriteData), 
		.ReadData(ReadData)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		MemWrite = 0;
		MemRead = 0;
		Address = 0;
		WriteData = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
		
		#50;
		clk = 1;
		MemRead = 1;
        
		// Add stimulus here

	end
      
endmodule

