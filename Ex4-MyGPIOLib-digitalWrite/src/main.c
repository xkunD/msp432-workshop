// // main.c

# include "msp.h"
// include our own library
# include "myGPIOLib.h"

int main(void)
{
    
    WDTCTL = WDTPW | WDTHOLD;

    // // Define P1 .0 (LED ) as an output }
    // P1DIR |= 1 << 0; // Sets bit 0 of P1DIR register to 1
    
    pinMode(0, OUTPUT);

    int i;
    while(1)
    {
        digitalWrite(0, HIGH);
        for(i=10000; i>0; i--);
        // P1OUT ^= 1 << 0;
        digitalWrite(0, LOW);
        for(i=10000; i>0; i--);

        
    }
    return 0;
}




// # include "msp.h"
// // include our own library
// # include "myGPIOLib.h"

// void main(){
//     WDT_A ->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

//     // // Define P1 .0 (LED ) as an output }
//     // P1DIR |= 1 << 0; // Sets bit 0 of P1DIR register to 1
    
//     pinMode(0, OUTPUT);


//     int i;
//     while(1){
//         // digitalWrite(0, LOW);
//         // for(i=100000; i>0; i--);
//         digitalWrite(0, HIGH);
//         digitalWrite(0, LOW);
//         for(i=100000; i>0; i--);
//     }

// }





// int main(void)
// {
    
//     WDTCTL = WDTPW | WDTHOLD;

//     // // Define P1 .0 (LED ) as an output }
//     // P1DIR |= 1 << 0; // Sets bit 0 of P1DIR register to 1
    
//     pinMode(1, OUTPUT);

//     int i;
//     while(1)
//     {
//         P1OUT |= (1 << 1);
//         for(i=10000; i>0; i--);
//         P1OUT &= ~(1 << 1);
//         for(i=10000; i>0; i--);
//     }
//     return 0;
// }