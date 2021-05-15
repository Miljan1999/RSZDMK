/**
* @file main.c
* @brief Program koji broji samoglasnike
* @author Miljan Eric
* @date 14.05.2021
* @version 1.0
*/
#include "z2.h"

int main()
{
	usartInit(9600);
	uint8_t b;
	uint8_t rec[64];
	uint8_t str[64];
	while(1)
	{
	usartPutString_P(PSTR("Unesite rijedadac"));
	while(!usartAvailable());
	_delay_ms(100);
	usartGetString(rec);
	usartPutString_P(PSTR("Broj samoglasnika u tekstu je: "));
	sprintf(str,"%d\0", brojSamoglasnika(rec));
			usartPutString(str);
			usartPutString_P(PSTR("\r\n"));
	}
return 0;
}
