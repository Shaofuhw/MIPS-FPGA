`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:53:30 01/04/2016
// Design Name:   Soc_Mips
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v6/SocTB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Soc_Mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SocTB;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [7:0] WriteBack;
	wire [7:0] ALUResult;
	wire [5:0] PCout;
	wire [7:0] Register1;
	wire [7:0] Register2;
	wire [7:0] Register3;
	wire [7:0] Register4;
	wire [2:0] ExceptionCause;

	// Instantiate the Unit Under Test (UUT)
	Soc_Mips uut (
		.clk(clk), 
		.rst(rst), 
		.WriteBack(WriteBack), 
		.ALUResult(ALUResult), 
		.PCout(PCout), 
		.Register1(Register1), 
		.Register2(Register2), 
		.Register3(Register3), 
		.Register4(Register4), 
		.ExceptionCause(ExceptionCause)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

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
		
	end

      
endmodule

