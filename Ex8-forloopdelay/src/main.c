# include <msp.h>

void main(void){

    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    P1DIR |= (1<<0);
    P1OUT |= (1<<0);

    CS ->KEY = CS_KEY_VAL ; // Unlocks register for write access
    CS -> CTL0 = CS_CTL0_DCORSEL_0 ;
    CS ->KEY = 0;

    int i;
    while(1){
        P1OUT ^= 1<<0;
        for(i=1000000; i>0; i--);
    }

    //return 0;

}
