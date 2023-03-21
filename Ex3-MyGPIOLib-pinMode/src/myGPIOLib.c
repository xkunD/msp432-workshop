//  myGPIOLib.c

#include "myGPIOLib.h"

void pinMode(char pin, char mode){
    if (mode == OUTPUT){
        P1DIR |= (1<<pin);      //set to 1
    }
    else if(mode == INPUT){
        P1DIR &= ~(1<<pin);     // set to 0
    }
}