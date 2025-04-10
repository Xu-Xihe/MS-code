/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "PinNames.h"
#include "PwmOut.h"
#include "mbed.h"


// Blinking rate in milliseconds
#define Perid     500ms


int main()
{
    PwmOut myout(D5);
    myout.write(0.5f);
    myout.period_ms(1);
    while (1) {
    }
}