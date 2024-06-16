#define  LED_R 9
#define  LED_B 10
#define  LED_G 11
#define  LDR A0
#define  TMP A1
#define  MSG(a,b) Serial.print(a); Serial.println(b);

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LDR , INPUT );
  pinMode(TMP , INPUT );
  Serial.begin(9600);
}

void loop()
{
  int x = analogRead(LDR);
  int luz = map(x,1,310,0,100);
  float temperatura = (analogRead(TMP) * 5.0 / 1024) * 100 - 50;
  MSG("El nivel actual de luz es:",luz);
  MSG("Y la temperatura actual de calor es es: ",temperatura);
  if( temperatura >90 && (luz >= 30 && luz <= 70))
  {
    analogWrite(LED_R , luz);
    digitalWrite(LED_G ,LOW);
    digitalWrite(LED_B ,LOW);
  }else if((temperatura >= 18 && temperatura <= 90) && (luz >= 30 && luz <= 70)){
    analogWrite(LED_G , luz);
    digitalWrite(LED_R ,LOW);
    digitalWrite(LED_B ,LOW);
  }else if( temperatura < 18 && (luz >= 30 && luz <= 70)){
    analogWrite(LED_B , luz);
    digitalWrite(LED_G ,LOW);
    digitalWrite(LED_R ,LOW);  
  }else{
    digitalWrite(LED_R ,LOW);
    digitalWrite(LED_B ,LOW);
    digitalWrite(LED_G ,LOW);
  }
  delay(1000);
}