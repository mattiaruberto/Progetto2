#include "Arduino.h"
#include "LibraryLed.h"


void LibraryLed::setLedPin(int ledPort)
{
	led = ledPort;
	pinMode(led, OUTPUT);
};

void LibraryLed::powerOn()
{
	state_led = HIGH;
	digitalWrite(led, state_led);
};

void LibraryLed::powerOff()
{
	state_led = LOW;
	digitalWrite(led, state_led);
};

void LibraryLed::setLed(bool stato_led)
{
	digitalWrite(led, stato_led);
};

void LibraryLed::blink(int frequency)
{
	state_led = !state_led;
	digitalWrite(led, state_led);
	delay(frequency);
};

boolean LibraryLed::toggle(bool stato_Bot) {
	int reading = stato_Bot;
	if (reading != lastButtonState) {
		lastDebounceTime = millis();
	}
	if ((millis() - lastDebounceTime) > debounceDelay) {
		if (reading != buttonState) {
			buttonState = reading;
			if (buttonState == HIGH) {
				state_led = !state_led;
			}
		}
	}
	//digitalWrite(led, state_led);
	lastButtonState = reading;
	return state_led;
}