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
  if(distance <= 100){
    //troviamo il tempo di suono in base alla distanza
    int risultato = map(distance, 3, 100, 20, 500);

    //attiviamo il cicalino sulla porta 7 con frequenza 100
    libraryBuzzer.setTone(100);
    //lo facciamo suonare per il tempo del risultato     
    delay(risultato);
    //si spegne il cicalino
    libraryBuzzer.powerOff();
  }
  //pausa di 50millisecondi
  delay(50);
}
