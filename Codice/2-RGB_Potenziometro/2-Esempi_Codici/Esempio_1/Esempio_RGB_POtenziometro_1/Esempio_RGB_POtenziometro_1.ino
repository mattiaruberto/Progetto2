#include <LibraryLedRGB.h>
#include <LibraryPotentiometer.h>


LibraryPotentiometer libraryPotentiometer;
LibraryLedRGB libraryLedRGB;

int valuePotentiometer;
int rangeValuePotentiometer;

void setup() {
  libraryLedRGB.setLedPin(0,1,4);
}

void loop() {
  valuePotentiometer = libraryPotentiometer.getValue(1);
  rangeValuePotentiometer = libraryPotentiometer.getMappedValue(valuePotentiometer, 0, 1023, 1, 6);
  
  if(rangeValuePotentiometer > 0 && rangeValuePotentiometer <= 1){
    libraryLedRGB.setColor(255,0,0);
  }else if(rangeValuePotentiometer > 1 && rangeValuePotentiometer <= 2){
    libraryLedRGB.setColor(255,255,0);
  }else if(rangeValuePotentiometer > 2 && rangeValuePotentiometer <= 3){
    libraryLedRGB.setColor(0,255,0);
  }else if(rangeValuePotentiometer > 3 && rangeValuePotentiometer <= 4){
    libraryLedRGB.setColor(0,255,255);
  }else if(rangeValuePotentiometer > 4 && rangeValuePotentiometer <= 5){
    libraryLedRGB.setColor(0,0,255);
  }else if(rangeValuePotentiometer > 5 && rangeValuePotentiometer <= 6){
    libraryLedRGB.setColor(255,0,255);
  }
}
