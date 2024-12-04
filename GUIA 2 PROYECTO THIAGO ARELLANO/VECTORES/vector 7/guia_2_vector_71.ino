#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define longitud_led 5
int pines[longitud_led] = {led1, led2, led3, led4, led5}; 
void setup() 
{
  for (int i = 0; i < 5; i++) {
    pinMode(pines[i], OUTPUT);
  }
}
void loop() 
{
  for (int i = 0; i < 5; i++) {
    for (int h = 0; h < 5; h++) {
      digitalWrite(pines[h], LOW);
    }
    digitalWrite(pines[i], HIGH);
    delay(500);
  }
}
