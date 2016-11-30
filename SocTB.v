`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:37:18 01/07/2016
// Design Name:   Soc_Mips
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v1/SocTB.v
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
	wire Branch;
	wire Zero;
	wire [31:0] Instruction;
	wire [5:0] PCnext;
	wire [5:0] PCJout;
	wire [5:0] PCout;
	wire [7:0] ALUResult;
	wire [7:0] Data;
	wire [7:0] readd1;
	wire [7:0] readd2;
	wire [7:0] WriteBack;
	wire [4:0] readr1;
	wire [4:0] readr2;
	wire [7:0] SignExtendOut;

	// Instantiate the Unit Under Test (UUT)
	Soc_Mips uut (
		.clk(clk), 
		.rst(rst), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.RegWrite(RegWrite), 
		.Instruction(Instruction), 
		.PCnext(PCnext), 
		.PCJout(PCJout), 
		.PCout(PCout), 
		.ALUResult(ALUResult), 
		.Data(Data), 
		.readd1(readd1), 
		.readd2(readd2), 
		.WriteBack(WriteBack), 
		.readr1(readr1), 
		.readr2(readr2),
		.SignExtendOut(SignExtendOut),
		.Branch(Branch),
		.Zero(Zero)
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

        
		// Add stimulus here

	end      
endmodule

