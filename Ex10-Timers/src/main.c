# include<msp.h>

void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    P1SEL0 &= ~0x03;
    P1SEL1 &= ~0x03;

    P1DIR |= 0x01;
    P1OUT |= ~0x01;

    TA0CTL |= (1 << 8); // Select ACLK as clock source
    TA0CTL &= ~(1 << 9);  

    TA0CTL |= (1 << 1); // Enable interrupt
    NVIC ->ISER [0] |= 1<<9;  

    TA0CTL &= ~(1 << 4); // Set to use continous counting mode
    TA0CTL |= (1 << 5); 

    while(1){
        ;
    }
}

// Interrupt handler for Port 1
void TA0_N_IRQHandler(void){
    TA0CTL &= ~0x01; // Clear interrupt flag
    P1OUT ^= 0x01; // Toggle LED
}