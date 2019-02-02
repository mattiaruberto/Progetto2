#ifndef LibraryPotentiometer_h
#define LibraryPotentiometer_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryPotentiometer {
	public:
		int getMappedValue(int valuePotentiometer, int valueMinPotentiometer, int valueMaxPotentiometer, int valueMin, int valueMax);
		int getValue(int port);
};

#endif