`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:27:04 11/02/2015
// Design Name:   CJump
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3/PCJumpTB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CJump
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PCJumpTB;

	// Inputs
	reg [7:0] ShiftIn;
	reg [7:0] PCNext;

	// Outputs
	wire [5:0] PCJout;

	// Instantiate the Unit Under Test (UUT)
	CJump uut (
		.ShiftIn(ShiftIn), 
		.PCNext(PCNext), 
		.PCJout(PCJout)
	);

	initial begin
		// Initialize Inputs
		ShiftIn = 0;
		PCNext = 0;

		// Wait 100 ns for global reset to finish
		#100;
		ShiftIn = 2;
		PCNext = 4;
        
		// Add stimulus here

	end
      
endmodule

