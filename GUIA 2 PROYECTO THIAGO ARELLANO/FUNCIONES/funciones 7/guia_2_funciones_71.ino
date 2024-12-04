void ordenaVectores(int vector[], int cantidad) {
  for (int i = 0; i < cantidad - 1; i++) {
    for (int h = i + 1; h < cantidad; h++) {
      if (vector[i] < vector[h]) {
        int x = vector[i];
        vector[i] = vector[h];
        vector[h] = x;
      }
    }
  }
}

void setup() {
  
  Serial.begin(9600); 
  int numeros[] = {7, 3, 5, 9, 1, 4, 8, 2, 6, 0};
  int cantidad = sizeof(numeros) / sizeof(numeros[0]);

  Serial.println("Vector normal:");
  for (int i = 0; i < cantidad; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
  ordenaVectores(numeros, cantidad);
  
  Serial.println("Vector ordenado:");
  for (int i = 0; i < cantidad; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {

}
