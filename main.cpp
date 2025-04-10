#include "DigitalOut.h"
#include "PinNames.h"
#include "mbed.h"

int main()
{
    DigitalOut A(D5,1),B(D3,0),G(D10,0);
    while (true) {
        A=1;
        wait_us(500);
        /*
        G=0;
        A=0;
        B=0;
        wait_us(500);
        A=1;
        wait_us(500);
        B=1;
        wait_us(500);
        A=0;
        wait_us(500);*/
    }
}

