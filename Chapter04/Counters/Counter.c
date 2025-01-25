#include<8051.h>
//#include<mcs51reg.h> 

volatile int counter = 0;

void timer1_ISR (void) __interrupt(3)
{
    counter++;
}

void main (void) {
    TMOD = 0x60;
    TH1 = 255; //should be 255, not 254, virtual key on will ++, off not change, if use 254, the counter should x2
    TL1 = 255; //should be 255, not 254, virtual key on will ++, off not change, if use 254, the counter should x2
    TR1 = 1;
    ET1 = 1;
    EA = 1;
    while (1); // do nothing
}