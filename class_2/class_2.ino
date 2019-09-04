void setup() {

  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  for ( int i = 0; i < 255; i += 10)
  {
    analogWrite(3, i);
    Serial.println(i);
    delay(100);
  }
}
