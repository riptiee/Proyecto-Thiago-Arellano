#define p_rojo 3
#define p_azul 5
#define p_verde 6

#define rgb(rojo, verde, azul) \
  analogWrite(p_rojo, rojo); \
  analogWrite(p_verde, verde); \
  analogWrite(p_azul, azul); \
  Serial.print("Rojo: "); Serial.print(rojo); \
  Serial.print(" | Verde: "); Serial.print(verde); \
  Serial.print(" | Azul: "); Serial.println(azul);

void setup() {
  pinMode(p_rojo, OUTPUT);
  pinMode(p_azul, OUTPUT);
  pinMode(p_verde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int rojo = 0; rojo <= 255; rojo += 5) {
    for (int verde = 0; verde <= 255; verde += 5) {
      for (int azul = 0; azul <= 255; azul += 5) {
        rgb(rojo, verde, azul);
        delay(10);
    }
  }
 }
}
