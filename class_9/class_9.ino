#define LED_NUM 2

void setup() {
  for (int i = 0; i < LED_NUM; i++)
  {
    pinMode(i+3, OUTPUT);
  }
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sw = digitalRead(13);

  if (sw == 0)  
  {
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  Serial.println(sw);
}
