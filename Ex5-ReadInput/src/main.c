#include<msp.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    P1DIR &= ~(1<<1);   // Define P1 .1 as an input
    P1REN |= (1<<1);    // Enable resistors on P1 .1
    P1OUT |= (1<<1);    // Enable a pull -up resistor on P1 .1

    P1DIR |= (1<<0);    // Define P1 .0 as an output ;

    while(1){
        if(P1IN & (1<<1))
            P1OUT &= ~(1<<0);
        else
            P1OUT |= (1<<0);
    }
    return 0;

}