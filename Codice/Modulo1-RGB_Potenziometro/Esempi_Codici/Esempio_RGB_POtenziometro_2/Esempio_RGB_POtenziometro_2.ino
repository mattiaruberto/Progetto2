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

  /**
   * Se il valore è minore di 256 passiamo tutte le tonalità di rosso,
   * se il valore è minore di 511 passiamo tutte le tonalità di verde
   * altrimenti passiamo tutte le tonalità di blu.
   */
  if(rangeValuePotentiometer < 256){
    libraryLedRGB.setRed(rangeValuePotentiometer);
    libraryLedRGB.setGreen(0);
    libraryLedRGB.setBlue(0);
  }else if(rangeValuePotentiometer < 511){
    libraryLedRGB.setRed(0);
    libraryLedRGB.setGreen(rangeValuePotentiometer-255);
    libraryLedRGB.setBlue(0);
  }else {
    libraryLedRGB.setRed(0);
    libraryLedRGB.setGreen(0);
    libraryLedRGB.setBlue(rangeValuePotentiometer-510);
  }
}
