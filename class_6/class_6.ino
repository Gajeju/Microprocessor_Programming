const int ledPin = 13;
int blinkNumber = 0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {

  if(Serial.available()) {
    char val = Serial.read();
    if(isDigit(val))
    {
      blinkNumber = (val - '0');
    }
  }
  
  
  for (char i = 0; i < blinkNumber; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  blinkNumber = 0;
}
