const int buttonPin = 0;  
const int ledPin = 1;   

int ledState = HIGH;         
int state_button;             
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;    

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  ledState = toggle();
  digitalWrite(ledPin, ledState);
}

bool toggle(){
  int reading = digitalRead(buttonPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != state_button) {
      state_button = reading;
      if (state_button == HIGH) {
        ledState = !ledState;
      }
    }
  }
  lastButtonState = reading;
  return ledState;
}
