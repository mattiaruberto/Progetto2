#include <LibraryUltraSound.h>

#include <LibraryBuzzer.h>
//Instanziamo l'oggetto che rappresenta la libreria dell'ultra suoni
LibraryUltraSound libraryUltraSound;
//Instanziamo l'oggetto che rappresenta la libreria del buzzer
LibraryBuzzer libraryBuzzer;

int distance;

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
