#include "Arduino.h"
#include "LibraryPotentiometer.h"

int LibraryPotentiometer::setRange(int valuePotentiometer, int valueMinPotentiometer, int valueMaxPotentiometer, int valueMin, int valueMax) {
	int valorePotenziometro = map(valuePotentiometer, valueMinPotentiometer, valueMaxPotentiometer, valueMin, valueMax);
	return valorePotenziometro;
}

int LibraryPotentiometer::getValue(int port) {
	int risultato = analogRead(port); //P2
	return risultato;
}