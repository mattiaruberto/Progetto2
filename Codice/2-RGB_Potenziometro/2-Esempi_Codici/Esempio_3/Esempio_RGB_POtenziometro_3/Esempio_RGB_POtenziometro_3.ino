#include <LibraryLedRGB.h>

#include <LibraryPotentiometer.h>

LibraryLedRGB libraryLedRGB;
LibraryPotentiometer libraryPotentiometer;

int valuePotentiometer;
int rangeValuePotentiometer;

int counter = 0;

bool ceck = true;

void setup() {
  libraryLedRGB.setLedPin(0,1,4);
}

void loop() {
  valuePotentiometer = libraryPotentiometer.getValue(1);
  rangeValuePotentiometer = libraryPotentiometer.setRange(valuePotentiometer, 0, 1023, 1, 6);
  
  if(rangeValuePotentiometer > 50){
    ceck = true;
  }
  if(ceck){
    if(rangeValuePotentiometer < 30){
      counter++;
      if(counter == 3){
        counter = 0;
      }
      ceck = false;
    }
  }
  if(counter == 0){
    libraryLedRGB.setColor(rangeValuePotentiometer,0,0);
  }else if(counter == 1){
    libraryLedRGB.setColor(0,rangeValuePotentiometer,0);
  }else if(counter == 2){
    libraryLedRGB.setColor(0,0,rangeValuePotentiometer);
  }
}
