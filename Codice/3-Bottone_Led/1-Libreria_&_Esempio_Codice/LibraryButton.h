#ifndef LibraryButton_h
#define LibraryButton_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryButton {
	private:
		/**
		* Attributo che rappresenta la porta del bottone.
		*/
		int button;
		/**
		* Attributo che rappresenta lo stato del bottone.
		*/
		boolean state_button;
		/**
		* Attributo che rappresenta lo stato del bottone precedente.
		*/
		boolean lastButtonState;
		/**
		* Attributo che memorizzano i millisecondi quando il bottone viene premuto.
		*/
		unsigned long lastDebounceTime = 0;
		/**
		* Attributo che rappresenta il delay per effettuare il toggle.
		*/
		unsigned long debounceDelay = 50;
		/**
		* Attributo che rappresenta lo stato che ritorna il toeggle.
		*/
		boolean state = HIGH;
	public:
		/**
		* Metodo che setta la porta del pin del bottone.
		* buttonPort Attributo che rappresenta la porta del bottone.
		*/
		void setButtonPin(int buttonPort);
		/**
		* Metodo che ritorna lo stato del bottone.
		*/
		boolean getStateButton();
		/**
		* Metodo che effettua l'antirimbalzo del bottone.
		*/
		boolean toggle();
};
#endif