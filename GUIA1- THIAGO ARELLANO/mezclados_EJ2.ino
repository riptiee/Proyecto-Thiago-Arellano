void setup() {
  pinMode(A0, INPUT_PULLUP);  
  pinMode(A1, INPUT);         
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  
  if(digitalRead(A0) == LOW){ 
    
    int potenciometro = analogRead(A1);
    int potencia = map(potenciometro, 0, 1023, 0, 255);
    int rojo = 9;
    int azul = 10;
    int verde = 11;
    
    if(potencia <= 85){
      rojo = map(potencia, 0, 85, 0, 255);
      verde = 0;
      azul = 0;
    }else if (potencia <= 170){
      rojo = 0;
      verde = map(potencia, 85, 170, 0, 255);
      azul = 0;
    }else if (potencia <= 255){
      rojo = 0;
      verde = 0;
      azul = map(potencia, 170, 255, 0, 255);
    }

    analogWrite(9, rojo);
    analogWrite(10,azul);
    analogWrite(11,verde);
  }else{
    analogWrite(9, 0);
    analogWrite(10,0);
    analogWrite(11,0);
  }
}
