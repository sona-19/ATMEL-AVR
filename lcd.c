#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>

void main()
{ DDRA=0b1111111;
int i,k=16;
  lcd_init();
  
  
   while(1)
   {


   dis_cmd(0x80);
   dis_data('L'); 
   dis_cmd(0x81);
for(i=1; i<16; i++)
{
  
  dis_data(' ');
  dis_data('-');
  _delay_ms(50);
  }

}
}
