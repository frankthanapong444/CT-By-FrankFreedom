// https://www.tinkercad.com/things/bZEKxEp07ka-neat-habbi/editel
#define DHT11_PIN A0     // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 12;
int f = 7;
int g = 8;
int GND1 = 6;
int GND2 = 11;
int di1 = 0;
int di2 = 0;
int Temp  ;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
 
  Serial.begin(9600);
}

void loop()
{
  Temp =  map(((analogRead(A0) - 20) * 3.04), 0, 1023, 0,99);
    di1 = Temp / 10;
    di2 = Temp - (di1 * 10);
    
  	Serial.print("Temp : ");
    Serial.println(Temp);
        digitalWrite( GND2, HIGH);   //digit 2
        DisplayNumber(di2);
        delay(250);
        digitalWrite( GND2, LOW);
    
        digitalWrite( GND1, HIGH);   //digit 1
        DisplayNumber(di1);
        delay(250);
        digitalWrite( GND1, LOW);
  delay (1000);
  
}
void DisplayNumber(int x) {
  switch (x) {
    case 0: zero(); break;
    case 1: one(); break;
    case 2: two(); break;
    case 3: three(); break;
    case 4: four(); break;
    case 5: five(); break;
    case 6: six(); break;
    case 7: seven(); break;
    case 8: eight(); break;
    case 9: nine(); break;
  }
}
void zero()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, HIGH);
}
void one()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}
void two()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, HIGH);
  digitalWrite( g, LOW);
}
void three()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, LOW);
}
void four()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}
void five()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}
void six()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void seven()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}
void eight()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}
void nine()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}
