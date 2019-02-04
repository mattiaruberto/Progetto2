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
  //Prendiamo lo stato corrente del bottone
  boolean stato_bot = libraryButton.getStateButton();
  /**
   * Controlliamo se il bottone è schiacciato
   * Se si accendiamo il led per 700ms
   * Se il bottone è ancora schiacciato il led incomincerà a lampeggiare per 1500ms con una frequenza di 20
   * Altrimenti spegnamo il led
   */
  if(stato_bot == HIGH){
    libraryLed.powerOn();
    delay(1000);
    stato_bot = libraryButton.getStateButton();
    if(stato_bot == HIGH){
      unsigned long currentMilles = millis();
      while((millis() - currentMilles) < 1500){
        libraryLed.blink(20);
      }
    }
  }else{
    libraryLed.powerOff();
  }
}
