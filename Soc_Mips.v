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
	parameter ALU_WIDTH = 8)
	(input clk,rst,
	output MemRead,MemWrite,RegWrite,
	output [31:0]Instruction,
	output [PC_WIDTH-1:0]PCout,
	output [ALU_WIDTH-1:0]ALUResult,
	output [DATA_WIDTH-1:0] Data,
	output [REG_WIDTH-1:0]readd1,readd2,WriteBack,ALU1,ALU2,
	output [REG_DIR_WIDTH-1:0] readr1,readr2,writer
);
	
	wire [PC_WIDTH-1:0] PCnext,ALUR;
	wire Zero,ALUSrc,MemtoReg,Branch,PCWrite,IFIDWrite,CControl;
	wire [1:0] ALUop, Forward_A, Forward_B;
	wire [REG_DIR_WIDTH-1:0] WriteReg;
	wire [EXT_OUT_WIDTH-1:0] SignExtendOut;
	wire [ALU_WIDTH-1:0] data2;
	
	parameter IFIDsize = 32+PC_WIDTH;
	parameter IDEXsize = 9+PC_WIDTH+REG_WIDTH+REG_WIDTH+EXT_OUT_WIDTH+REG_DIR_WIDTH+REG_DIR_WIDTH;
	parameter EXMEMsize = 5+PC_WIDTH+1+ALU_WIDTH+REG_WIDTH+REG_DIR_WIDTH;
	parameter MEMWBsize = 2+DATA_WIDTH+ALU_WIDTH+REG_DIR_WIDTH;
	
	reg [IFIDsize-1:0] IFID;
	reg [IDEXsize-1:0] IDEX;
	reg [EXMEMsize-1:0] EXMEM;
	reg [MEMWBsize-1:0] MEMWB;
	reg [REG_DIR_WIDTH-1:0] IDEXRegisterRs;


	IF IF (
    .clk(clk), 
    .rst(rst),
	 .PCWrite(PCWrite),
	 .Branch(EXMEM[EXMEMsize-1]),
	 .Zero(EXMEM[EXMEMsize-PC_WIDTH-6]),
    .jmp_address(EXMEM[EXMEMsize-6:EXMEMsize-5-PC_WIDTH]), 
    .PCnext(PCnext), 
    .Instruction(Instruction),
	 .PCout(PCout)
    );
	 
	 always@(posedge clk or posedge rst)
		if(rst)
				IFID <= 0;
		else if(IFIDWrite == 1)
			begin
				IFID[IFIDsize-1:32] <= PCnext;
				IFID[31:0] <= Instruction;
			end
	
	assign readr1 = IFID[REG_DIR_WIDTH-1+21:21];
	assign readr2 = IFID[REG_DIR_WIDTH-1+16:16];
	assign writer = MEMWB[REG_DIR_WIDTH-1:0];
	
	ID ID (
    .clk(clk), 
    .rst(rst),  
    .WriteBack(WriteBack), 
    .Instruction(IFID[31:0]), 
	 .WriteReg(MEMWB[REG_DIR_WIDTH-1:0]),
	 .RegWriteBack(MEMWB[MEMWBsize-1]),
    .readd1(readd1), 
    .readd2(readd2), 
    .ALUSrc(ALUSrc), 
    .MemtoReg(MemtoReg), 
    .MemWrite(MemWrite), 
    .MemRead(MemRead), 
    .ALUop(ALUop), 
	 .SignExtendOut(SignExtendOut),
	 .RegWrite(RegWrite),
	 .Branch(Branch),
	 .RegDst(RegDst)
    );
	 
	 always@(posedge rst or posedge clk)
		if(rst)
			begin
				IDEX <= 0;
				IDEXRegisterRs <= 0;
			end
		else
			begin
				if(CControl == 1)
					IDEX[IDEXsize-1:IDEXsize-9] <= {RegDst,ALUop[1:0],ALUSrc,Branch,MemRead,MemWrite,RegWrite,MemtoReg};
				else if (CControl == 0)
					IDEX[IDEXsize-1:IDEXsize-9] <= 0;
				IDEX[IDEXsize-10:IDEXsize-9-PC_WIDTH] <= IFID[IFIDsize-1:32]; //Se pasa el PCnext
				IDEX[IDEXsize-PC_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH] <= readd1; //Dato 1
				IDEX[IDEXsize-PC_WIDTH-REG_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH-REG_WIDTH] <= readd2; //Dato 2 
				IDEX[IDEXsize-PC_WIDTH-REG_WIDTH-REG_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH-REG_WIDTH-EXT_OUT_WIDTH] <= SignExtendOut;
				IDEX[REG_DIR_WIDTH+REG_DIR_WIDTH-1:REG_DIR_WIDTH] <= IFID[REG_DIR_WIDTH+15:16]; //Instrucciones 20-16  //Rt
				IDEX[REG_DIR_WIDTH-1:0] <= IFID[REG_DIR_WIDTH+10:11]; //Instrucciones 15-11 //Rd
				IDEXRegisterRs <= IFID[REG_DIR_WIDTH+20:21];  //Rs
			end
		 
	 EX EX (
    .readd1(IDEX[IDEXsize-PC_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH]), 
    .readd2(IDEX[IDEXsize-PC_WIDTH-REG_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH-REG_WIDTH]),
	 .PCnext(IDEX[IDEXsize-10:IDEXsize-9-PC_WIDTH]),
    .ALUop(IDEX[IDEXsize-2:IDEXsize-3]), 
    .ALUSrc(IDEX[IDEXsize-4]),
	 .RegDst(IDEX[IDEXsize-1]),
    .SignExtendOut(IDEX[IDEXsize-PC_WIDTH-REG_WIDTH-REG_WIDTH-10:IDEXsize-9-PC_WIDTH-REG_WIDTH-REG_WIDTH-EXT_OUT_WIDTH]), 
    .funct(IDEX[IDEXsize-4-PC_WIDTH-REG_WIDTH-REG_WIDTH-EXT_OUT_WIDTH:IDEXsize-9-PC_WIDTH-REG_WIDTH-REG_WIDTH-EXT_OUT_WIDTH]),
	 .RegDst2(IDEX[REG_DIR_WIDTH+REG_DIR_WIDTH-1:REG_DIR_WIDTH]),
	 .RegDst1(IDEX[REG_DIR_WIDTH-1:0]),
	 .Forward_A(Forward_A),
	 .Forward_B(Forward_B),
	 .WBData(WriteBack),
	 .Address(EXMEM[EXMEMsize-PC_WIDTH-7:EXMEMsize-PC_WIDTH-6-ALU_WIDTH]),  //El mismo que entra en Address en la memoria de datos
    .ALUResult(ALUResult), //Salida de la ALU
    .Zero(Zero),
	 .WriteReg(WriteReg),
	 .ALUR(ALUR),	//Salida de la ALU del PC
	 .data2(data2),
	 .data1(ALU1),
	 .data2_2(ALU2)
    );
	 
	 always@(posedge clk or posedge rst)
		if(rst)
			EXMEM <= 0;
		else
			begin
				EXMEM[EXMEMsize-1:EXMEMsize-5] <= IDEX[IDEXsize-5:IDEXsize-9]; //Branch,MemRead,MemWrite,RegWrite,MemtoReg
				EXMEM[EXMEMsize-6:EXMEMsize-5-PC_WIDTH] <= ALUR;  //Dirección Salto
				EXMEM[EXMEMsize-PC_WIDTH-6] <= Zero;
				EXMEM[EXMEMsize-PC_WIDTH-7:EXMEMsize-PC_WIDTH-6-ALU_WIDTH] <= ALUResult;  //Resultado ALU
				EXMEM[REG_DIR_WIDTH+REG_WIDTH-1:REG_DIR_WIDTH] <= data2; //Dato 2 del registro
				EXMEM[REG_DIR_WIDTH-1:0] <= WriteReg;  //EXMEM.RegisterRd
			end

	 MEM MEM (
    .clk(clk), 
    .rst(rst), 
    .MemWrite(EXMEM[EXMEMsize-3]), 
    .MemRead(EXMEM[EXMEMsize-2]), 
    .Address(EXMEM[EXMEMsize-PC_WIDTH-7:EXMEMsize-PC_WIDTH-6-ALU_WIDTH]), 
    .WriteData(EXMEM[REG_DIR_WIDTH+REG_WIDTH-1:REG_DIR_WIDTH]), 
    .ReadData(Data)
    );

	always@(posedge clk or posedge rst)
		if(rst)
			MEMWB <= 0;
		else
			begin
				MEMWB[MEMWBsize-1:MEMWBsize-2] <= EXMEM[EXMEMsize-4:EXMEMsize-5]; //RegWrite, MemtoReg
				MEMWB[MEMWBsize-3:MEMWBsize-2-DATA_WIDTH] <= Data;  //Dato de la memoria
				MEMWB[MEMWBsize-DATA_WIDTH-3:MEMWBsize-2-DATA_WIDTH-ALU_WIDTH] <= EXMEM[EXMEMsize-PC_WIDTH-7:EXMEMsize-PC_WIDTH-6-ALU_WIDTH]; //Address
				MEMWB[REG_DIR_WIDTH-1:0] <= EXMEM[REG_DIR_WIDTH-1:0];  //MEMWB.RegisterRd
			end

	WB WB (
    .MemtoReg(MEMWB[MEMWBsize-2]), 
    .ALUr(MEMWB[MEMWBsize-DATA_WIDTH-3:MEMWBsize-2-DATA_WIDTH-ALU_WIDTH]), 
    .ReadD(MEMWB[MEMWBsize-3:MEMWBsize-2-DATA_WIDTH]), 
    .WriteBack(WriteBack)
    );
	 
	 ForwardUnit Forward (
    .IDEXRegisterRs(IDEXRegisterRs), 
    .IDEXRegisterRt(IDEX[REG_DIR_WIDTH+REG_DIR_WIDTH-1:REG_DIR_WIDTH]), 
    .EXMEMRegisterRd(EXMEM[REG_DIR_WIDTH-1:0]), 
    .MEMWBRegisterRd(MEMWB[REG_DIR_WIDTH-1:0]), 
    .EXMEMRegWrite(EXMEM[EXMEMsize-4]), 
    .MEMWBRegWrite(MEMWB[MEMWBsize-1]), 
    .Forward_A(Forward_A), 
    .Forward_B(Forward_B)
    );
	 
	 HazardUnit Hazard (
    .IDEXMemRead(IDEX[IDEXsize-6]), 
    .IDEXRegisterRt(IDEX[REG_DIR_WIDTH+REG_DIR_WIDTH-1:REG_DIR_WIDTH]), 
    .IFIDRegisterRs(IFID[REG_DIR_WIDTH+20:21]), 
    .IFIDRegisterRt(IFID[REG_DIR_WIDTH+15:16]), 
    .PCWrite(PCWrite), 
    .IFIDWrite(IFIDWrite), 
    .CControl(CControl)
    );

endmodule
