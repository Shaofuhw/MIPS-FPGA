`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:25:02 01/04/2016
// Design Name:   Lab3
// Module Name:   C:/Users/Shao.Surface/Documents/Digital/Lab3v6/Lab3TB.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Lab3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Lab3TB;

	// Inputs
	reg clk;
	reg rst;
	reg a;
	reg b;
	reg c;

	// Outputs
	wire lcd_e;
	wire lcd_rs;
	wire lcd_rw;
	wire lcd_4;
	wire lcd_5;
	wire lcd_6;
	wire lcd_7;
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	Lab3 uut (
		.clk(clk), 
		.rst(rst), 
		.a(a), 
		.b(b), 
		.c(c), 
		.lcd_e(lcd_e), 
		.lcd_rs(lcd_rs), 
		.lcd_rw(lcd_rw), 
		.lcd_4(lcd_4), 
		.lcd_5(lcd_5), 
		.lcd_6(lcd_6), 
		.lcd_7(lcd_7), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		a = 0;
		b = 0;
		c = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

