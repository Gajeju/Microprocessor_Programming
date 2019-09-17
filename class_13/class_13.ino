void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int input = analogRead(A0);
  int output = map(input, 0, 1023, 0, 255);

  analogWrite(3, output);
  
  Serial.println(input);
}
