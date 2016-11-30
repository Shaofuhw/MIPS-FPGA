`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:31:53 12/31/2015
// Design Name:   Soc_Mips
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v4/SocTB.v
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
	wire [5:0] PCout;
	wire [7:0] WriteBack;
	wire [2:0] readr1;
	wire [2:0] readr2;
	wire [7:0] readd1,readd2,reg1,reg2;
	wire [7:0] Alu1,Alu2,ALUResult;
	wire [2:0] ALUOp2;
	wire [1:0] Forward_A,Forward_B;
	wire [31:0] IFID_Instruction;
	wire [5:0] IFID_PCNext;
	wire [7:0] IDEX_ControlSignals;
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

	// Instantiate the Unit Under Test (UUT)
	Soc_Mips uut (
		.clk(clk), 
		.rst(rst), 
		.PCout(PCout), 
		.WriteBack(WriteBack), 
		.readr1(readr1), 
		.readr2(readr2), 
		.readd1(readd1),
		.readd2(readd2),
		.reg1(reg1),
		.reg2(reg2),
		.IFID_Instruction(IFID_Instruction), 
		.IFID_PCNext(IFID_PCNext), 
		.IDEX_ControlSignals(IDEX_ControlSignals), 
		.IDEX_ReadData1(IDEX_ReadData1), 
		.IDEX_ReadData2(IDEX_ReadData2), 
		.IDEX_SignExtend(IDEX_SignExtend), 
		.IDEX_RegisterRs(IDEX_RegisterRs), 
		.IDEX_RegisterRt(IDEX_RegisterRt), 
		.IDEX_RegisterRd(IDEX_RegisterRd), 
		.EXMEM_ControlSignals(EXMEM_ControlSignals), 
		.EXMEM_ALUResult(EXMEM_ALUResult), 
		.Alu1(Alu1),
		.Alu2(Alu2),
		.ALUOp2(ALUOp2),
		.Forward_A(Forward_A),
		.Forward_B(Forward_B),
		.ALUResult(ALUResult),
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

