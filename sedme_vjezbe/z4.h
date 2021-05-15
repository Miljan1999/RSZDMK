/**
* @file z4.h
* @brief H fajl pomocnih funkcija
* @author Miljan Eric
* @date 14.05.2021
* @version 1.0
*/

#ifndef Z4_H_
#define Z4_H_

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
* Funkcija za provjeru imena
* @param ime - Korisnicko ime
* @return p - uint8_t pomocna povratna vrijednost
*/
uint8_t proveraImena(uint8_t ime[]);

/**
* Funkcija za provjeru lozinku
* @param lozinka -lozinka za login
* @return uint8_t pomocna povratna vrijednost
*/

uint8_t proveraLozinke(uint8_t lozinka[]);

/**
* Funkcija za provjeru poklapanja lozinke i username
* @param p - korisnicko ime
* @param k - korisnicko lozinka
* @reuturn nema povratnu vrijednost
*/

void provera(uint8_t p, uint8_t k, uint8_t ime[]);


#endif /* Z4_H_ */
