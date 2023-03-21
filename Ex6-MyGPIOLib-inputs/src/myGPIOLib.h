// myGPIOLib.h 

#include <msp.h>


#define INPUT_PULLUP 2
#define OUTPUT 1
#define INPUT 0

#define HIGH 1
#define LOW 0

void pinMode(char pin, char mode);
void digitalWrite(char pin, char value);
char digitalRead(char pin);