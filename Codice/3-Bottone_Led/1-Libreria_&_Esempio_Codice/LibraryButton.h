#ifndef LibraryButton_h
#define LibraryButton_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryButton {
	private:
		int button;
		boolean state_button;
		boolean lastButtonState = LOW;
		unsigned long lastDebounceTime = 0;
		unsigned long debounceDelay = 50;
		boolean ledState = HIGH;
	public:
		void setButtonPin(int buttonPort);
		boolean getStateButton();
		boolean toggle();
};
#endif