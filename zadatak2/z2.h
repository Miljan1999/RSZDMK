/**
* @file z2.h
* @brief H fajl
* @author Miljan Eric
* @date 14.05.2021
* @version 1.0
*/

#ifndef Z2_H_
#define Z2_H_

//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>
#include <string.h>

/**
* Funkcija koja broji samoglasnike u rijeci
* @param rec - Rec u kojoj brojimo samoglasnike
* @return s - koja je tipa uint8_t
*/

uint8_t brojSamoglasnika(uint8_t rec[]);


#endif /* Z2_H_ */
