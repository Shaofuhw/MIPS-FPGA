`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:56:07 11/02/2015 
// Design Name: 
// Module Name:    IMemory 
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
module IMemory
	#(parameter PC_WIDTH = 6)
	(input [PC_WIDTH-1:0] Address,
	output reg [31:0] Instruction
    );
	 
//`define REGMEM
`define DATA_WIDTH  32
`define ADDR_WIDTH  5
`define MEM_DEPTH   32
`define REG_DEPTH   8
// instructions opcodes	
`define   RTYPE 6'd00
`define   ADD   6'd32
`define   ADDU  6'd33
`define   ADDU  6'd33
`define   SUB   6'd34
`define   SUBU  6'd35
`define   AND   6'd36
`define   ADDI  6'd08
`define   ADDIU 6'd09
`define   MULT  6'd12
`define   MULTU 6'd13
`define   DIV   6'd26
`define   DIVU  6'd27
`define   AND   6'd36
`define   ANDI  6'd12
`define   OR    6'd37
`define   ORI   6'd13
`define   XOR   6'd26
`define   NOR   6'd27
`define   SLL   6'd00
`define   SRL   6'd02
`define   SRA   6'd03
`define   SLT   6'd42
`define   SLTI  6'd10
`define   SLL   6'd00
`define   LUI   6'd15
`define   LW    6'd35
`define   LH    6'd33
`define   LHU   6'd37
`define   LB    6'd32
`define   LBU   6'd36
`define   SW    6'd43
`define   SH    6'd41
`define   SB    6'd40
`define   BEQ   6'd04
`define   BNE   6'd05
`define   J     6'd02
`define   JAL   6'd03
`define   JR    6'd08
// memory initial contents	
`define CODE_0  32'h8C010010 		//    lw $1,$0(10)   	# a = M[10]
`define CODE_1  32'h8C020011 		//    lw $2,$0(14)   	# b = M[11]
`define CODE_2  32'h0041182A 		//    slt $3,$2,$1		# a > b?
`define CODE_3  32'h10600009 		//    beq $3,$0,L1/9 	# a =< b
`define CODE_4  32'hAC010012 		//    sw $1,$0(18)   	# M[12] = a
`define CODE_5  32'h00222022 		//    sub $4,$1,$2		# c = a - b
`define CODE_6  32'h0082182A 		//    slt $3,$2,$4		# c < b?
`define CODE_7  32'h10600002 		//    beq $3,$0,L0/2 	# c >= b
`define CODE_8  32'hAC040010 		//    sw $4,$0(10)   	# M[10] = c
`define CODE_9  32'h10000005     //    beq $0,$0,L2/5 	# j L2
	// `define  CODE_9  32'h0800000F 		//    j 0F           	# j L2
`define CODE_A  32'hAC020010 		// L0:sw $2,$0(10)   	# M[10] = b
`define CODE_B  32'hAC040011 		// 	  sw $4,$0(14)   	# M[11] = c
`define CODE_C  32'h10000002     // 	 beq $0,$0,L2/2	# j L2 
	// `define   CODE_C  32'h0800000F 		// 	  j 0F           	# j L2 
`define CODE_D  32'h00222020 		// L1:add $4,$1,$2		# c = a + b
`define CODE_E  32'hAC040012 		//    sw $4,$0(18)   	# M[12] = c
	// `define   CODE_F  32'h00000000    // L2:nop
`define CODE_F  32'h08000000 		// L2:j 00
`define DATA_10  32'h05       	  // M[10h]
`define DATA_11  32'h03       	  // M[11h]
`define DATA_12  32'h00       	  // M[12h]
`define DATA_13  32'h00       	  // M[13h]  
	
	always@(Address)
		begin
			case(Address)
				0:Instruction = `CODE_0;
				//0:Instruction = 32'b00000011111000000000000000100000;	//Prueba para Excepción Registro Rs
				//0:Instruction = 32'b00000000000111110000000000100000;	//Prueba para Excepción Registro Rt
				//0:Instruction = 32'b00000000000000001111100000100000;	//Prueba para Excepción Registro Rd
				//0:Instruction = 32'b11111100000000000000000000100000;	//Prueba para Excepción OPCode
				//0:Instruction = 32'b00000000000000000000000000000001;	//Prueba para Excepción Function
				4:Instruction = `CODE_1;
				8:Instruction = `CODE_2;
				12:Instruction = `CODE_3;
				16:Instruction = `CODE_4;
				20:Instruction = `CODE_5;
				24:Instruction = `CODE_6;
				28:Instruction = `CODE_7;
				32:Instruction = `CODE_8;
				36:Instruction = `CODE_9;
				40:Instruction = `CODE_A;
				44:Instruction = `CODE_B;
				48:Instruction = `CODE_C;
				52:Instruction = `CODE_D;
				56:Instruction = `CODE_E;
				60:Instruction = `CODE_F;
				default: Instruction = 32'h00;
			endcase
		end
		
endmodule
