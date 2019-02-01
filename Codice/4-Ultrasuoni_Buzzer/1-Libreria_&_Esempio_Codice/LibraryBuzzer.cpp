#include "Arduino.h"
#include "LibraryBuzzer.h"


void LibraryBuzzer::setPinBuzzer(int buzzerPort)
{
	buzzer = buzzerPort;
	pinMode(buzzer, OUTPUT);
};

void LibraryBuzzer::setTone(int frequency)
{
	tone(buzzer, frequency);
};

void LibraryBuzzer::powerOff()
{
	noTone(buzzer);
};