#include <LibreriaFF.h>

LibreriaFF libreriaFF;

int valorePotenziometro;

void setup() {
  libreriaFF.setLedPin(0,1,4);
}

void loop() {
  int risultato=analogRead(1); //P2
  valorePotenziometro = map(risultato, 0, 1023, 0, 6);
  
  if(valorePotenziometro <= 1){
    libreriaFF.setColor(255,0,0);
  }else if(valorePotenziometro > 1 && valorePotenziometro <= 2){
    libreriaFF.setColor(255,255,0);
  }else if(valorePotenziometro > 2 && valorePotenziometro <= 3){
    libreriaFF.setColor(0,255,0);
  }else if(valorePotenziometro > 3 && valorePotenziometro <= 4){
    libreriaFF.setColor(0,255,255);
  }else if(valorePotenziometro > 4 && valorePotenziometro <= 5){
    libreriaFF.setColor(0,0,255);
  }else if(valorePotenziometro > 5 && valorePotenziometro <= 6){
    libreriaFF.setColor(255,0,255);
  }
}
