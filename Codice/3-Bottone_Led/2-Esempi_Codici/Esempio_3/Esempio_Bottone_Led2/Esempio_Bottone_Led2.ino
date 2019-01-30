#include <LibraryLed.h>

#include <LibraryButton.h>

LibraryLed libraryLed;

LibraryButton libraryButton;

boolean stato_bot;

unsigned long blinkDelay = 1000;
unsigned long currentMilles = millis();

void setup() {
  libraryLed.setLedPin(1);
  libraryButton.setButtonPin(0);
}

void loop() {
  stato_bot = libraryButton.getStateButton();
  if(stato_bot == HIGH){
    libraryLed.powerOn();
    delay(700);
    stato_bot = libraryButton.getStateButton();
    if(stato_bot == HIGH){
      currentMilles = millis();
      while((millis() - currentMilles) < blinkDelay){
        libraryLed.blink(20);
      }
    }
  }else{
    libraryLed.powerOff();
  }
}
