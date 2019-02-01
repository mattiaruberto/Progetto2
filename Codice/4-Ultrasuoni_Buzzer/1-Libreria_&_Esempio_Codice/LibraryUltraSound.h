#ifndef LibraryUltraSound_h
#define LibraryUltraSound_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryUltraSound {
	private:
		int pin_trig = 1;
		int pin_echo = 2;
	public:
		void setUltraSoundPin(int pinTrigPort, int pinEchoPort);
		int getDistance();
};
#endif