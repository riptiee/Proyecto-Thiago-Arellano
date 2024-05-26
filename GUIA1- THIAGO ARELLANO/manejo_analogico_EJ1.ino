
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  analogWrite(3, 50);
  delay(250);
  analogWrite(5, 100);
  delay(250);
  analogWrite(6, 150);
  delay(250);
  analogWrite(9, 200);
  delay(250);
  analogWrite(10, 250);
}