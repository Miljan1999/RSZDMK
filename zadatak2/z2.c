/**
* @file z2.c
* @brief C fajl
* @author Miljan Eric
* @date 14.05.2021
* @version 1.0
*/
#include "z2.h"

uint8_t brojac=0;

uint8_t brojSamoglasnika(uint8_t rec[])
{
uint8_t duzina=0;

duzina=strlen(rec);

for(uint8_t i=0; i<duzina; i++)

	{
	if(rec[i]=='a' || rec[i]=='e' || rec[i]=='i' || rec[i]=='o' || rec[i]=='u')
	{
		brojac++;

	}

	}
return brojac;
}

