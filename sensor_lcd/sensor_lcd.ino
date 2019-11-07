#include <LiquidCrystal.h>

int score = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(13, INPUT_PULLUP);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("score");
}

void loop() {
  int sensor = digitalRead(13);

  
  if (sensor == 0) score+=2;

  lcd.setCursor(10,0);
  lcd.print("+2");
  
  lcd.setCursor(0,1);
  lcd.print("total : ");
  lcd.setCursor(10,1);
  lcd.print(score);
  
  delay(300);
}
