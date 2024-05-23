void setup()
{
  pinMode( A1 , OUTPUT);
  pinMode( 3 , INPUT_PULLUP);
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT);
  pinMode( 11 , OUTPUT);
}

void loop()
{
 if ( digitalRead(3) == LOW)
 {
   digitalWrite(9 , LOW);
   digitalWrite(10, LOW);
   digitalWrite(11 , LOW);
 }else{
   
   int tiempo = analogRead(A1);
   
   int NASHE = map( tiempo ,0,1023,200,1500);
     
   digitalWrite(9 , HIGH );
   digitalWrite(10 , LOW );
   digitalWrite(11, LOW );
   delay( NASHE );
   digitalWrite(9 , LOW );
   digitalWrite(10 , HIGH );
   digitalWrite(11, LOW );
   delay( NASHE );
   digitalWrite(9 , LOW );
   digitalWrite(10 , HIGH );
   digitalWrite(11, HIGH );
  delay( NASHE );




 }
}