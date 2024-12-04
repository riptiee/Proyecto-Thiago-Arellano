void multiplos(int vector[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    int aleatorio = random(0, 11); 
    vector[i] = aleatorio * 10;
  }
}

void setup() {
  Serial.begin(9600);  
  int numeros[5];
  multiplos(numeros, 5);
  Serial.println("Vector con múltiplos de 10:");
  for (int i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {

}
