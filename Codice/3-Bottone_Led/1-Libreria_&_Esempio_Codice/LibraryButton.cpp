#include "Arduino.h"
#include "LibraryButton.h"


void LibraryButton::setButtonPin(int buttonPort)
{
	button = buttonPort;
	pinMode(button, INPUT);
};

boolean LibraryButton::getStateButton()
{
	return digitalRead(button);
};

boolean LibraryButton::toggle() {
	boolean reading = getStateButton();
	if (reading != lastButtonState) {
		lastDebounceTime = millis();
	}
	if ((millis() - lastDebounceTime) > debounceDelay) {
		if (reading != state_button) {
			state_button = reading;
			if (state_button == HIGH) {
				ledState = !ledState;
			}
		}
	}
	lastButtonState = reading;
	return ledState; 
}
