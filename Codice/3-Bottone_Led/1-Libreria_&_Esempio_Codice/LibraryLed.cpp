#include "Arduino.h"
#include "LibraryLed.h"

/**
* Metodo che setta la porta del led
* ledPort valore della porta del led
*/
void LibraryLed::setLedPin(int ledPort)
{
	led = ledPort;
	pinMode(led, OUTPUT);
};
/**
* Metodo che accende il led
*/
void LibraryLed::powerOn()
{
	state_led = HIGH;
	digitalWrite(led, state_led);
};
/**
* Metodo che spegne il led
*/
void LibraryLed::powerOff()
{
	state_led = LOW;
	digitalWrite(led, state_led);
};
/**
* Metodo che setta il led con lo stato passato
* stato_led stato in cui il led deve essere settato
*/
void LibraryLed::setLed(bool stato_led)
{
	digitalWrite(led, stato_led);
};
/**
* Metodo che fa lampeggiare il led con una certa frequenza
* frequency attributo che rappresenta la frequenza con cui deve lampeggiare
*/
void LibraryLed::blink(int frequency)
{
	state_led = !state_led;
	digitalWrite(led, state_led);
	delay(frequency);
};
