//https://wokwi.com/projects/339009535816499796
//โปรแกรมวัดระยะทางและหรี่ไฟ LED อัตโนมัติ
#include <LiquidCrystal_I2C.h>
#define trigpin 32  
#define echopin 35 
int LED1=22;
int LED2=19;
int LED3=18;
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup() {
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);

  lcd.init();                  
  lcd.backlight();
  Serial.begin(115200);
  Serial.println("Hi,Dude!");
  digitalWrite(LED1, HIGH);
  Serial.print("Order to Serial monitor  : ");
  lcd.setCursor(1,0);
  lcd.print("SAY SOMETHING ");
}

void loop() {
  while(Serial.available()){
  String data = String(Serial.readString());
  data.toUpperCase();
  String getdata = data ; 
  Serial.println(data);

  if(data == getdata) {
    delay(200);
    lcd.clear();
    Serial.print("LEST GO");
    lcd.setCursor(0,0);
    lcd.print(">>"+data);
    StartLed ();
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
    Serial.println();
    delay(2000);
    lcd.clear();
  int x = 0 ;
while ( x<=2){
  int duration, distance;
  int PWM;
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(1000);  
    digitalWrite(trigpin, LOW);
    duration = pulseIn(echopin,HIGH);
    distance = ( duration / 2) / 29.1;
    Serial.println("cm:"); 
    Serial.println(distance);
    lcd.setCursor(0,0);
    lcd.print("Distance>>");
    lcd.setCursor(11,0);
    lcd.print(distance);
    lcd.print("CM");
if (distance < 101) { 
  PWM = map(distance, 0, 100, 0, 255);
  lcd.setCursor(5, 1); 
  lcd.print("PWM = " + String(255 - PWM) + "    ");
  analogWrite(LED3, 255 - PWM); 
  }

  else {lcd.setCursor(5, 1);
  PWM = 255;
  lcd.print("PWM = " + String(255 - PWM) + "    ");
  analogWrite(LED3, 255 - PWM);
  }
  delay(200);
    }
    }
  }
}
void StartLed (){
  
  for (int i = 0 ; i <=2 ;i++){
  lcd.setCursor(0,1);
  
  digitalWrite(LED2, HIGH);
  delay(500);
  digitalWrite(LED2, LOW);
  delay(500);
  }
}


