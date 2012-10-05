
int ledPin = 13;
  
void blinkLed(int delayTime) {
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}


// arduino default functions

void setup() {       
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkLed(100);
}
