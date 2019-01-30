#ifndef LibraryButton_h
#define LibraryButton_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibraryButton {
	private:
		int button;
		int state_button;
	public:
		void setButtonPin(int buttonPort);
		boolean getStateButton();
};
#endif