#define led 8 

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};
  for (int i = 0; i < sizeof(secuencia) / sizeof(secuencia[0]); i++) {
    if (secuencia[i] == 1){
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
    
    delay(1000); 
  }
}
