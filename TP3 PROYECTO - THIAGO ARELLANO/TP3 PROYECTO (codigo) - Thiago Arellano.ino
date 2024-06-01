void setup() 
{
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT);  
  Serial.begin(9600); 
}

void loop()
{
  int pot1 = analogRead(A1);
  int pot2 = analogRead(A2);
  int pot3 = analogRead(A3);
  int potencia1 = map(pot1, 0, 1023, 0, 255);
  int potencia2 = map(pot2, 0, 1023, 0, 255);
  int potencia3 = map(pot3, 0, 1023, 0, 255);

  if(analogRead(A0) == LOW)
  {
    Serial.println("Tiene 5 segs para manejar los potenciometros");
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(5000);

    pot1 = analogRead(A1);
    pot2 = analogRead(A2);
    pot3 = analogRead(A3);
    potencia1 = map(pot1, 0, 1023, 0, 255);
    potencia2 = map(pot2, 0, 1023, 0, 255);
    potencia3 = map(pot3, 0, 1023, 0, 255);

    Serial.print("El LED esta usando esta configuracion de colores RGB:(");
    Serial.print(potencia1);
    Serial.print("; ");
    Serial.print(potencia2);
    Serial.print("; ");
    Serial.print(potencia3);
    Serial.println(")");

    analogWrite(9, potencia3); 
    analogWrite(10, potencia2); 
    analogWrite(11, potencia1); 
    delay(5000);
    
  }else{
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
  }
}
