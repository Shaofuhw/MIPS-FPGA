`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:16 01/03/2016 
// Design Name: 
// Module Name:    Lab3 
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
module Lab3
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
	(input clk,rst,a,b,c,
	input [3:0] op,
	output lcd_e, lcd_rs, lcd_rw, lcd_4, lcd_5, lcd_6, lcd_7,
	output [7:0] led
    );

	wire [REG_WIDTH-1:0] Register1, Register2, Register3, Register4;
	wire [DATA_WIDTH-1:0] WriteBack;
	wire [ALU_WIDTH-1:0] ALUResult;
	wire [PC_WIDTH-1:0] PCout;
	wire [2:0] Status;
	wire [256:0] characters;
	reg clock;
	wire rotary_event, rotary_press, rotary_right;
	reg [2:0] state;
	wire [2:0] MemVal;
	wire [1:0] MemNum;
	wire MemSet;
	
	Soc_Mips MIPS (
    .clk(clock), 
    .rst(rst), 
	 .MemSet(MemSet),
	 .MemVal(MemVal),
	 .MemNum(MemNum),
    .WriteBack(WriteBack), 
    .ALUResult(ALUResult), 
    .PCout(PCout), 
    .Register1(Register1), 
    .Register2(Register2), 
    .Register3(Register3), 
    .Register4(Register4), 
    .ExceptionCause(Status)
    );
	 
	 regbcd REGBCD	(
    ._state(Status), 
    ._$1(Register1), 
    ._$2(Register2), 
    ._$3(Register3), 
    ._$4(Register4), 
    ._PC(PCout), 
    ._MDR(WriteBack), 
    ._ALUOut(ALUResult), 
    .chars(characters)
    );
	 
	 lcd LCD (
    .clk(clk), 
    .chars(characters), 
    .lcd_rs(lcd_rs), 
    .lcd_rw(lcd_rw), 
    .lcd_e(lcd_e), 
    .lcd_4(lcd_4), 
    .lcd_5(lcd_5), 
    .lcd_6(lcd_6), 
    .lcd_7(lcd_7)
    );

	rotary ROTARY (
    .clk(clk), 
    .rst(rst), 
    .a(a), 
    .b(b), 
    .c(c), 
    .rotary_event(rotary_event), 
    .rotary_left(rotary_right),				//El Rotary me funciona al revés por motivos desconocidos 
    .rotary_press(rotary_press)
    );
	
	always@(posedge clk or posedge rst)
		if(rst)
			begin
				state <= 0;
				clock <= 0;
			end
		else if(rotary_event)
			if(rotary_right && !rotary_press)
				state <= state +1;
			else if(!rotary_right && !rotary_press)
				if( clock == 1 )
					clock <= 0;
				else if ( clock == 0 )
					clock <= 1;
	
	assign MemSet = ( op[3] == 1 )? 1:0; 
	assign MemVal = state;
	assign MemNum = ( op[0] == 1 )? 0:
						 ( op[1] == 1 )? 1:
						 ( op[2] == 1 )? 2:3;
	
	assign led[7:0] = (state == 0)? {3'b000,clock,1'b0,Status}:
							(state == 1)? {3'b001,Register1[4:0]}:
							(state == 2)? {3'b010,Register2[4:0]}:
							(state == 3)? {3'b011,Register3[4:0]}:
							(state == 4)? {3'b100,Register4[4:0]}:
							(state == 5)? {3'b101,PCout[4:0]}:
							(state == 6)? {3'b110,WriteBack[4:0]}:{3'b111,ALUResult[4:0]};
	
endmodule
