#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>


void main()
{

  DDRA=0b1111111;
  lcd_init();

  while(1)
  {
     for(int i=0; i<16; i++)
	 {
	   dis_cmd(0x80+i);
	   dis_data(' ');
	   dis_string("sona");
	   _delay_ms(50);

     }


/*	  for(int i=0; i<16; i++)
	 {
	   dis_cmd(0x80+i);
	   dis_data(' ');
	   dis_string("sona");
	   _delay_ms(50);

     }
*/



	}

	}
