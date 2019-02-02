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
<<<<<<< HEAD
  
=======

>>>>>>> 9fdcacacf5d34ccf00264cc78dc9660414f88726
  if(valuePotentiometer > 50){
    ceck = true;
  }
  if(ceck){
    if(valuePotentiometer < 30){
      counter++;
      if(counter == 3){
        counter = 0;
      }
      ceck = false;
    }
  }
  if(counter == 0){
    libraryLedRGB.setColor(valuePotentiometer,0,0);
  }else if(counter == 1){
    libraryLedRGB.setColor(0,valuePotentiometer,0);
  }else if(counter == 2){
    libraryLedRGB.setColor(0,0,valuePotentiometer);
  }
}
