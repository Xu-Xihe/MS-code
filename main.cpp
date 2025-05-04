#include "mbed.h" 
SPISlave ser_port(D11, D12, D13, A3);   // mosi, miso, sclk, ssel 
DigitalOut red_led(D3); //red led 
DigitalOut green_led(D4); //green led 
DigitalIn switch_ip1(D5); 
DigitalIn switch_ip2(D6); 
char switch_word ;	//word we will send
char recd_val; 		//value from master

int main() {
    while (1){
//Set up the word to be sent, by testing switch inputs
switch_word=0xA0;		//set up a recognisable output pattern
if(switch_ip1==1) 
    switch_word=switch_word|0x01; //OR in lsb 
if(switch_ip2==1) 
    	    switch_word=switch_word|0x02; //OR in next lsb 

    if(ser_port.receive()) { //test if data has been transmitted 
recd_val = ser_port.read(); //read byte from master      ser_port.reply(switch_word); //make this the next reply 
} 

//set leds according to incoming word from slave
red_led=0;		//preset both to 0
green_led=0; 
recd_val=recd_val&0x03; //AND out unwanted bits
if(recd_val==1) 
    red_led=1;
if(recd_val==2) 
    green_led=1;
if (recd_val==3){ 
    red_led=1; 
    green_led=1; } 
    } 
} 