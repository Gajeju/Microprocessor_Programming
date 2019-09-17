void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int inputData = analogRead(A0);
  int outputData = map(inputData, 0, 1023, 0, 255);
  
  analogWrite(3, outputData);
  delay(50);

  Serial.println(inputData);
  Serial.println(outputData);
}
