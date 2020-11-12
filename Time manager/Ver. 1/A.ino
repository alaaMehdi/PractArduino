const int pinLed = 13;
void setup() {

  pinMode(pinLed,OUTPUT);

}

void loop() {

  delay(500);
  digitalWrite(pinLed,HIGH);
  delay(500);
  digitalWrite(pinLed,LOW);
  

}
