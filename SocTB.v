`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:53:00 11/15/2015
// Design Name:   Soc_Mips
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v2/SocTB.v
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
	wire MemRead;
	wire MemWrite;
	wire RegWrite;
	wire [31:0] Instruction;
	wire [5:0] PCout;
	wire [7:0] ALUResult;
	wire [7:0] Data;
	wire [7:0] readd1;
	wire [7:0] readd2;
	wire [7:0] WriteBack;
	wire [2:0] readr1;
	wire [2:0] readr2;
	wire [2:0] writer;
	wire [7:0] ALU1,ALU2;

	// Instantiate the Unit Under Test (UUT)
	Soc_Mips uut (
		.clk(clk), 
		.rst(rst), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.RegWrite(RegWrite), 
		.Instruction(Instruction), 
		.PCout(PCout), 
		.ALUResult(ALUResult), 
		.Data(Data), 
		.readd1(readd1), 
		.readd2(readd2), 
		.WriteBack(WriteBack), 
		.readr1(readr1), 
		.readr2(readr2),
		.writer(writer),
		.ALU1(ALU1),
		.ALU2(ALU2)
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

