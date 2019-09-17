const byte number[10] =
{
  B00111111,
  B00000110,
  B01011011,
  B01001111,
  B01100110,
  B01101101,
  B01111101,
  B00000111,
  B01111111,
  B01101111
};

int count = 0;

void setup() {
  for (int i = 2; i <= 13; ++i)
  {
    pinMode(i, OUTPUT);
  }
  for (int i = 10; i <= 13; ++i)
  {
    digitalWrite(i, LOW);
  }
}

void loop() {

    fndDisplay(count);

    if (count >= 9) count = 0;
    else ++count;
    delay(1000);
}

void fndDisplay(int displayValue)
{
  boolean bitValue;
  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, HIGH);
  }
  for (int i = 0; i <= 7; ++i)
  {
    bitValue = bitRead(number[displayValue], i);
    digitalWrite(i + 2, bitValue);
  }
}
