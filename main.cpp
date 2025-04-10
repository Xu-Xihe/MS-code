#include "mbed.h"
#include "mbed_thread.h"

#define time 2000
int main()
{
    DigitalOut A(D5),B(D3),G(D9);
    while (true) {
        G=1;
        thread_sleep_for(time);
        G=0;
        A=0;
        B=0;
        thread_sleep_for(time);
        A=1;
        thread_sleep_for(time);
        B=1;
        thread_sleep_for(time);
        A=0;
        thread_sleep_for(time);
    }
}

