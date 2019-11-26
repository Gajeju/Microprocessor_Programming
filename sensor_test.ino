

void setup() {
  pinMode(13, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int a;
  a = digitalRead(13);
  delay(10);
  Serial.println(a);
}
