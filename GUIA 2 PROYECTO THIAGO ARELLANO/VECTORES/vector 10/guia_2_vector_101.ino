#define buzzer 3
int numeros[10];

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Numeros generados:");
  
  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11); 
    Serial.print(numeros[i]);
    Serial.print(" ");
    if (numeros[i] == 5) {
      sonarBuzzer();
    }
  }
  Serial.println(); 
}

void loop() {
}

void sonarBuzzer() {
  digitalWrite(buzzer, HIGH);
  delay(500);                    
  digitalWrite(buzzer, LOW);  
}
