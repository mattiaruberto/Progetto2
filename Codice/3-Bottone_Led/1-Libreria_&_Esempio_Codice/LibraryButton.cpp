#include "Arduino.h"
#include "LibraryButton.h"


void LibraryButton::setButtonPin(int buttonPort)
{
	button = buttonPort;
	pinMode(button, INPUT);
};

boolean LibraryButton::getStateButton()
{
	state_button = digitalRead(button);
	return state_button;
};

