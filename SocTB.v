`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:58:34 01/03/2016
// Design Name:   Soc_Mips
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v5/SocTB.v
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
	wire [2:0] readr1;
	wire [2:0] readr2;
	wire [7:0] Alu1;
	wire [7:0] Alu2;
	wire [7:0] ALUResult;
	wire [2:0] ALUOp2;
	wire [7:0] readd1;
	wire [7:0] readd2;
	wire [7:0] reg1;
	wire [7:0] reg2;
	wire [1:0] Forward_A;
	wire [1:0] Forward_B;
	wire Overflow;
	wire [2:0] ExceptionCause;
	wire [5:0] ExceptionPC;
	wire [31:0] IFID_Instruction;
	wire [5:0] IFID_PCNext;
	wire [5:0] IFID_PC;
	wire [7:0] IDEX_ControlSignals;
	wire [5:0] IDEX_PC;
	wire [7:0] IDEX_ReadData1;
	wire [7:0] IDEX_ReadData2;
	wire [7:0] IDEX_SignExtend;
	wire [2:0] IDEX_RegisterRs;
	wire [2:0] IDEX_RegisterRt;
	wire [2:0] IDEX_RegisterRd;
	wire [3:0] EXMEM_ControlSignals;
	wire [7:0] EXMEM_ALUResult;
	wire [7:0] EXMEM_ReadData2;
	wire [2:0] EXMEM_RegisterRd;
	wire [1:0] MEMWB_ControlSignals;
	wire [7:0] MEMWB_ReadData;
	wire [7:0] MEMWB_Address;
	wire [2:0] MEMWB_RegisterRd;
		wire [5:0] PCout;
	wire [7:0] Register1,Register2,Register3,Register4;


	// Instantiate the Unit Under Test (UUT)
	Soc_Mips uut (
		.clk(clk), 
		.rst(rst), 
		.PCout(PCout), 
		.WriteBack(WriteBack), 
		.readr1(readr1), 
		.readr2(readr2), 
		.Alu1(Alu1), 
		.Alu2(Alu2), 
		.ALUResult(ALUResult), 
		.ALUOp2(ALUOp2), 
		.readd1(readd1), 
		.readd2(readd2), 
		.reg1(reg1), 
		.reg2(reg2), 
		.Register1(Register1),
		.Register2(Register2),
		.Register3(Register3),
		.Register4(Register4),
		.Forward_A(Forward_A), 
		.Forward_B(Forward_B), 
		.Overflow(Overflow), 
		.ExceptionCause(ExceptionCause), 
		.ExceptionPC(ExceptionPC), 
		.IFID_Instruction(IFID_Instruction), 
		.IFID_PCNext(IFID_PCNext), 
		.IFID_PC(IFID_PC), 
		.IDEX_ControlSignals(IDEX_ControlSignals), 
		.IDEX_PC(IDEX_PC), 
		.IDEX_ReadData1(IDEX_ReadData1), 
		.IDEX_ReadData2(IDEX_ReadData2), 
		.IDEX_SignExtend(IDEX_SignExtend), 
		.IDEX_RegisterRs(IDEX_RegisterRs), 
		.IDEX_RegisterRt(IDEX_RegisterRt), 
		.IDEX_RegisterRd(IDEX_RegisterRd), 
		.EXMEM_ControlSignals(EXMEM_ControlSignals), 
		.EXMEM_ALUResult(EXMEM_ALUResult), 
		.EXMEM_ReadData2(EXMEM_ReadData2), 
		.EXMEM_RegisterRd(EXMEM_RegisterRd), 
		.MEMWB_ControlSignals(MEMWB_ControlSignals), 
		.MEMWB_ReadData(MEMWB_ReadData), 
		.MEMWB_Address(MEMWB_Address), 
		.MEMWB_RegisterRd(MEMWB_RegisterRd)
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

