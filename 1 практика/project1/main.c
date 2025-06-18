#include <8051.h>
void main()
{
	unsigned char i,j; 
	
	unsigned char massiv_tup [11]=
	{
		0xC0, // 0
		0x90, // 9
		0xF9, // 1
		0xA4, // 2
		0xB0, // 3
		0x80, // 8
		0x99, // 4
		0x92, // 5
		0x82, // 6
		0xF8, // 7
		0xFF  // stop
	};
	while(1000){
	P1=massiv_tup [10]; 
	P3 = 0;
	i = 0;
	while (i<10){
		P2 = massiv_tup [i];
		if(P3 == 1) {
			i += 1;
		}
	}
}
	P2=massiv_tup [10];
	while(1);
}

