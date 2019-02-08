#ifndef LibraryBuzzer_h
#define LibraryBuzzer_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryBuzzer {
	private:
		/**
		* Attributo che rappresenta la porta del cicalino.
		*/
		int buzzer = 0;
	public:
		/**
		* Metodo che setta la porta del cicalino.
		* buzzerPort Attributo che rappresenta la porta che verrà settata.
		*/
		void setPinBuzzer(int buzzerPort);
		/**
		* Metodo che fa suonare il cicalino.
		* frequency Attributo che rappresenta la frequernza con cui il cicalino suona.
		*/
		void setTone(int frequency);
		/**
		* Metodo che spegne il cicalino.
		*/
		void powerOff();
};
#endif