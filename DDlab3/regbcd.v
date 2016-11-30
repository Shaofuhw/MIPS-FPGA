`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:00 11/13/2013 
// Design Name: 
// Module Name:    regbcd 
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
 
module regbcd(
    input [7:0] _state, _$1, _$2, _$3, _$4, _PC, _MDR, _ALUOut,
    output [256:0] chars
    );

wire [3:0] u_state, u_$1, u_$2, u_$3, u_$4, u_PC, u_MDR, u_ALUOut, t_state, t_$1, t_$2, t_$3, t_$4, t_PC, t_MDR, t_ALUOut; 

function [7:0] hexval;
  input [3:0] val;
  begin
     hexval = (val < 4'b1010) ? {4'b0011,val} : {4'b0100,(val-4'b1001)};
  end
endfunction

binbcd8 U0 (
    .in(_state), 
    .units(u_state), 
    .tens(t_state) 
    );
binbcd8 U1 (
    .in(_$1), 
    .units(u_$1), 
    .tens(t_$1)
    );
binbcd8 U2 (
    .in(_$2), 
    .units(u_$2), 
    .tens(t_$2) 
    );
binbcd8 U3 (
    .in(_$3), 
    .units(u_$3), 
    .tens(t_$3) 
    );
binbcd8 U4 (
    .in(_$4), 
    .units(u_$4), 
    .tens(t_$4) 
    );
/*
binbcd8 U5 (
    .in(_PC), 
    .units(u_PC), 
    .tens(t_PC) 
    );
binbcd8 U6 (
    .in(_MDR), 
    .units(u_MDR), 
    .tens(t_MDR) 
    );
binbcd8 U7 (
    .in(_ALUOut), 
    .units(u_ALUOut), 
    .tens(t_ALUOut) 
    );        
*/    
	assign chars[255:128] = "ST$1$2$3$4PCMDAO";
	assign chars[127:120]={4'b0011,t_state};
	assign chars[119:112]={4'b0011,u_state};
	assign chars[111:104]={4'b0011,t_$1};
	assign chars[103:96]={4'b0011,u_$1};
	assign chars[95:88]={4'b0011,t_$2};
	assign chars[87:80]={4'b0011,u_$2};
	assign chars[79:72]={4'b0011,t_$3};
	assign chars[71:64]={4'b0011,u_$3};
	assign chars[63:56]={4'b0011,t_$4};
	assign chars[55:48]={4'b0011,u_$4};
	assign chars[47:40]=hexval(_PC[7:4]); //t_PC
	assign chars[39:32]=hexval(_PC[3:0]); //u_PC
	assign chars[31:24]=hexval(_MDR[7:4]);
	assign chars[23:16]=hexval(_MDR[3:0]);
	assign chars[15:8]=hexval(_ALUOut[7:4]);
	assign chars[7:0]=hexval(_ALUOut[3:0]);

endmodule


   