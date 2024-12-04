int conjunto_numeros[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

void setup() 
{
  Serial.begin(9600);
  
  float suma = 0;
  int tamano = sizeof(conjunto_numeros) / sizeof(conjunto_numeros[0]);

  for (int i = 0; i < tamano; i++) {
    suma += conjunto_numeros[i]; 
  }

  float media = suma / tamano;
  Serial.println("La media del array es: " + String(media)); 
}

void loop() 
{
 }
