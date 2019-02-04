//Includiamo la libreria del led RGB
#include <LibraryLedRGB.h>
//Includiamo la libreria del potenziometro
#include <LibraryPotentiometer.h>

//Istanziamo l'oggetto del potenziometro
LibraryPotentiometer libraryPotentiometer;
//Istanziamo l'oggetto del RGB
LibraryLedRGB libraryLedRGB;

//Istanziamo un variabile che rappresenta il valore del potenziometro
int valuePotentiometer;
//Istanziamo un variabile che rappresenta il valore del potenziometro
int rangeValuePotentiometer;

void setup() {
  //Settiamo le porte del led rgb
  libraryLedRGB.setLedPin(0,1,4);
}

void loop() {
  //Prendiamo il valore del potenziometro 
  valuePotentiometer = libraryPotentiometer.getValue(1);
  //Mappiamo il valore del potenziometro
  rangeValuePotentiometer = libraryPotentiometer.getMappedValue(valuePotentiometer, 0, 1023, 1, 6);

  //A dipendenza del valore mappato ritorniamo un colore differente del led
  if(rangeValuePotentiometer > 0 && rangeValuePotentiometer <= 1){
    libraryLedRGB.setColor(255,0,0);
  }else if(rangeValuePotentiometer > 1 && rangeValuePotentiometer <= 2){
    libraryLedRGB.setColor(255,255,0);
  }else if(rangeValuePotentiometer > 2 && rangeValuePotentiometer <= 3){
    libraryLedRGB.setColor(0,255,0);
  }else if(rangeValuePotentiometer > 3 && rangeValuePotentiometer <= 4){
    libraryLedRGB.setColor(0,255,255);
  }else if(rangeValuePotentiometer > 4 && rangeValuePotentiometer <= 5){
    libraryLedRGB.setColor(0,0,255);
  }else if(rangeValuePotentiometer > 5 && rangeValuePotentiometer <= 6){
    libraryLedRGB.setColor(255,0,255);
  }
}
