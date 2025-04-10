#include "AnalogOut.h"
#include "mbed.h"

AnalogOut outpin(A3);

const float opt[]={0.5,1,2,2.5};

int main()
{
    int i=0;
    while (true) {
        outpin=opt[i]/(float)3.3;
        ThisThread::sleep_for(2s);
        i++;
        i%=4;
    }
}