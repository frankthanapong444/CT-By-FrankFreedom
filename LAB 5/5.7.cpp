//https://www.tinkercad.com/things/dFRvUWY1Fyd
#include <Servo.h>
Servo servo;
void setup()
{
    pinMode(3, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(11, OUTPUT);

    pinMode(A0, INPUT);

    servo.attach(9); //กำหนด servo ที่ต่ออยู่กับ ขา9
    Serial.begin(9600);
}
void loop()
{
    int va1 = map(analogRead(A0), 0, 1023, 0, 180);
    Serial.print("val = ");
    Serial.println(va1);
    servo.write(va1);
    delay(15);
    servo.write(va1);

    if (analogRead(0) <= 10)
    {
       Green();
    }

else if (va1 < 85)
{
   	   Green();
    
}

else if (va1 > 85 && va1 <= 95)
{
   	  Yellow ();
}

else if (va1 > 95 && va1 <= 170)
{
      Yellow ();
}

else if (va1 > 170 && va1 <= 180)
{
      Red();
}

else if (va1 >= 180 )
{
    Red();
  }
 }
void Green (){
    analogWrite(3, HIGH);
    analogWrite(6, LOW);
    analogWrite(11, LOW);
  
  }
void Yellow (){
    analogWrite(3, LOW);
    analogWrite(6, HIGH);
    analogWrite(11, LOW);
}
void Red (){
    analogWrite(3, LOW);
    analogWrite(6, LOW);
    analogWrite(11, HIGH);
}



