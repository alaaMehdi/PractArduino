const int pinLed=13;
const int pinBouton=2;
boolean etat;

void interreption(){

  etat=!etat;
  digitalWrite(pinLed,etat);
  
}

void setup() {

  pinMode(pinLed,OUTPUT);
  pinMode(pinBouton,INPUT);
  attachInterrupt(0,interreption,RISING);

}



void loop() {
}
