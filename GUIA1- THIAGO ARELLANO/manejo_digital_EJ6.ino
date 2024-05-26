void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5 , INPUT_PULLUP);
}

void loop()
{
  if ( digitalRead(5) == HIGH)
  {
    digitalWrite( 3 , LOW);
 }else{
   digitalWrite( 3 , HIGH);
   delay(300);
   digitalWrite( 3 , LOW);
   delay(300);
 }
}