//https://wokwi.com/projects/338996910787396180
#include "DHTesp.h"
#include <LiquidCrystal_I2C.h>

const int DHT_PIN = 25;
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

DHTesp dhtSensor;

void setup() {
  lcd.init();                  
  lcd.backlight();
  Serial.begin(115200);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
  
}
void loop() {
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();
  Serial.println("TEMP: " + String(data.temperature, 2) + "°C");
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");
  Serial.println("---");
  lcd.setCursor(0, 0);
  lcd.print("TEMP: ");
  lcd.print(data.temperature);
  lcd.print("  *C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(data.humidity);
  lcd.print("%");
  delay(1000);
  
}