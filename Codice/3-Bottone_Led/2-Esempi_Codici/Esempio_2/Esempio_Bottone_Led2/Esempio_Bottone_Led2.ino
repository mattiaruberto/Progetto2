#include <LibreriaButton.h>

#include <LibreriaLed.h>

LibreriaLed libreriaLed;

LibreriaButton libreriaButton;

void setup() {
  libreriaLed.setLedPin(1);
  libreriaButton.setButtonPin(0);
}

void loop() {
  boolean stato_bot = libreriaButton.getStateButton();
  
  libreriaLed.toggle(stato_bot);
}
