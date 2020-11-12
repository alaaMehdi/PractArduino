const int pinLed=13;
const int pinBouton=2;

void setup() {

  pinMode(pinLed,OUTPUT);
  pinMode(pinBouton,INPUT);

}

int etatLED=HIGH;

void loop() {

  digitalWrite(pinLed,etatLED);
  int etat=digitalRead(pinBouton);
  if (etat==0){ //Si le bouton est presser
    etatLED=!etatLED;
  }
  delay(200);

}
