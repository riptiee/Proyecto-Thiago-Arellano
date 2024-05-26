int luz1=2;
int luz2=3;
int luz3=4;
int luz4=5;
int luz5=6;
int luz6=7;
int luz7=8;
int luz8=9;
int luz9=10;
int luz10=11;

void setup()
{
    pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{ 
  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
   delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
   delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
   delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
   delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
   delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
    delay(1000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
    delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
    delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
    delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
    delay(1000);
}