#include "Arduino.h"
#include "LibraryBuzzer.h"

/**
* Metodo che setta la porta del cicalino.
* buzzerPort Attributo che rappresenta la porta che verrà settata.
*/
void LibraryBuzzer::setPinBuzzer(int buzzerPort)
{
	buzzer = buzzerPort;
	pinMode(buzzer, OUTPUT);
};
/**
* Metodo che fa suonare il cicalino.
* frequency Attributo che rappresenta la frequernza con cui il cicalino suona.
*/
void LibraryBuzzer::setTone(int frequency)
{
	tone(buzzer, frequency);
};
/**
* Metodo che spegne il cicalino.
*/
void LibraryBuzzer::powerOff()
{
	noTone(buzzer);
};