#include "Arduino.h"
#include "LibreriaFF.h"


void LibreriaFF::setLedPin(int myRedPin, int myGreenPin, int myBluePin)
{
	pinRed = myRedPin;
	pinGreen = myGreenPin;
	pinBlue = myBluePin;
};

void LibreriaFF::setColor(int red, int green, int blue)
{
	red = 255 - red;
	green = 255 - green;
	blue = 255 - blue;

	analogWrite(pinRed, red);
	analogWrite(pinGreen, green);
	analogWrite(pinBlue, blue);
};

void LibreriaFF::setRed(int red)
{
	red = 255 - red;
	analogWrite(pinRed, red);
};

void LibreriaFF::setGreen(int green)
{
	green = 255 - green;
	analogWrite(pinGreen, green);
};

void LibreriaFF::setBlue(int blue)
{
	blue = 255 - blue;
	analogWrite(pinBlue, blue);
};