#include<avr/io.h>
#include<util/delay.h>

void main()

{

DDRB=0b111111111;

while(1){
PORTB=~0b00000001;
_delay_ms(500);
PORTB=~0b00000010;
_delay_ms(500);
PORTB=~0b00000100;
_delay_ms(500);


}}
