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
  rangeValuePotentiometer = libraryPotentiometer.setRange(valuePotentiometer, 0, 1023, 1, 6);
  
  if(rangeValuePotentiometer < 256){
    libraryLedRGB.setRed(rangeValuePotentiometer);
    libraryLedRGB.setGreen(0);
    libraryLedRGB.setBlue(0);
  }else if(rangeValuePotentiometer < 511){
    libraryLedRGB.setRed(0);
    libraryLedRGB.setGreen(rangeValuePotentiometer-255);
    libraryLedRGB.setBlue(0);
  }else {
    libraryLedRGB.setRed(0);
    libraryLedRGB.setGreen(0);
    libraryLedRGB.setBlue(rangeValuePotentiometer-510);
  }
}
