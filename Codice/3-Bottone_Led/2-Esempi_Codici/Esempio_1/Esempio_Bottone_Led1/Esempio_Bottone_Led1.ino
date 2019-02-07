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
  if (stato_bot == HIGH) {
    libraryLed.blink(600);
  } else {
    libraryLed.powerOff();
  }
}
