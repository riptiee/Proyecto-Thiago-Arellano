int conjunto_numeros[] = { 10, 4, 2 };

void setup()
{
  Serial.begin(9600);
  int tamano = sizeof(conjunto_numeros) / sizeof(conjunto_numeros[0]);
  for (int i = 0; i < tamano - 1; i++) {
    for (int h = 0; h < tamano - i - 1; h++) {
      if (conjunto_numeros[h] > conjunto_numeros[h + 1]) {
        int x = conjunto_numeros[h];
        conjunto_numeros[h] = conjunto_numeros[h + 1];
        conjunto_numeros[h + 1] = x;
      }
    }
  }
  
  Serial.println("Vector ordenado:");
  for (int i = 0; i < tamano; i++) {
    Serial.println(conjunto_numeros[i]);
  }
}

void loop()
{
}