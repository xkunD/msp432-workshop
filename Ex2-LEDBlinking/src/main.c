# include "msp.h"

void main(){
    WDT_A ->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    // Define P1 .0 (LED ) as an output }
    P1DIR |= 1 << 0; // Sets bit 0 of P1DIR register to 1
    
    // Write a 1 to P1 .0. Turns LED on.
    P1OUT |= 1 << 0; 

    int i;
    while (1){
        P1OUT ^= 1 << 0;
        for(i=1000000; i>0; i--);
    }

}