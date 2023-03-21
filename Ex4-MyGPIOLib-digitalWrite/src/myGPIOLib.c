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

void digitalWrite(char pin, char value) {
    if (value == HIGH){
        P1OUT |= (1 << pin); // set specified pin high
    }
    else if (value == LOW){
        P1OUT &= ~(1 << pin); // set specified pin low      
    }
}