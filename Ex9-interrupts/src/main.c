# include <msp.h>

void main(void){

    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    P1SEL0 &= ~0x03;
    P1SEL1 &= ~0x03;

    P1DIR |= 0x01;
    P1OUT |= ~0x01;

    P1DIR &= ~0x02;
    P1REN |= 0x02;
    P1OUT |= 0x02;
    
    P1IES |= 0x02;  // Choose high to low transition to trigger interrupt
    P1IE |= 0x02;

    NVIC->ISER[1] |= 1 << (3);

    while(1){
        ;
    }
}

// Interrupt handler for Port 1
void PORT1_IRQHandler(void){
    P1IFG &= ~0x02; // Clear interrupt flag
    P1OUT ^= 0x01; // Toggle LED
}