#define rojo 9
#define azul 10
#define verde 11

int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};
int* colores[] = {L1, L2, L3};

void setup() 
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  for (int i = 0; i < 3; i++) {
    mostrarColor(colores[i]);
    delay(1000);
  }
}

void mostrarColor(int* color) {
  
  analogWrite(rojo, color[0]);
  analogWrite(verde, color[1]);
  analogWrite(azul, color[2]);
  
  Serial.print("Color: R=");
  Serial.print(color[0]);
  Serial.print(", G=");
  Serial.print(color[1]);
  Serial.print(", B=");
  Serial.println(color[2]);
}