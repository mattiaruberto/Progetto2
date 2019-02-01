  //pin del trig per l'ultrasuoni
  int pin_trig = 1;
  //pin dell'echo per l'ultrasuoni
  int pin_echo = 2;
  //pin del cicalino
  int buzzer = 0; 
  //distanza minima misurata dal sensore ultrasuoni
  int valoreBasso = 3;
  //distanza massima dove suona il cicalino
  int valoreAlto = 100;
  //tempo in cui il cicalino suona
  int risultato = 0;

void setup() {
  //settiamo le varie uscite ed entrate
  pinMode(pin_trig, OUTPUT);

  pinMode(pin_echo, INPUT);
  
  pinMode(buzzer,OUTPUT);
}

void loop() {
   //spegnamo l'impulso del sensore
  digitalWrite(pin_trig, LOW);
  //mandiamo l'impulso del sensore
  digitalWrite(pin_trig, HIGH);
  //lo facciamo inviare per 10microsecondi
  delayMicroseconds(10);
  //spegnamo l'impulso
  digitalWrite(pin_trig, LOW);
  //convertiamo il tempo in distanza
  int dist = (0.34 * pulseIn(pin_echo, HIGH)) / 2;
  //convertiamo i metri i millimetri in centimetri
  int distanza = dist/10;

  //controllo se la distanza è minore di 1m
  if(distanza <= 100){
    //troviamo il tempo di suono in base alla distanza
    risultato = map(distanza, valoreBasso, valoreAlto, 20, 500);

    //attiviamo il cicalino sulla porta 7 con frequenza 100
    tone(buzzer,100);
    //lo facciamo suonare per il tempo del risultato     
    delay(risultato);
    //si spegne il cicalino
    noTone(buzzer); //non suona
  }
  //pausa di 50millisecondi
  delay(50);
}
