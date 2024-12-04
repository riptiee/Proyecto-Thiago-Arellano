void setup() 
{
  Serial.begin(9600);
  int numeros[] = {2, 6, 10, 11};

  for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
    int numero = numeros[i];
    Serial.print("Primeros 5 multiplos de ");
    Serial.print(numero);
    Serial.println(":");

    for (int h = 1; h <= 5; h++) {
      int multiplo = numero * h;
      Serial.print(multiplo);
      Serial.print(" ");
      Serial.println();
    }
  }
}
void loop() 
{
}
