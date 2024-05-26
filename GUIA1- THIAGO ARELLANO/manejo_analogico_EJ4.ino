void setup() {
  pinMode(A0 , INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop() {
   
    int potencia = analogRead(A0);
  
    potencia = map(potencia, 0 , 1023, 0 , 255);
      
    analogWrite(3,potencia);
    analogWrite(5,potencia);  // magenta
    analogWrite(6,0);
  
    analogWrite(9,potencia);
    analogWrite(10,0);  // amarillo
    analogWrite(11,potencia);
  
    
}

  
 