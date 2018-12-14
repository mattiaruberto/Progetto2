#ifndef LibreriaFF_h
#define LibreriaFF_h

// definiamo la libreria e includiamo la libreria Arduino.h
#include "Arduino.h"

// definiamo le procedure per il led RGB
void setColorRed(int pinRed, int pinGreen, int pinBlue);
void setColorBlue(int pinRed, int pinGreen, int pinBlue);
void setColorGreen(int pinRed, int pinGreen, int pinBlue);
void setColorYellow(int pinRed, int pinGreen, int pinBlue);
void setColorViolet(int pinRed, int pinGreen, int pinBlue);
void setColorLightBlue(int pinRed, int pinGreen, int pinBlue);
void turnOnLedRGB(int pinRed, int pinGreen, int pinBlue);
void turnOffLedRGB(int pinRed, int pinGreen, int pinBlue);

// definiamo le procedure per il potenziometro

#endif