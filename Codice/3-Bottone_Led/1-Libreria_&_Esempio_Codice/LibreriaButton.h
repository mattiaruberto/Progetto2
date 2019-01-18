#ifndef LibreriaButton_h
#define LibreriaButton_h
// definiamo la libreria e includiamo la libreria Arduino.h

#include "Arduino.h"
class LibreriaButton {
	private:
		int button;
		int state_button;
	public:
		void setButtonPin(int buttonPort);
		boolean getStateButton();
};
#endif