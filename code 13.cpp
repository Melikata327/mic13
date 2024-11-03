#include <LiquidCrystal.h>  // وارد کردن کتابخانه مخصوص

LiquidCrystal lcd(12,11,5,4,3,2);  // تعیین کردن شماره پین های متصل شده به آردوینو

void setup() {
  lcd.begin(16, 2);     // تعیین کردن تعداد سطر و ستون LCD
  lcd.clear();
}

void loop() {
  lcd.print("Hello World :)");  // چاپ پیام بر روی صفحه
  lcd.setCursor(0, 1);  // حرکت دادن نشانگر بر روی ابتدای خط بعدی
  lcd.print("How are you doing");    // چاپ دومین پیام (در خط بعدی)
}


