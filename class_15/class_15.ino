const byte number[10] =
{
  B11000000,
  B11111001,
  B10100100,
  B10110000,
  B10011001,
  B10010010,
  B10000010,
  B10000000,
  B10010000
};

void setup() {
  for (int i = 2; i <= 9; i++)
  {
    pinMode(i, OUTPUT);
  }
  //pinMode(13, INPUT);
  digitalWrite(9, LOW);
}

void loop() {
  int sw = digitalRead(13);

  for (int k = 0; k <= 9; k++)
  {
    fndDisplay(k);
    delay(1000);
  }
}

void fndDisplay(int displayValue)
{
  boolean bitValue;
  for (int i = 2; i <= 7; i++)
  {
    bitValue = bitRead(number[displayValue], i);
    digitalWrite(i + 2, bitValue);
  }
}
