// C++ code
//
void setup()
{
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
}

void loop()
{
  digitalWrite( 6 , HIGH );
  digitalWrite( 7 , HIGH );
  digitalWrite( 5 , HIGH );
  delay (1250);
  digitalWrite( 6 , LOW );
  digitalWrite( 7 , LOW );
  digitalWrite( 5 , LOW );
  delay (1250);
}