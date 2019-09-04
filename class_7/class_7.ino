#include <LiquidCrystal.h>

unsigned int time;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin(16,2);
  lcd.setCursor(0,1);
  lcd.print("Programmer:KDH");

}

void loop() {

  lcd.setCursor(0,0);
  lcd.print(time);
  ++time;
  delay(100);


}
