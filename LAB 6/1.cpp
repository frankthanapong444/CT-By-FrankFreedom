//https://wokwi.com/projects/338985302411444819
int LED2=2;
int LED4=4;
int LED5=5;


void setup() {
  pinMode(LED2, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
  digitalWrite(LED5 ,HIGH);
  delay(300);
  digitalWrite(LED5, LOW);
  delay(300);
  
  digitalWrite(LED4 ,HIGH);
  delay(300);
  digitalWrite(LED4, LOW);
  delay(300);
  
  digitalWrite(LED2 ,HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(300);
}