#ifndef LibreriaPotenziometroRGB_h
#define LibreriaPotenziometroRGB_h

// definiamo la libreria e includiamo la libreria Arduino.h
#include "Arduino.h"

class LPRGB {
	private:
		int pinRed;
		int pinGreen;
		int pinBlue;

	public:

		// definiamo le procedure per il led RGB
		void setLedPin(int myRedPin, int myGreenPin, int myBluePin);

		// definiamo le procedure per il led RGB
		void setColor(int red, int green, int blue);

		void setRed(int red);
		 
		void setGreen(int green);

	    void setBlue(int blue);

};

#endif

