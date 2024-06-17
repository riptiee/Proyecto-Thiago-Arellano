#define  TRIG 5
#define  ECHO 6
#define  LED_R1 A0
#define  LED_B1 A1
#define  LED_G1 A2
#define  LED_R2 9
#define  LED_G2 11
#define  LED_B2 10
#define  BUZZER 12
#define PIR 2
#define  MSG(a,b) Serial.print(a); Serial.println(b);

void setup(){
  
  pinMode(LED_R1, OUTPUT);
  pinMode(LED_G1, OUTPUT);
  pinMode(LED_B1, OUTPUT);
  pinMode(LED_R2, OUTPUT);
  pinMode(LED_G2, OUTPUT);
  pinMode(LED_B2, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(ECHO, INPUT); 
  pinMode(TRIG, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
  
}void loop(){
 
  digitalWrite( TRIG , LOW );
  delayMicroseconds(4);
  digitalWrite( TRIG , HIGH );
  delayMicroseconds(10);
  digitalWrite( TRIG , LOW );
  float duracion = pulseIn( ECHO , HIGH);
  float distancia = duracion * 10 / 292 / 2;
  MSG("Distancia: ",distancia);
  
  analogWrite(LED_R1,0);
  analogWrite(LED_R2,0);
  analogWrite(LED_G1,0);
  analogWrite(LED_B2,0);
  analogWrite(LED_G2,0);
  analogWrite(LED_B1,0);
  
  // sesnor alarma //
  
  if(distancia <80){
    analogWrite(LED_R2,255);
    tone(12, 400);
    delay(350); 
    tone(12, 1000);
    delay(350); 
  }else{
    analogWrite(LED_R2,255);
    analogWrite(LED_G2,255);
    noTone(12);
  }
  
  // sensor infrarojo //
  
  if(digitalRead(PIR) == HIGH){
    analogWrite(LED_R1, 255);
    analogWrite(LED_G1, 255);
    delay(300);
  }else{
    analogWrite(LED_G1, 255);
  }
}