`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:44:37 11/02/2015
// Design Name:   SignExt
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3/SignTB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SignExt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SignTB;

	// Inputs
	reg [5:0] In;
	reg clk;
	reg rst;

	// Outputs
	wire [9:0] Out;

	// Instantiate the Unit Under Test (UUT)
	SignExt uut (
		.rst(rst),
		.In(In), 
		.clk(clk), 
		.Out(Out)
	);

	initial begin
		// Initialize Inputs
		In = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100
		rst = 1;
	
		#100
		rst = 0;
		
		#100;
		In = 6'b000111;
		clk = 1;
		
		#100;
		clk = 0;
		In = 6'b101010;
		
		#100
		clk = 1;
		
		#100
		clk = 0;
        
		// Add stimulus here

	end
      
endmodule

