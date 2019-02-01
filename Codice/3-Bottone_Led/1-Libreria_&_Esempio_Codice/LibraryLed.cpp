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
