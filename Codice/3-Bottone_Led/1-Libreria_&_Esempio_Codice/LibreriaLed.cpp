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
	if (stato_Bot != lastButtonState) {
		lastDebounceTime = millis();
	}
	if ((millis() - lastDebounceTime) > debounceDelay) {
		if (stato_Bot != buttonState) {
			buttonState = reading;
			if (buttonState == HIGH) {
				ledState = !ledState;
			}
		}
	}
	digitalWrite(ledPin, ledState);
	lastButtonState = reading;
}