#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	unsigned int count = 0;
	DDRD = 0xFF;     //d is output port
    PORTD = 0X00;         // all the traffic is off at first
    while (1) 
    {
		PORTD = (1 << PIND0);
		_delay_ms(5000);
		PORTD += ~(1 << PIND0);

		PORTD = (1 << PIND1);
		_delay_ms(2500);
		PORTD += ~(1 << PIND1);
		//_delay_ms(2500);

			
		PORTD = (1 << PIND2);
		_delay_ms(5000);		
		PORTD += ~ (1<< PIND2);

		
    }
}

