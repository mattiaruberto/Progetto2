#include <LibreriaFF.h>

LibreriaFF libreriaFF;

int valorePotenziometro;

void setup() {
  libreriaFF.setLedPin(0,1,4);
}

void loop() {
  int risultato=analogRead(1); //P2
  valorePotenziometro = map(risultato, 0, 1023, 0, 765);
  
  if(valorePotenziometro < 256){
    libreriaFF.setRed(valorePotenziometro);
    libreriaFF.setGreen(0);
    libreriaFF.setBlue(0);
  }else if(valorePotenziometro < 511){
    libreriaFF.setRed(0);
    libreriaFF.setGreen(valorePotenziometro-255);
    libreriaFF.setBlue(0);
  }else {
    libreriaFF.setRed(0);
    libreriaFF.setGreen(0);
    libreriaFF.setBlue(valorePotenziometro-510);
  }
}
