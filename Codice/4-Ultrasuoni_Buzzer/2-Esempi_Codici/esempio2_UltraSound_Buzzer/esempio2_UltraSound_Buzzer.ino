//Includiamo la libreria dell'ultrasuoni
#include <LibraryUltraSound.h>
//Includiamo la libreria del buzzer
#include <LibraryBuzzer.h>
//Istanziamo l'ogetto dell'ultrasuoni
LibraryUltraSound libraryUltraSound;
//Istanziamo l'oggetto del buzzer
LibraryBuzzer libraryBuzzer;
//Istanziamo la variabile distance per memorizzare la distanza ritornata dell'ultrasuonui
int distance;

void setup() {
  //settiamo le varie uscite ed entrate
  libraryBuzzer.setPinBuzzer(0);
  libraryUltraSound.setUltraSoundPin(1, 2);
}
void loop() {
  //prendiamo la distanza dell'ultrasuoni che ci ritorna il metodo
  int distance = libraryUltraSound.getDistance();
  //troviamo il tempo di suono in base alla distanza
  int frequenza = map(distance, 0, 100, 0, 1000);
  //attiviamo il cicalino con la frequenza risultante
  libraryBuzzer.setTone(frequenza);
  //una pausa di 100 ms tra un suono e l'altro    
  delay(100);
}
