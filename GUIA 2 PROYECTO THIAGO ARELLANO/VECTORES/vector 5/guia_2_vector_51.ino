#define azul 9
# define verde 10

int secuenciaAzul[] = {1, 0, 0, 1, 1, 0, 1, 1};   
int secuenciaVerde[] = {0, 1, 0, 1, 0, 0, 1, 0};  

void setup() 
{
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < sizeof(secuenciaAzul) / sizeof(secuenciaAzul[0]); i++) {

    if (secuenciaAzul[i] == 1) {
      digitalWrite(azul, HIGH);  
    } else {
      digitalWrite(azul, LOW);   
    }

    if (secuenciaVerde[i] == 1) {
      digitalWrite(verde, HIGH);  
    } else {
      digitalWrite(verde, LOW);   
    }
    delay(1000);
  }
}
