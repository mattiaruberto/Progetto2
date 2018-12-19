void setup() {
    //P0, P1, and P4 are capable of hardware PWM (analogWrite).
    pinMode(0, OUTPUT); //0 is P0, 1 is P1, 4 is P4 - unlike the analog inputs,for analog (PWM) outputs the pin number matches the port number.
    pinMode(1, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop() {
  int pot=ottieniValorePotenziometro(1,0,255);
  rappresentaColore(0,pot,1,pot,4,pot); 
}
void rappresentaColore(int portaRosso,int valoreRosso,int portaVerde,int valoreVerde,int portaBlu,int valoreBlu){
  analogWrite(portaRosso,valoreRosso);
  analogWrite(portaVerde,valoreVerde);
  analogWrite(portaBlu,valoreBlu);
}

int ottieniValorePotenziometro(int porta,int min,int max){
  return map(analogRead(porta),0,1023,min,max);
}
