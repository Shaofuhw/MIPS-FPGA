`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:37:46 01/08/2016
// Design Name:   ID
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v1/IDTB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IDTB;

	// Inputs
	reg clk;
	reg rst;
	reg Zero;
	reg [7:0] WriteBack;
	reg [31:0] Instruction;
	reg [5:0] PCnext;

	// Outputs
	wire [7:0] readd1;
	wire [7:0] readd2;
	wire ALUSrc;
	wire MemtoReg;
	wire MemWrite;
	wire MemRead;
	wire RegWrite;
	wire [1:0] ALUop;
	wire [5:0] PCJout;
	wire [7:0] SignExtendOut;

	// Instantiate the Unit Under Test (UUT)
	ID uut (
		.clk(clk), 
		.rst(rst), 
		.Zero(Zero), 
		.WriteBack(WriteBack), 
		.Instruction(Instruction), 
		.PCnext(PCnext), 
		.readd1(readd1), 
		.readd2(readd2), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.MemWrite(MemWrite), 
		.MemRead(MemRead), 
		.RegWrite(RegWrite), 
		.ALUop(ALUop), 
		.PCJout(PCJout), 
		.SignExtendOut(SignExtendOut)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		Zero = 0;
		WriteBack = 0;
		Instruction = 0;
		PCnext = 0;

		// Wait 100 ns for global reset to finish
		#50;
		rst = 1;
		
		#50;
		rst = 0;
		clk = 1;
		Zero = 1;
		WriteBack = 0;
		Instruction = 32'b00010000011000000000000000001001;
		PCnext = 010000;
		
		#50;
		clk = 0;
		
		#50;
		clk = 1;
        
		// Add stimulus here

	end
      
endmodule

