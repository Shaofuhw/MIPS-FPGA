`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:07 11/02/2015 
// Design Name: 
// Module Name:    Soc_Mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Soc_Mips
	#(parameter PC_WIDTH = 6,
	parameter CODE_DIR_WIDTH = 4,
	parameter CODE_DEPTH = 16,
	parameter REG_WIDTH = 8,
	parameter REG_FILE_DEPTH = 8,
	parameter REG_DIR_WIDTH = 3,
	parameter EXT_IN_WIDTH = 6,
	parameter EXT_OUT_WIDTH = 8,
	parameter SH_IN_WIDTH = 8,
	parameter SH_OUT_WIDTH = 6,
	parameter DATA_WIDTH = 8,
	parameter DATA_DEPTH = 4,
	parameter DATA_DIR_WIDTH = 8,
	parameter ALU_WIDTH = 8,
	parameter EXCEPTION_JMP = 6'b111111)
	(input clk,rst,MemSet,
	input [2:0] MemVal,
	input [1:0] MemNum,
	output [DATA_WIDTH-1:0] WriteBack,
	output [ALU_WIDTH-1:0] ALUResult,
	output [PC_WIDTH-1:0] PCout,
	output [REG_WIDTH-1:0] Register1, Register2, Register3, Register4,
	output [2:0] ExceptionCause
	
	//output [PC_WIDTH-1:0]PCout,
	//output [REG_WIDTH-1:0]WriteBack,
	//output [REG_DIR_WIDTH-1:0]readr1,readr2,
	//output [ALU_WIDTH-1:0] Alu1,Alu2,ALUResult,
	//output [2:0] ALUOp2,
	//output [REG_WIDTH-1:0]readd1,readd2,reg1,reg2,
	//output [1:0] Forward_A, Forward_B,
	//output Overflow,
	//output [2:0] ExceptionCause,
	//output [PC_WIDTH-1:0] ExceptionPC,
	//output Exception,
	
	//output reg [31:0] 			 		IFID_Instruction,
	//output reg [PC_WIDTH-1:0] 			IFID_PCNext,
	//output reg [PC_WIDTH-1:0]			IFID_PC,
	
	//output reg [7:0] 						IDEX_ControlSignals,
	//output reg [PC_WIDTH-1:0]			IDEX_PC,
	//output reg [REG_WIDTH-1:0]	   	IDEX_ReadData1,
	//output reg [REG_WIDTH-1:0] 	 	IDEX_ReadData2,
	//output reg [EXT_OUT_WIDTH-1:0] 	IDEX_SignExtend,
	//output reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRs,
	//output reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRt,
	//output reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRd,
	
	//output reg [3:0] 						EXMEM_ControlSignals,
	//output reg [ALU_WIDTH-1:0] 		EXMEM_ALUResult,
	//output reg [REG_WIDTH-1:0] 		EXMEM_ReadData2,
	//output reg [REG_DIR_WIDTH-1:0] 	EXMEM_RegisterRd,
	
	//output reg [1:0] 						MEMWB_ControlSignals,
	//output reg [DATA_WIDTH-1:0] 		MEMWB_ReadData,
	//output reg [ALU_WIDTH-1:0] 		MEMWB_Address,
	//output reg [REG_DIR_WIDTH-1:0] 	MEMWB_RegisterRd
);                           
	
	wire [DATA_WIDTH-1:0] Data;
	wire [ALU_WIDTH-1:0]data2;
	wire [31:0]Instruction;
	wire [PC_WIDTH-1:0] PCnext,ALUR;
	wire ALUSrc,MemtoReg,Branch,PCWrite,Ov,Z,IFIDWrite,CControl,Iguales,IF_Flush,ID_Flush,EX_Flush,MemRead,MemWrite,RegWrite;
	wire [1:0] ALUop;
	wire [REG_DIR_WIDTH-1:0] WriteReg;
	wire [EXT_OUT_WIDTH-1:0] SignExtendOut;
	
	wire [REG_DIR_WIDTH-1:0]readr1,readr2;
	wire [ALU_WIDTH-1:0] Alu1,Alu2;
	wire [2:0] ALUOp2;
	wire [REG_WIDTH-1:0]readd1,readd2,reg1,reg2;
	wire [1:0] Forward_A, Forward_B;
	wire [PC_WIDTH-1:0] ExceptionPC;
	
	reg [31:0] 			 			IFID_Instruction;
	reg [PC_WIDTH-1:0] 			IFID_PCNext;
	reg [PC_WIDTH-1:0]			IFID_PC;
	
	reg [7:0] 						IDEX_ControlSignals;
	reg [PC_WIDTH-1:0]			IDEX_PC;
	reg [REG_WIDTH-1:0]	   	IDEX_ReadData1;
	reg [REG_WIDTH-1:0] 	 		IDEX_ReadData2;
	reg [EXT_OUT_WIDTH-1:0] 	IDEX_SignExtend;
	reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRs;
	reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRt;
	reg [REG_DIR_WIDTH-1:0] 	IDEX_RegisterRd;
	
	reg [3:0] 						EXMEM_ControlSignals;
	reg [ALU_WIDTH-1:0] 			EXMEM_ALUResult;
	reg [REG_WIDTH-1:0] 			EXMEM_ReadData2;
	reg [REG_DIR_WIDTH-1:0] 	EXMEM_RegisterRd;
	
	reg [1:0] 						MEMWB_ControlSignals;
	reg [DATA_WIDTH-1:0] 		MEMWB_ReadData;
	reg [ALU_WIDTH-1:0] 			MEMWB_Address;
	reg [REG_DIR_WIDTH-1:0] 	MEMWB_RegisterRd;
	
	//assign readr1 = IFID_Instruction[REG_DIR_WIDTH+20:21];
	//assign readr2 = IFID_Instruction[REG_DIR_WIDTH+15:16];
	
//	parameter IFIDsize = 32+PC_WIDTH;
//	parameter IDEXsize = 9+PC_WIDTH+REG_WIDTH+REG_WIDTH+EXT_OUT_WIDTH+REG_DIR_WIDTH+REG_DIR_WIDTH;
//	parameter EXMEMsize = 5+PC_WIDTH+1+ALU_WIDTH+REG_WIDTH+REG_DIR_WIDTH;
//	parameter MEMWBsize = 2+DATA_WIDTH+ALU_WIDTH+REG_DIR_WIDTH;
	
//	reg [IFIDsize-1:0] IFID;
//	reg [IDEXsize-1:0] IDEX;
//	reg [EXMEMsize-1:0] EXMEM;
//	reg [MEMWBsize-1:0] MEMWB;




	IF IF (
    .clk(clk), 
    .rst(rst),
	 .ExceptionCause(ExceptionCause),
	 .PCWrite(PCWrite),
	 .Branch(Branch),
	 .Zero(Iguales),
    .jmp_address(ALUR), 
    .PCnext(PCnext), 
    .Instruction(Instruction),
	 .PCout(PCout)
    );
	 
	 always@(posedge clk or posedge rst)
		if(rst)
			begin
				IFID_Instruction  <= 0;
				IFID_PCNext			<= 0;
				IFID_PC				<= 0;
			end
		else if(IFIDWrite == 1 && IF_Flush == 0)
			begin
				IFID_PCNext 		<= PCnext;
				IFID_Instruction  <= Instruction;
				IFID_PC				<= PCout;
			end
		else if(IF_Flush == 1)	//IF_Flush, es la señal que elimina la instrucción que entra en caso de salto
			begin
				IFID_Instruction  <= 0;
				IFID_PCNext			<= 0;
				IFID_PC 				<= 0;
			end
			
			
	ID ID (
    .clk(clk), 
    .rst(rst),  
	 .ExceptionCause(ExceptionCause),
    .WriteBack(WriteBack),
	 .PCNext(IFID_PCNext),
    .Instruction(IFID_Instruction), 
	 .WriteReg(MEMWB_RegisterRd),
	 .RegWriteBack(MEMWB_ControlSignals[1]),
	 .IFID_RegisterRs(IFID_Instruction[REG_DIR_WIDTH+20:21]),
	 .IFID_RegisterRt(IFID_Instruction[REG_DIR_WIDTH+15:16]),
	 .IDEX_RegisterRd(IDEX_RegisterRd),
	 .ALUResult(ALUResult),
    .readd1(readd1), 
    .readd2(readd2), 
	 .reg1(reg1),
	 .reg2(reg2),
    .ALUSrc(ALUSrc), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .ALUop(ALUop), 
	 .SignExtendOut(SignExtendOut),
	 .RegWrite(RegWrite),
	 .Branch(Branch),
	 .RegDst(RegDst),
	 .Iguales(Iguales),
	 .IF_Flush(IF_Flush),
	 .ID_Flush(ID_Flush),
	 .EX_Flush(EX_Flush),
	 .ALUR(ALUR),
	 .Register1(Register1),
	 .Register2(Register2),
	 .Register3(Register3),
	 .Register4(Register4)
    );
	 
	 always@(posedge rst or posedge clk)
		if(rst)
			begin
				IDEX_ControlSignals <= 0;
				IDEX_ReadData1		  <= 0;
			   IDEX_ReadData2 	  <= 0;
				IDEX_SignExtend	  <= 0;
				IDEX_RegisterRt 	  <= 0;
				IDEX_RegisterRd 	  <= 0;
				IDEX_RegisterRs 	  <= 0;
				IDEX_PC				  <= 0;
			end
		else
			begin
				if(CControl == 1 && ID_Flush == 0)
					IDEX_ControlSignals <= {RegDst,ALUop[1:0],ALUSrc,MemRead,MemWrite,RegWrite,MemtoReg};
				else if (CControl == 0 || ID_Flush == 1)
					IDEX_ControlSignals <= 0;	
				if ( ID_Flush == 0 )
					IDEX_PC				  <= IFID_PC;
				else if ( ID_Flush == 1 )
					IDEX_PC				  <= IDEX_PC;
					
				IDEX_ReadData1		  <= readd1;
				IDEX_ReadData2		  <= readd2;
				IDEX_SignExtend	  <= SignExtendOut;
				IDEX_RegisterRs	  <= IFID_Instruction[REG_DIR_WIDTH+20:21];
				IDEX_RegisterRt	  <= IFID_Instruction[REG_DIR_WIDTH+15:16];
				IDEX_RegisterRd	  <= IFID_Instruction[REG_DIR_WIDTH+10:11];
			end
		 
	 EX EX (
    .readd1(IDEX_ReadData1), 
    .readd2(IDEX_ReadData2),
    .ALUop(IDEX_ControlSignals[6:5]), 
    .ALUSrc(IDEX_ControlSignals[4]),
	 .RegDst(IDEX_ControlSignals[7]),
    .SignExtendOut(IDEX_SignExtend), 
    .funct(IDEX_SignExtend[5:0]),
	 .RegDst2(IDEX_RegisterRt),
	 .RegDst1(IDEX_RegisterRd),
	 .Forward_A(Forward_A),
	 .Forward_B(Forward_B),
	 .WBData(WriteBack),
	 .Address(EXMEM_ALUResult),  //El mismo que entra en Address en la memoria de datos
    .ALUResult(ALUResult), //Salida de la ALU
	 .WriteReg(WriteReg),
	 .data2(data2),
	 .data1(Alu1),
	 .data2_2(Alu2),
	 .ALUCtrl(ALUOp2),
	 .Ov(Ov),
	 .Zero(Z)
    );
	 
	 always@(posedge clk or posedge rst)
		if(rst)
			begin
				EXMEM_ControlSignals <= 0;
		      EXMEM_ALUResult		<= 0;
		      EXMEM_ReadData2		<= 0;
		      EXMEM_RegisterRd		<= 0;
			end
		else
			begin
				if( EX_Flush == 1 )				
					EXMEM_ControlSignals <= 0;
				else if( EX_Flush == 0 )
					EXMEM_ControlSignals <= IDEX_ControlSignals[3:0]; 			//MemRead,MemWrite,RegWrite,MemtoReg
						
				EXMEM_ALUResult		<= ALUResult;
				EXMEM_ReadData2		<= data2;
				EXMEM_RegisterRd		<= WriteReg;
			end     

	 MEM MEM (
    .clk(clk), 
    .rst(rst), 
    .MemWrite(EXMEM_ControlSignals[2]), 
    .MemRead(EXMEM_ControlSignals[3]), 
    .Address(EXMEM_ALUResult), 
    .WriteData(EXMEM_ReadData2), 
    .ReadData(Data),
	 .MemSet(MemSet),
	 .MemVal(MemVal),
	 .MemNum(MemNum)
    );

	always@(posedge clk or posedge rst)
		if(rst)
			begin
				MEMWB_ControlSignals <= 0;
		      MEMWB_ReadData			<= 0;
		      MEMWB_Address			<= 0;
		      MEMWB_RegisterRd		<= 0;
			end
		else
			begin
				MEMWB_ControlSignals	<= EXMEM_ControlSignals[1:0];		//RegWrite,MemtoReg
			   MEMWB_ReadData			<= Data;
			   MEMWB_Address			<= EXMEM_ALUResult;
			   MEMWB_RegisterRd		<= EXMEM_RegisterRd;
			end

	WB WB (
    .MemtoReg(MEMWB_ControlSignals[0]), 
    .ALUr(MEMWB_Address), 
    .ReadD(MEMWB_ReadData), 
    .WriteBack(WriteBack)
    );
	 
	 ForwardUnit Forward (
    .IDEXRegisterRs(IDEX_RegisterRs), 
    .IDEXRegisterRt(IDEX_RegisterRt), 
    .EXMEMRegisterRd(EXMEM_RegisterRd), 
    .MEMWBRegisterRd(MEMWB_RegisterRd), 
    .EXMEMRegWrite(EXMEM_ControlSignals[1]), 
    .MEMWBRegWrite(MEMWB_ControlSignals[1]), 
    .Forward_A(Forward_A), 
    .Forward_B(Forward_B)
    );
	 
	 HazardUnit Hazard (
    .IDEXMemRead(IDEX_ControlSignals[3]), 
    .IDEXRegisterRt(IDEX_RegisterRt), 
    .IFIDRegisterRs(IFID_Instruction[REG_DIR_WIDTH+20:21]), 
    .IFIDRegisterRt(IFID_Instruction[REG_DIR_WIDTH+15:16]), 
    .PCWrite(PCWrite), 
    .IFIDWrite(IFIDWrite), 
    .CControl(CControl)
    );
	 
	 ExceptionUnit Exceptions (
    .Ov(Ov),
	 .rst(rst),
    .RegisterRs(IFID_Instruction[25:21]), 
    .RegisterRt(IFID_Instruction[20:16]), 
    .RegisterRd(IFID_Instruction[15:11]), 
    .OPCode(IFID_Instruction[31:26]), 
    .Function(IFID_Instruction[5:0]), 
    .IFID_PC(IFID_PC), 
    .IDEX_PC(IDEX_PC), 
    .ExceptionCause(ExceptionCause), 
    .ExceptionPC(ExceptionPC)
    );


endmodule
