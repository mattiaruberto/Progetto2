//Includiamo la libreria dell'ultrasuoni
#include <LibraryUltraSound.h>
//Includiamo la libreria del buzzer
#include <LibraryBuzzer.h>
//Istanziamo l'ogetto dell'ultrasuoni
LibraryUltraSound libraryUltraSound;
//Istanziamo l'oggetto del buzzer
LibraryBuzzer libraryBuzzer;

void setup() {
  //settiamo le varie uscite ed entrate
  libraryBuzzer.setPinBuzzer(0);
  libraryUltraSound.setUltraSoundPin(1, 2);
}

void loop() {
  //prendiamo la distanza dell'ultrasuoni che ci ritorna il metodo
  int distance = libraryUltraSound.getDistance();
  
  //controllo se la distanza è minore di 1m
  if(distance <= 20){
    //attiviamo il cicalino con una frequenza di 100
    libraryBuzzer.setTone(100);
    delay(10);   
  }else{
    //si spegne il cicalino
    libraryBuzzer.powerOff();
  }
}
