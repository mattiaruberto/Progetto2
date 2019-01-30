#ifndef LibraryLed_h
#define LibraryLed_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryLed {
	private:
		int led;
		boolean state_led;
		int buttonState;
		int lastButtonState = LOW;

		unsigned long lastDebounceTime = 0;
		unsigned long debounceDelay = 50;
	public:
		void setLedPin(int ledPort);
		void powerOn();
		void powerOff();
		void setLed(bool stato_led);
		void blink(int frequency);
		boolean toggle(bool stato_Bot);
};
#endif