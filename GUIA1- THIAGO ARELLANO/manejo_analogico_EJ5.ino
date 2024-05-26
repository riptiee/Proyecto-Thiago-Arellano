void setup() {
  
  pinMode(9, OUTPUT);   
  pinMode(10, OUTPUT);   
  pinMode(11, OUTPUT);  
  
}

void loop() {

  int potencia_rojo = analogRead(A0);
  int potencia_azul = analogRead(A1);
  int potencia_verde = analogRead(A2);
  
  potencia_rojo = map(potencia_rojo, 0, 1023, 0, 255);
  potencia_azul = map(potencia_azul, 0, 1023, 0, 255);
  potencia_verde = map(potencia_verde, 0, 1023, 0, 255);

 
  analogWrite(9, potencia_rojo);
  analogWrite(10, potencia_azul);
  analogWrite(11, potencia_verde);
}
