void setup() {
  pinMode(A0, INPUT);  
  pinMode(5, OUTPUT); 
}

void loop() {
  
  int potencia = analogRead(A0);
  int frecuencia = map(potencia, 0, 1023, 100, 1000);

  tone(5, frecuencia);
}
