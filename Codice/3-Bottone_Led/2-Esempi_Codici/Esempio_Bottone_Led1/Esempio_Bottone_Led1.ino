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
  //Prendiamo il valore del bottone tramite getStateButton
  boolean stato_bot = libraryButton.getStateButton();
  //Se il bottone è cliccato il led lampeggerà con una frequnza di 600 altrimenti sarà spento
  if (stato_bot == HIGH) {
    libraryLed.blink(600);
  } else {
    libraryLed.powerOff();
  }
}
