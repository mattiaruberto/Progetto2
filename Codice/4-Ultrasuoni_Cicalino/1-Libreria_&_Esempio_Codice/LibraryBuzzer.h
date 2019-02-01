#ifndef LibraryBuzzer_h
#define LibraryBuzzer_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryBuzzer {
	private:
		int buzzer = 0;
	public:
		void setPinBuzzer(int buzzerPort);
		void setTone(int frequency);
		void powerOff();
};
#endif