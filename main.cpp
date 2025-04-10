/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     1000ms


int main()
{
    DigitalOut red(D5),green(D6);
    while (true) {
        red=1;
        green=0;
        ThisThread::sleep_for(BLINKING_RATE);
        red=0;
        green=1;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}