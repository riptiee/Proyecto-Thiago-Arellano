// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  tone(2, 400);
  delay(350); 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  tone(2, 1000);
  delay(350); 
}