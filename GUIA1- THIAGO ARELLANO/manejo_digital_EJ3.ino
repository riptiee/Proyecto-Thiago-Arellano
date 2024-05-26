int luzPAR1=2;
int luzIMPAR1=3;
int luzPAR2=4;
int luzIMPAR2=5;
int luzPAR3=6;
int luzIMPAR3=7;
int luzPAR4=8;
int luzIMPAR4=9;
int luzPAR5=10;
int luzIMPAR5=11;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{ 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(luzPAR1, HIGH);
  digitalWrite(luzPAR2, HIGH);
  digitalWrite(luzPAR3, HIGH);
  digitalWrite(luzPAR4, HIGH);
  digitalWrite(luzPAR5, HIGH);
  delay(1000);
  digitalWrite(luzPAR1, LOW);
  digitalWrite(luzPAR2, LOW);
  digitalWrite(luzPAR3, LOW);
  digitalWrite(luzPAR4, LOW);
  digitalWrite(luzPAR5, LOW);
  digitalWrite(luzIMPAR1, HIGH);
  digitalWrite(luzIMPAR2, HIGH);
  digitalWrite(luzIMPAR3, HIGH);
  digitalWrite(luzIMPAR4, HIGH);
  digitalWrite(luzIMPAR5, HIGH);
  delay(1000);
  digitalWrite(luzIMPAR1, LOW);
  digitalWrite(luzIMPAR2, LOW);
  digitalWrite(luzIMPAR3, LOW);
  digitalWrite(luzIMPAR4, LOW);
  digitalWrite(luzIMPAR5, LOW);
  delay(1000);
}