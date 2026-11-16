#include <reg51.h>
void delay();
void main() {
	/*while(1) {
		P0 = 0xFF;
		delay();
		P0 = 0x00;
		delay();
	}*/
	
	/*
	 int i,j;
	while(1) {
		for(i=0; i<256; i++) {
			P1 = i;
			delay();
		}
		for(j=255; j>=0; j--) {
			P1 = j;
			delay();
		}
	}
	*/
	int i;
	while(1) {
		for(i=0; i<256;  i++) {
			P1 = i;
			delay();
		}
		P1 = 0;
		delay();
	}
}

void delay() {
	TMOD = 0x01;
	TL0 = 0x01;
	TH0 = 0xFF;
	TR0 = 1;
	while(TF0 == 0);
	TR0 = 0;
	TF0 = 0;
}
