#include "Arduino.h"
#include "LibraryLedRGB.h"

/**
* Metodo che setta le porte dei pin del led RGB.
* myRedPin Attributo che rappresenta la porta del pin rosso del led RGB.
* myGreenPin Attributo che rappresenta la porta del pin verde del led RGB.
* myBluePin Attributo che rappresenta la porta del pin blu del led RGB.
*/
void LibraryLedRGB::setLedPin(int myRedPin, int myGreenPin, int myBluePin)
{
	pinRed = myRedPin;
	pinGreen = myGreenPin;
	pinBlue = myBluePin;
};
/**
* Metodo che setta i tre colori del led RGB
* red Attributo che rappresenta la porta del pin rosso del led RGB.
* green Attributo che rappresenta la porta del pin verde del led RGB.
* blue Attributo che rappresenta la porta del pin blu del led RGB.
*/
void LibraryLedRGB::setColor(int red, int green, int blue)
{
	red = 255 - red;
	green = 255 - green;
	blue = 255 - blue;

	analogWrite(pinRed, red);
	analogWrite(pinGreen, green);
	analogWrite(pinBlue, blue);
};
/**
* Metodo che setta il colore rosso del led RGB.
* red Attributo che rappresenta la porta del pin rosso del led RGB.
*/
void LibraryLedRGB::setRed(int red)
{
	red = 255 - red;
	analogWrite(pinRed, red);
};
/**
* Metodo che setta il colore verde del led RGB.
* red Attributo che rappresenta la porta del pin verde del led RGB.
*/
void LibraryLedRGB::setGreen(int green)
{
	green = 255 - green;
	analogWrite(pinGreen, green);
};
/**
* Metodo che setta il colore blu del led RGB.
* red Attributo che rappresenta la porta del pin blu del led RGB.
*/
void LibraryLedRGB::setBlue(int blue)
{
	blue = 255 - blue;
	analogWrite(pinBlue, blue);
};