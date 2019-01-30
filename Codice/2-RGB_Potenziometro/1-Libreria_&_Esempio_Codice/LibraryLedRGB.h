#ifndef LibraryLedRGB_h
#define LibraryLedRGB_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryLedRGB {
	private:
		int pinRed;
		int pinGreen;
		int pinBlue;
	public:
		void setLedPin(int myRedPin, int myGreenPin, int myBluePin);
		void setColor(int red, int green, int blue);
		void setRed(int red);
		void setGreen(int green);
		void setBlue(int blue);
};

#endif