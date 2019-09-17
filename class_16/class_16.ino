const byte number[10] = 
{
  B11000000, //0
  B11111001, //1
  B10100100, //2
  B10110000,
  B10011001, //3
  B10010010, //4
  B10000010, //5
  B11111000, //6
  B10000000, //7
  B10010000  //8
};

void setup() {

  for (int i = 2; i <= 9; i++)
  {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9,LOW);
}

void loop() {
  for(int k = 0; k <= 9; ++k)
  {
    fndDisplay(k);
    delay(1000);
  }
}

void fndDisplay(int displayValue)
{
  boolean bitValue;
  for(int i = 2; i <= 9; i++)
  {
    digitalWrite(i, LOW);
  }
  for(int i = 0; i <= 7; ++i)
  {
    bitValue = bitRead(number[displayValue], i);
    digitalWrite(i+2, bitValue);
  }
}
