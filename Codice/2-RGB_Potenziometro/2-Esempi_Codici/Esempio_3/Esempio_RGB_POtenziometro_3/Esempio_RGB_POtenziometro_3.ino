#include <LibreriaFF.h>

LibreriaFF libreriaFF;

int valorePotenziometro;

int counter = 0;

bool ceck = true;

void setup() {
  libreriaFF.setLedPin(0,1,4);
}

void loop() {
  int risultato=analogRead(1); //P2
  valorePotenziometro = map(risultato, 0, 1023, 0, 255);
  if(valorePotenziometro > 50){
    ceck = true;
  }
  if(ceck){
    if(valorePotenziometro < 30){
      counter++;
      if(counter == 3){
        counter = 0;
      }
      ceck = false;
    }
  }
  if(counter == 0){
    libreriaFF.setColor(valorePotenziometro,0,0);
  }else if(counter == 1){
    libreriaFF.setColor(0,valorePotenziometro,0);
  }else if(counter == 2){
    libreriaFF.setColor(0,0,valorePotenziometro);
  }
}
