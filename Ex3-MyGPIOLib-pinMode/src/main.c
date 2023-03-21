# include "msp.h"
// include our own library
# include "myGPIOLib.h"

void main(){
    WDT_A ->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    // // Define P1 .0 (LED ) as an output }
    // P1DIR |= 1 << 0; // Sets bit 0 of P1DIR register to 1
    
    pinMode(0, OUTPUT);


    int i;
    while (1){
        P1OUT ^= 1 << 0;
        for(i=1000000; i>0; i--);
    }

}