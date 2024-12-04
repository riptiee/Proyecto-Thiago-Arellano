#define trigger 6
#define echo 5

float medirDistancia() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  long duracion = pulseIn(echo, HIGH);
  float distancia = (duracion * 0.0343) / 2;
  return distancia; 
}

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  float distancia = medirDistancia();
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  delay(500); 
}
S