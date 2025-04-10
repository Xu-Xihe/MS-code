/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "DigitalIn.h"
#include "PinNames.h"
#include "PwmOut.h"
#include "mbed.h"
#include "mbed_power_mgmt.h"
#include "mbed_thread.h"

//Pay attention! The two input pin on the 74HC4066 is not the same. Y for power support and E for control.
//Each time E is on, the Z will continuesly open until Y is down.

int main() {
  DigitalIn button(D4);
  PwmOut myout(D5);
  myout.write(0.5f);
  myout.period_ms(2);
  while (1) {
    if (button == 1) {
      myout.period_ms(5);
      thread_sleep_for(5); //200Hz
    } else {
      myout.period_ms(2);
      thread_sleep_for(2); //500Hz
    }
  }
}