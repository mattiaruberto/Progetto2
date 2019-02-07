#include <LibraryLed.h>

#include <LibraryButton.h>

LibraryLed libraryLed;

LibraryButton libraryButton;

boolean stato_led;

void setup() {
  libraryLed.setLedPin(1);
  libraryButton.setButtonPin(0);
}

void loop() {
  stato_led = libraryButton.toggle();
  libraryLed.setLed(stato_led);
}
