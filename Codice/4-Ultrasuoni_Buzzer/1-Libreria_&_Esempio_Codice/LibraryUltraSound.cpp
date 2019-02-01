#include "Arduino.h"
#include "LibraryUltraSound.h"


void LibraryUltraSound::setUltraSoundPin(int pinTrigPort, int pinEchoPort)
{
	pin_trig = pinTrigPort;
	pin_echo = pinEchoPort;
	pinMode(pin_trig, OUTPUT);
	pinMode(pin_echo, INPUT);
};

int LibraryUltraSound::getDistance()
{
	digitalWrite(pin_trig, LOW);
	digitalWrite(pin_trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(pin_trig, LOW);
	int dist = (0.34 * pulseIn(pin_echo, HIGH)) / 2;
	int distance = dist / 10;
	return distance;
};

