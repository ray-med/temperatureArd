#include <thermistorMinim.h>

// Подклчение библиотек
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// Назначение пинов
byte THERM_PIN = 0;
//объявление констант и переменных
int ADCmax = 3968; // Максимальный аналоговый сигнал
int ntcR25 = 100000; // Ом - сопротивление термистора при 25 г.ц.
int ntcB = 3950; // Beta of NTC
float ADCv = 0.0;
float reading = 0.0;
float ntcR = 0.0;
float temp = 0.0;

// Активация библиотек
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;
thermistor therm(THERM_PIN, ntcR, ntcB);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.print("Hello!!!");
  delay(2000);
  lcd.clear();
}

void loop() {
  reading = analogRead(THERM_PIN);
  ntcR = 
  temp = RtoT(ntcR);
  lcd.print("t1 = ");
  lcd.setCursor(5, 0);              //  Устанавливаем курсор в позицию (5 столбец, 0 строка)
  lcd.print(analogRead(0));

  lcd.setCursor(0, 1);              //  Устанавливаем курсор в позицию (0 столбец, 1 строка)
  lcd.print("t2 = ");
  lcd.setCursor(5, 1);
  lcd.print(analogRead(1));
  
  delay(1000);
  lcd.clear();
}

float RtoT(r) {
  return r/10000
}
