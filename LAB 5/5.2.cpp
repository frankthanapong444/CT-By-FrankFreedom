void setup ()
{
    pinMode (2,OUTPUT);
    pinMode (3,OUTPUT);
    pinMode (4,OUTPUT);

    pinMode (A0,INPUT);
    pinMode (A1,INPUT);
    pinMode (A2,INPUT);
    Serial.begin(9600);
  	Serial.println(">>Start<<");

}
void loop()
{
    int va11 = map(analogRead(A0),0,1023,0,255);
    int va12 = map(analogRead(A1),0,1023,0,255);
    int va13 = map(analogRead(A2),0,1023,0,255);
  	
//ควบคุมLED
 analogWrite (2, va11);
 analogWrite (3, va12);
 analogWrite (4, va13);
 LedRed   (va11);
 LedGreen (va12);
 LedBlue  (va13);
}
void LedRed (int x ){
    if (x>0){
     Serial.print ("RED : ");
     Serial.println (x);
     delay(1000);
    }
}
void LedGreen(int z){
  if (z>0){
     Serial.print ("GREEN : ");
     Serial.println (z);
     delay(100);
    }
}
void LedBlue (int y){
    if (y>0){
    Serial.print ("BLUE : ");
     Serial.println (y);
     delay(1000);
    }
}

