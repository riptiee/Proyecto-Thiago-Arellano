void setup() 
{
  Serial.begin(9600);
  float numeros[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
  int tamano = sizeof(numeros) / sizeof(numeros[0]);
  
  float maximo = numeros[0]; 
  for (int i = 1; i < tamano; i++) {
    if (numeros[i] > maximo) {
      maximo = numeros[i];
    }
  }
  
  Serial.print("El número más grande es: ");
  Serial.println(maximo);
}

void loop() 
{
}
