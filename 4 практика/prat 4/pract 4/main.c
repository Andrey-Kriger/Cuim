#include <8051.h>
void msec (int x) 
{
while(x-->0) 
{
TH0 = (-10000)>>8; 
TL0=-10000;  
TR0=1;
do;
while(TF0==0); 
TF0=0; 
TR0=0; 
}
}
void main() 
{
int i;
int k;
unsigned char array[9];
TMOD=0x1; 
array[0]=0x0; 
array[1]=0x1;  
array[2]=0x2;
array[3]=0x4;
array[4]=0x8;
array[5]=0x10;
array[6]=0x20;
array[7]=0x40;
array[8]=0x80;
P1=array[0];
msec(2);
	for(i=1;i<1800;i++) 
	{
	if (i == 100){
	P1=array[3]; 
	msec(100);
	}
	else if (i == 200) {
	P1=array[6]; 
	msec(100);
	}
	else if (i == 300) {
	P1=array[4] + array[5]; 
	msec(300);
	}
	else if (i == 600) {
	P1=array[2] + array[7]; 
	msec(500);
	}
	else if (i == 1000) {
	P1=array[1] + array[8]; 
	msec(700);
	}
	else{
	P1=array[0];
	}
}
while(1);
}