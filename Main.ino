#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("You gotta keep your head up, woooah");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(500);
}
