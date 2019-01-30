boolean statoLed=false;
boolean newStatoBottone=false;
boolean oldStatoBottone=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0) && newStatoBottone){
    statoLed=!statoLed;
    oldStatoBottone=newStatoBottone;
    delay(200);
  }
  digitalWrite(1,statoLed);
}
