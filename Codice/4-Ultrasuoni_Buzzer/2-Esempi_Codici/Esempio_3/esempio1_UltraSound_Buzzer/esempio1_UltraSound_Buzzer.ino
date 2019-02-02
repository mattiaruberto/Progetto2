#include <LibraryUltraSound.h>

#include <LibraryBuzzer.h>

LibraryUltraSound libraryUltraSound;
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
  if(distance <= 30){
    //troviamo il tempo di suono in base alla distanza
    int frequenza = map(distance, 0, 100, 20, 500);
    //attiviamo il cicalino sulla porta 7 con frequenza 100
    libraryBuzzer.setTone(frequenza);
    //lo facciamo suonare per il tempo del risultato     
    delay(10);
  }else{
    //si spegne il cicalino
    libraryBuzzer.powerOff();
  }
  //pausa di 50millisecondi
  delay(50);
}
