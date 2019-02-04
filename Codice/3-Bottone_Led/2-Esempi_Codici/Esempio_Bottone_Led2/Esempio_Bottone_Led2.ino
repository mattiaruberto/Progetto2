//Includiamo la libreria del led
#include <LibraryLed.h>
//Includiamo la libreria del bottone
#include <LibraryButton.h>
//Istanziamo l'oggeto per il led
LibraryLed libraryLed;
//Istanziamo l'oggetto per il bottone
LibraryButton libraryButton;

void setup() {
  //Settiamo i pin per il led e il bottone
  libraryLed.setLedPin(1);
  libraryButton.setButtonPin(0);
}

void loop() {
  //Ritorniamo il valore del buttone tramite l'antirimbalzo
  boolean stato_led = libraryButton.toggle();
  //Settiamo il led con il valore ritornato dal toggle
  libraryLed.setLed(stato_led);
}
