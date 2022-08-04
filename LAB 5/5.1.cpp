void setup()
{
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    int val = analogRead(A0);
    int newVal = map(val, 0, 1023, 0, 255);
    Serial.printIn(newVal);
    analogWrite(9, newVal);
    delay(10);
}