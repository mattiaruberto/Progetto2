#include "Arduino.h"
#include "LibreriaButton.h"


void LibreriaButton::setButtonPin(int buttonPort)
{
	button = buttonPort;
	pinMode(button, INPUT);
};

boolean LibreriaButton::getStateButton()
{
	state_button = digitalRead(button);
	return state_button;
};

