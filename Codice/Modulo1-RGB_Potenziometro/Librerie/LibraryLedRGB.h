#ifndef LibraryLedRGB_h
#define LibraryLedRGB_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryLedRGB {
	private:
		/**
		* Attributo che rappresenta la porta del pin rosso del led RGB.
		*/
		int pinRed;
		/**
		* Attributo che rappresenta la porta del pin verde del led RGB.
		*/
		int pinGreen;
		/**
		* Attributo che rappresenta la porta del pin blu del led RGB.
		*/
		int pinBlue;
	public:
		/**
		* Metodo che setta le porte dei pin del led RGB.
		* myRedPin Attributo che rappresenta la porta del pin rosso del led RGB.
		* myGreenPin Attributo che rappresenta la porta del pin verde del led RGB.
		* myBluePin Attributo che rappresenta la porta del pin blu del led RGB.
		*/
		void setLedPin(int myRedPin, int myGreenPin, int myBluePin);
		/**
		* Metodo che setta i tre colori del led RGB
		* red Attributo che rappresenta la porta del pin rosso del led RGB.
		* green Attributo che rappresenta la porta del pin verde del led RGB.
		* blue Attributo che rappresenta la porta del pin blu del led RGB.
		*/
		void setColor(int red, int green, int blue);
		/**
		* Metodo che setta il colore rosso del led RGB.
		* red Attributo che rappresenta la porta del pin rosso del led RGB.
		*/
		void setRed(int red);
		/**
		* Metodo che setta il colore verde del led RGB.
		* red Attributo che rappresenta la porta del pin verde del led RGB.
		*/
		void setGreen(int green);
		/**
		* Metodo che setta il colore blu del led RGB.
		* red Attributo che rappresenta la porta del pin blu del led RGB.
		*/
		void setBlue(int blue);
};

#endif