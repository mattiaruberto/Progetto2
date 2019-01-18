/*Esercizio 1
 * programma per la lettura dello stato di due bottoni e l'accensione di due led 
 */

int bot_1 = 0;
int stato_bot1 = HIGH;
int led_1 = 1;
int stato_led1;
int contatore;
 
void setup() {
  // put your setup code here, to run once:
  pinMode (bot_1,INPUT);
  pinMode (led_1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stato_bot1 = digitalRead(bot_1);
  stato_led1 = HIGH;
  digitalWrite (led_1, stato_bot1); 
}
