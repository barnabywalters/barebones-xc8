#include <xc.h>
#include <stdbool.h>

#pragma config CPD = OFF
#pragma config BOREN = OFF
#pragma config IESO = OFF
#pragma config DEBUG = OFF
#pragma config FOSC = INTRC_NOCLKOUT
#pragma config FCMEN = OFF
#pragma config MCLRE = OFF
#pragma config WDTE = OFF
#pragma config CP = OFF
#pragma config LVP = OFF
#pragma config PWRTE = OFF

void init(void) {
  // 4MHz clock
	OSCCON = 0b01100000;
	TRISA = 0;
	TRISB = 0;
	TRISC = 0;
}

void main(void) {
	init();
	
	PORTB = 0b11111111;
	PORTA = 0b111111;
	PORTC = 0b11111111;
	
	while (true)
		NOP();
}
