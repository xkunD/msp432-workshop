#include <msp.h>

int main(void){
    WDTCTL = WDTPW | WDTHOLD;

    // Set P1 .1 and P1 .4 as inputs with pull up resistors enabled
    P1DIR &= ~((1<<1)|(1<<4));          // input (0)
    P1REN |= (1<<1)|(1<<4);             // enable resistor
    P1OUT |= (1<<1)|(1<<4);             // pullup resistor

    P2DIR |= (1<<0) | (1<<1) | (1<<2);
    P2OUT &= ~(1<<0) | (1<<1) | (1<<2);

    while(1){
        P2OUT |= (1<<0);
        if(P1IN & (1<<1))
            P2OUT &= ~(1<<1);
        else
            P2OUT |= (1<<1);
        if (P1IN & (1<<4))
            P2OUT &= ~(1<<2);
        else
            P2OUT |= (1<<2);
    }

    return 0;

}
