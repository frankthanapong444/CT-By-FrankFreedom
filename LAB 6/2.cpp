//https://wokwi.com/projects/338991767052354132
void setup() {
  //INPUT
    pinMode(5, OUTPUT);
    pinMode(18, OUTPUT);
    pinMode(19, OUTPUT);
  //OUTPUT
    pinMode(33, INPUT);
    pinMode(32, INPUT);
    pinMode(35, INPUT);
  
  
}

void loop() {
  digitalWrite(5,digitalRead(35));
  digitalWrite(18,digitalRead(32));
  digitalWrite(19,digitalRead(33));
}

