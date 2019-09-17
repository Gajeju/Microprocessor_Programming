#define LED_NUM 2

void setup() {
  for (int i = 0; i < LED_NUM; i++)
  {
    pinMode(i+3, OUTPUT);
  }
}

void loop() {
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
}
