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
  }else if(valorePotenziometro < 511){
    libreriaFF.setGreen(valorePotenziometro-255);
  }else{
    libreriaFF.setBlue(valorePotenziometro-765);
  }
}
