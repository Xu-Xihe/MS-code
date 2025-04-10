#include "AnalogIn.h"
#include "BusOut.h"
#include "DigitalOut.h"
#include "mbed.h"

AnalogIn inpt(A6);
BusOut light(D3,D4,D5,D6);

int main()
{
    while (true) {
        if (inpt.read()*(float)3.3<(float)0.6) {
            light=0;
        }
        else if (inpt.read()*(float)3.3<(float)1.2){
            light=1;
        }
        else if (inpt.read()*(float)3.3<(float)1.8){
            light=3;
        }
        else if (inpt.read()*(float)3.3<(float)2.4){
            light=7;
        }
        else {
            light=15;
        }
    }
}

