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
//Istaziamo la variabile counter per tenere il conteggio di quale colore accendere
int counter = 0;
//Instanziamo la variabile ceck per sapere quando dobbiamo cambiare il colore
bool ceck = true;


void setup() {
  //Settiamo le porte del led rgb
  libraryLedRGB.setLedPin(0,1,4);
}

void loop() {
  //Prendiamo il valore del potenziometro 
  valuePotentiometer = libraryPotentiometer.getValue(1);

  //Se il potenziometro è salito sopra 50 settiamo ceck a true
  if(valuePotentiometer > 50){
    ceck = true;
  }
  //Se ceck è true e il valore del potenziometro è minore di 30 passiamo al colore successivo
  if(ceck){
    if(valuePotentiometer < 30){
      counter++;
      if(counter == 3){
        counter = 0;
      }
      ceck = false;
    }
  }
  //A dipendenza del valore del counter accendiami il led RGB
  if(counter == 0){
    libraryLedRGB.setColor(valuePotentiometer,0,0);
  }else if(counter == 1){
    libraryLedRGB.setColor(0,valuePotentiometer,0);
  }else if(counter == 2){
    libraryLedRGB.setColor(0,0,valuePotentiometer);
  }
}
