#include "Arduino.h"
#include "LibraryPotentiometer.h"

/**
* Metood che ritorna il valore del potenziometro mappato nel range desiderato.
* valuePotentiometer  attributo che rappresenta il valore del potenziometro effettivo.
* valueMinPotentiometer  attributo che rappresenta il valore minimo effetivo del potenziometro.
* valueMaxPotentiometer  attributo che rappresenta il valore massimo effetivo del potenziometro.
* valueMin  attributo che rappresenta il valore minimo desiderato.
* ValueMax  attributo che rappresenta il valore massimo desiderato.
*/

int LibraryPotentiometer::getMappedValue(int valuePotentiometer, int valueMinPotentiometer, int valueMaxPotentiometer, int valueMin, int valueMax){
	int valorePotenziometro = map(valuePotentiometer, valueMinPotentiometer, valueMaxPotentiometer, valueMin, valueMax);
	return valorePotenziometro;
}
/**
* Metodo che ritorna il valore effettivo del potenziometro
* port attributo che rappresenta la porta del potenziometro.
*/
int LibraryPotentiometer::getValue(int port) {
	int risultato = analogRead(port); //P2
	return risultato;
}