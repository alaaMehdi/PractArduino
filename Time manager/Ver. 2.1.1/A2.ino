const int pinLed = 11;
void setup() {

  pinMode(pinLed,OUTPUT);

}

void myDelay(int T){
  int now=millis();
  while(millis()<=now+T);
}

void loop() {
  myDelay(500);
  digitalWrite(pinLed,HIGH);
  myDelay(500);
  digitalWrite(pinLed,LOW);
  

}
