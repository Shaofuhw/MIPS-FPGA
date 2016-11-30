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
	reg [5:0] PCNext;
	reg Branch,Zero;
	
	// Outputs
	wire [5:0] PCJout;

	// Instantiate the Unit Under Test (UUT)
	CJump uut (
		.ShiftIn(ShiftIn), 
		.PCNext(PCNext), 
		.Branch(Branch),
		.Zero(Zero),
		.PCJout(PCJout)
	);

	initial begin
		// Initialize Inputs
		ShiftIn = 0;
		PCNext = 0;

		// Wait 100 ns for global reset to finish
		#50;
		ShiftIn = 9;
		PCNext = 16;
		Branch = 1;
		Zero = 1;
        
		// Add stimulus here

	end
      
endmodule

