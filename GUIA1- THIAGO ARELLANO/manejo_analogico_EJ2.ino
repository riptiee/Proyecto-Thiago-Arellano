
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop()
{
  analogWrite(3, 31);
  delay(250);
  analogWrite(5, 62);
  delay(250);
  analogWrite(6, 93);
  delay(250);
  analogWrite(9, 124);
  delay(250);
  analogWrite(10, 155);
  delay(250);
  analogWrite(A5, 186);
  delay(250);
  analogWrite(A4, 217);
  delay(250);
  analogWrite(A3, 250);
}