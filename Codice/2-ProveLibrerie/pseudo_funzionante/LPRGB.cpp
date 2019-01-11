#include "LPRGB.h"

//int myRedPin, int myGreenPin, int myBluePin

void LPRGB::setLedPin(int myRedPin, int myGreenPin, int myBluePin)
{
	pinRed = myRedPin;
	pinGreen = myGreenPin;
	pinBlue = myBluePin;
};

void LPRGB::setColor(int red, int green, int blue)
{
	#ifdef COMMON_ANODE
	red = 255 - red;
	green = 255 - green;
	blue = 255 - blue;
	
	#endif
	analogWrite(pinRed, red);
	analogWrite(pinGreen, green);
	analogWrite(pinBlue, blue);
};

void LPRGB::setRed(int red)
{
	#ifdef COMMON_ANODE
	red = 255 - red;

	#endif
	analogWrite(pinRed, red);
};

void LPRGB::setGreen(int green)
{
#ifdef COMMON_ANODE
	green = 255 - green;

#endif
	analogWrite(pinGreen, green);
};

void LPRGB::setBlue(int blue)
{
#ifdef COMMON_ANODE
	blue = 255 - blue;

#endif
	analogWrite(pinBlue, blue);
};