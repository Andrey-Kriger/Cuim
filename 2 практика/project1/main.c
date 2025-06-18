#include <8051.h> 
void main() 
{
int i;
char xdata *ptr; 
char test, nabor;
nabor = 0x0AA; 
P1 = 0x00;
ptr = (char xdata *) 0x800;  
for(i=0; i<8192;i++) 
{
*ptr=nabor; 
test=*ptr; 
if(test!=nabor)
{
P1 = 0x01; 
}
ptr++;
P1 = 0x00;
}
}

