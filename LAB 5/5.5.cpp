void setup ()
{
    pinMode (3,OUTPUT);
    pinMode (6,OUTPUT);
    pinMode (11,OUTPUT);

    pinMode (A0,INPUT);
    pinMode (A1,INPUT);
    pinMode (A2,INPUT);
    Serial.begin(9600);

}
void loop()
{
    int va11 = map(analogRead(A0),0,1023,0,255);
    int va12 = map(analogRead(A1),0,1023,0,255);
    int va13 = map(analogRead(A2),0,1023,0,255);
//ควบคุมRGB
 analogWrite (11, va11); 
 analogWrite (6, va12);
 analogWrite (3, va13);   
}
//https://www.tinkercad.com/things/exq9pKclPBi