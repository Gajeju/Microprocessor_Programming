#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin(16,2);
  lcd.setCursor(0,1);
  lcd.print("Sep.9_KDH");

}

void loop() {

  lcd.setCursor(0,0);
  for (int i = 0; i < 10; i++)
  {
    lcd.print("");
  }
  delay(500);
 }
