#ifndef LibraryLed_h
#define LibraryLed_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryLed {
	private:
		/**
		* Attributo che rappresenta la porta del led
		*/
		int led;
		/**
		* Attributo che rappresenta lo stato del led
		*/
		boolean state_led;
	public:
		/**
		* Metodo che setta la porta del led 
		* ledPort valore della porta del led
		*/
		void setLedPin(int ledPort);
		/**
		* Metodo che accende il led
		*/
		void powerOn();
		/**
		* Metodo che spegne il led
		*/
		void powerOff();
		/**
		* Metodo che setta il led con lo stato passato
		* stato_led stato in cui il led deve essere settato
		*/
		void setLed(bool stato_led);
		/**
		* Metodo che fa lampeggiare il led con una certa frequenza
		* frequency attributo che rappresenta la frequenza con cui deve lampeggiare
		*/
		void blink(int frequency);
};
#endif