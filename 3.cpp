//https://wokwi.com/projects/338994125759054419
void setup(){
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  pinMode(15, OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(5,  OUTPUT);
}
void loop(){
  int va11 = map(analogRead(13),0,1023,0,255);
  int va12 = map(analogRead(12),0,1023,0,255);
  int va13 = map(analogRead(14),0,1023,0,255);
  analogWrite(15,va11);
  analogWrite(4,va12);
  analogWrite(5,va13);
}
