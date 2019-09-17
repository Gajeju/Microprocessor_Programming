const int RedLED = 3;
const int GreenLED = 5;
const int BlueLED = 6;

void ledOutput(int Red, int Green, int Blue)
{
  analogWrite(RedLED, Red);
  analogWrite(GreenLED, Green);
  analogWrite(BlueLED, Blue);
}

void setup() {
  ledOutput(255,0,0);
  delay(1000);
  ledOutput(0,255,0);
  delay(1000);
  ledOutput(0,0,255);
  delay(1000);
}

void loop() {
  for(int i = 0; i < 255; i++)
  {
    ledOutput(255,i,0);
    delay(10);
  }
  for(int i = 0; i < 255; i++)
  {
    ledOutput(0,255,i);
    delay(10);
  }
  for(int i = 0; i < 255; i++)
  {
    ledOutput(i,0,255);
    delay(10);
  }
  for(int i = 0; i < 255; i++)
  {
    ledOutput(i,255,255);
    delay(10);
  }
  for(int i = 0; i < 255; i++)
  {
    ledOutput(255,i,255);
    delay(10);
  }
  for(int i = 0; i < 255; i++)
  {
    ledOutput(255,255,i);
    delay(10);
  }
}
