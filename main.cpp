#include "AnalogOut.h"
#include "mbed.h"

AnalogOut sawtooth(A3);

int main()
{
    while (true) {
        for (int i=0 ; i <= 100 ; i++ ) {
            sawtooth=(float)3/(float)3.3*(float)i/(float)100;
            wait_us(85);
        }
    }
}

