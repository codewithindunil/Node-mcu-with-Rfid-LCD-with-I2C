#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {

Serial.begin(115200);

//Use predefined PINS consts

Wire.begin(D4, D3);

lcd.begin();

lcd.home();

lcd.print("Hello moda kekari");

}

void loop() { // do nothing here 
  }
