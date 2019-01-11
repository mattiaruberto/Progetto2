#include <LibreriaFF.h>

LibreriaFF libreriaFF;

void setup() {
  libreriaFF.setLedPin(0,1,4);
}

void loop() {
  // put your main code here, to run repeatedly:
  libreriaFF.setColor(255,255,255);
  libreriaFF.setRed(255);
  libreriaFF.setGreen(255);
  libreriaFF.setBlue(255);
}
