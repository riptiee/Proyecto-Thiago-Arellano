// C++ code
//
void setup()
{
  pinMode(11, OUTPUT); //buzzer

  pinMode(6, OUTPUT); // led rojo

  pinMode(7, OUTPUT); // led magneta
  pinMode(8, OUTPUT);

  pinMode(9, OUTPUT);  // led cian
  pinMode(10, OUTPUT);
 
}

void loop()
{
  analogWrite(6, 255);
  delay(1000);
  analogWrite(6, 0);
  delay(1000);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  analogWrite(10, 250);
  analogWrite(9, 250);
  delay(1000);
  digitalWrite(11, LOW);
  analogWrite(10, 0);
  analogWrite(9, 0);
  delay(1000);
  digitalWrite(11, HIGH);
}