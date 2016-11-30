`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:42:14 11/10/2015
// Design Name:   IF
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3/IFTb.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IFTb;

	// Inputs
	reg clk;
	reg rst;
	reg [5:0] jmp_address;

	// Outputs
	wire [5:0] PCnext;
	wire [31:0] Instruction;

	// Instantiate the Unit Under Test (UUT)
	IF uut (
		.clk(clk), 
		.rst(rst), 
		.jmp_address(jmp_address), 
		.PCnext(PCnext), 
		.Instruction(Instruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		jmp_address = 0;

		// Wait 100 ns for global reset to finish
		#50;
		rst = 1;
		
		#50;
		rst = 0;
		
		#50;
		clk = 1;
		
		#50;
		clk = 0;
		
		#50;
		clk = 1;
		
		#50;
		clk = 0;
		
		#50;
		clk = 1;
		
		#50;
		clk = 0;
		
        
		// Add stimulus here

	end
      
endmodule

