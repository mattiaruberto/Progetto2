int sensorValue=0;

int redPin=0; //P0
int greenPin=1; //P1
int bluePin=3; //P3

bool red = LOW;
bool green = LOW;
bool blue = LOW;

 void setup()
 {
   pinMode(redPin, OUTPUT);
   pinMode(greenPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
 }

 void loop()
 {
  sensorValue = analogRead(1); // Which corresponds to P2
  int risultato = map(sensorValue, 0, 1023, 0, 60);
  
  if(risultato >= 0 && risultato <= 10){
    red=LOW;
    green=HIGH;
    blue=HIGH;
  }else if(risultato >= 11 && risultato <= 20){
    red=LOW;
    green=LOW;
    blue=HIGH;
  }else if(risultato >= 21 && risultato <= 30){
    red=HIGH;
    green=LOW;
    blue=HIGH;
  }else if(risultato >= 31 && risultato <= 40){
    red=HIGH;
    green=LOW;
    blue=LOW;
  }else if(risultato >= 41 && risultato <= 50){
    red=HIGH;
    green=HIGH;
    blue=LOW;
  }else if(risultato >= 51 && risultato <= 60){
    red=LOW;
    green=HIGH;
    blue=LOW;
  }
  digitalWrite(redPin, red);
  digitalWrite(greenPin, green);
  digitalWrite(bluePin, blue);
}
