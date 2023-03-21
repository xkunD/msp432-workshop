//  myGPIOLib.c

#include "myGPIOLib.h"

void pinMode(char pin, char mode){
    switch (mode)
    {
    case OUTPUT:
        P1DIR |= (1<<pin); 
        break;
    case INPUT:
        P1DIR &= ~(1<<pin);
        break;
    case INPUT_PULLUP:
        P1DIR &= ~(1<<pin);
        P1REN |= (1<<pin);
        P1OUT |= (1<<pin);
        break;
    }
}

void digitalWrite(char pin, char value) {
    if (value == HIGH){
        P1OUT |= (1<<pin); // set specified pin high
    }
    else if (value == LOW){
        P1OUT &= ~(1<<pin); // set specified pin low      
    }
}

char digitalRead(char pin){
    return P1IN & (1<<pin);
}