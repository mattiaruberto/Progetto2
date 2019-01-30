#include <LibreriaFF.h>

LibreriaFF libreriaFF;

int valorePotenziometro;

int counter = 1;

void setup() {
  libreriaFF.setLedPin(0,1,4);
}

void loop() {
  int risultato=analogRead(1); //P2
  valorePotenziometro = map(risultato, 0, 1023, 0, 255);
  
  if(valorePotenziometro = 255){
    if(counter == 1){
      counter = 2;
    }else if(counter == 2){
      counter = 3;
    }else{
      counter = 1;
    }
  }else if(valorePotenziometro = 0){
    if(counter == 1){
      counter = 3;
    }else if(counter == 2){
      counter = 1;
    }else{
      counter = 2;
    }
  }
  if(counter == 1){
    libreriaFF.setRed(valorePotenziometro);
  }else if(counter == 2){
    libreriaFF.setGreen(valorePotenziometro);
  }else{
    libreriaFF.setBlue(valorePotenziometro);
  }
}
