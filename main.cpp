#include "BusOut.h"
#include "mbed.h"
#include "mbed_thread.h"

BusOut dig(D11,D3,D4,D5,D6,D9,D10);
#define wait 1000

const int opt[]={119,68,107,110,92,62,63,100,127,126,93,59,19,121,0};
int main()
{
    int i=0;
    while (true) {
        dig=opt[i];
        thread_sleep_for(wait);
        i++;
        i%=15;
    }
}

