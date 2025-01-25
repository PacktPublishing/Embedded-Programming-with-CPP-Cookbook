#include<8051.h>
//#include<mcs51reg.h> 
void timer0_ISR (void) __interrupt(1)
{
    P0_0 = !P0_0;
}
void main (void) {
    TMOD = 0x02;
    TH0 = 0xa3;
    TL0 = 0x0;
    ET0 = 1;
    TR0 = 1;
    EA = 1;
    while (1); // do nothing
}