#define POTENCIOMETRO A0
#define BUZZER 7
#define TRIG 6
#define ECHO 5
#define  MSG(a,b) Serial.print(a); Serial.print(b); Serial.print("  ");
void setup()
{
  pinMode(POTENCIOMETRO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite( TRIG , LOW );
  delayMicroseconds(4);
  digitalWrite( TRIG , HIGH );
  delayMicroseconds(10);
  digitalWrite( TRIG , LOW );
  
  float duracion = pulseIn( ECHO , HIGH);
  float distancia = duracion / 57.6 ;
  int x = analogRead(POTENCIOMETRO);

  int movil = map(distancia, 1, 330, 20, 330);
  int fijo = map(x, 0, 1023, 50, 200);

  int velocidad;
  if (movil > fijo){
     velocidad = movil - fijo;
  }else{
     velocidad = fijo - movil;
  }
  
  delay(velocidad);
  digitalWrite(BUZZER,HIGH);
  delay(velocidad);
  digitalWrite(BUZZER,LOW);
  MSG("fijo: ",fijo);
  MSG("movil: ",movil);
  MSG("velocidad: ",velocidad);
  Serial.println("");
}