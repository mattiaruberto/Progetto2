#ifndef LibraryUltraSound_h
#define LibraryUltraSound_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryUltraSound {
	private:
		/**
		* Attributo che rappresenta la porta del pin trig del sensore ultra suoni.
		*/
		int pin_trig = 1;
		/**
		* Attributo che rappresenta la porta del pin echo del sensore ultra suoni.
		*/
		int pin_echo = 2;
	public:
		/**
		* Metodo che setta le porte dei due pin del sensore ultrasuoni.
		* pinTrigPort Attributo che rappresenta la porta del pin trig del sensore ultra suoni.
		* pinEchoPort Attributo che rappresenta la porta del pin echo del sensore ultra suoni.
		*/
		void setUltraSoundPin(int pinTrigPort, int pinEchoPort);
		/**
		* Metodo che ritorna la distanza misurata dal sensore ultra suoni in cm.
		*/
		int getDistance();
};
#endif