#include "Arduino.h"
#include "LibreriaFF.h"

// espletiamo i sorgenti delle procedure
void setColorRed(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, LOW);
	digitalWrite(greenPin, HIGH);
	digitalWrite(bluePin, HIGH);
}
void setColorBlue(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, LOW);
	digitalWrite(greenPin, HIGH);
	digitalWrite(bluePin, LOW);
}
void setColorGreen(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, HIGH);
	digitalWrite(greenPin, LOW);
	digitalWrite(bluePin, HIGH);
}
void setColorYellow(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, LOW);
	digitalWrite(greenPin, LOW);
	digitalWrite(bluePin, HIGH);
}
void setColorViolet(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, LOW);
	digitalWrite(greenPin, HIGH);
	digitalWrite(bluePin, LOW);
}
void setColorLightBlue(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, HIGH);
	digitalWrite(greenPin, HIGH);
	digitalWrite(bluePin, LOW);
}
void turnOnLedRGB(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, LOW);
	digitalWrite(greenPin, LOW);
	digitalWrite(bluePin, LOW);
}
void turnOffLedRGB(int pinRed, int pinGreen, int pinBlue) {
	digitalWrite(redPin, HIGH);
	digitalWrite(greenPin, HIGH);
	digitalWrite(bluePin, HIGH);
}