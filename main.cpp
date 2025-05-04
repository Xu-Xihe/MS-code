#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE     1000ms

int main()
{
    DigitalOut red(D5),green(D6); //select D5 to be red LED and D6 to be the green one
    while (true) {
        red=1; //set the red one on and the green one off
        green=0;
        ThisThread::sleep_for(BLINKING_RATE); //wait for the next round
        red=0; //visa versa
        green=1;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}