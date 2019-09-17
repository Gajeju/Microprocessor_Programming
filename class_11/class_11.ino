void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available())
  {
    char input = Serial.read();

    if (input == '0')
    {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    }
    else if (input == '1')
    {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
    }
    else if (input == '2')
    {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
  }
}
