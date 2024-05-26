void setup() {
  pinMode(A5, INPUT);  
  pinMode(3, OUTPUT);  
}

void loop() {
  
  int parpadeo = analogRead(A5);
  int tiempo = map(parpadeo, 0, 1023, 0, 10000);
  
  digitalWrite(3, HIGH);
  delay(tiempo);
  digitalWrite(3, LOW);
  delay(tiempo);
}
