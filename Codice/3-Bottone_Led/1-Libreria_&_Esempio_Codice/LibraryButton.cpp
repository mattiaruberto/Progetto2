#include "Arduino.h"
#include "LibraryButton.h"

/**
* Metodo che setta la porta del pin del bottone.
* buttonPort Attributo che rappresenta la porta del bottone.
*/
void LibraryButton::setButtonPin(int buttonPort)
{
	button = buttonPort;
	pinMode(button, INPUT);
};
/**
* Metodo che ritorna lo stato del bottone.
*/
boolean LibraryButton::getStateButton()
{
	return digitalRead(button);
};
/**
* Metodo che effettua l'antirimbalzo del bottone.
*/
boolean LibraryButton::toggle() {
	boolean reading = getStateButton();
	if (reading != lastButtonState) {
		lastDebounceTime = millis();
	}
	if ((millis() - lastDebounceTime) > debounceDelay) {
		if (reading != state_button) {
			state_button = reading;
			if (state_button == HIGH) {
				state = !state;
			}
		}
	}
	lastButtonState = reading;
	return state;
}
