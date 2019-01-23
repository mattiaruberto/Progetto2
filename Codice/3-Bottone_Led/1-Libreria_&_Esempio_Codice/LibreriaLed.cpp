#include "Arduino.h"
#include "LibreriaLed.h"


void LibreriaLed::setLedPin(int ledPort)
{
	led = ledPort;
	pinMode(led, OUTPUT);
};

void LibreriaLed::powerOn()
{
	state_led = HIGH;
	digitalWrite(led, state_led);
};

void LibreriaLed::powerOff()
{
	state_led = LOW;
	digitalWrite(led, state_led);
};

void LibreriaLed::setLed(bool stato_led)
{
	digitalWrite(led, stato_led);
};

void LibreriaLed::blink(int frequency)
{
	state_led = !state_led;
	digitalWrite(led, state_led);
	delay(frequency);
};

void LibreriaLed::toggle(bool stato_Bot) {
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
	digitalWrite(led, state_led);
	lastButtonState = reading;
}