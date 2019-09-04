
void setup() {

  for (int i = 0; i < 4; i++)
    pinMode(i + 2, OUTPUT);
  pinMode(10, INPUT);
}

void loop() {

  if ( digitalRead(10) == HIGH)
  {
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
}
