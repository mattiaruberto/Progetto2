#ifndef LibraryPotentiometer_h
#define LibraryPotentiometer_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryPotentiometer {
	public:
		/**
		* Metood che ritorna il valore del potenziometro mappato nel range desiderato.
		* valuePotentiometer  attributo che rappresenta il valore del potenziometro effettivo.
		* valueMinPotentiometer  attributo che rappresenta il valore minimo effetivo del potenziometro.
		* valueMaxPotentiometer  attributo che rappresenta il valore massimo effetivo del potenziometro.
		* valueMin  attributo che rappresenta il valore minimo desiderato.
		* ValueMax  attributo che rappresenta il valore massimo desiderato.
		*/
		int getMappedValue(int valuePotentiometer, int valueMinPotentiometer, int valueMaxPotentiometer, int valueMin, int valueMax);
		/**
		* Metodo che ritorna il valore effettivo del potenziometro
		* port attributo che rappresenta la porta del potenziometro.
		*/
		int getValue(int port);
};

#endif