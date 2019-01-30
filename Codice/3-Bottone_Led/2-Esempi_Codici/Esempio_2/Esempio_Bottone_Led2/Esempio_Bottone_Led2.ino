#include <LibraryLed.h>

#include <LibraryButton.h>

LibraryLed libraryLed;

LibraryButton libraryButton;


void setup() {
  libraryLed.setLedPin(1);
  libraryButton.setButtonPin(0);
}

void loop() {
  boolean stato_bot = libraryButton.getStateButton();
  
  bool stato_led = libraryLed.toggle(stato_bot);

  libraryLed.setLed(stato_led);
}
