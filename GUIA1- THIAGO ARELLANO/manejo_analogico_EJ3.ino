void setup() {

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
    
    analogWrite(9,255); // rojo
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(300); 
    analogWrite(9 , 0);
    analogWrite(10,255);  // cian
    analogWrite(11,255);
    delay(300); 
    analogWrite(9, 255);
    analogWrite(10 , 0);  // amarillo
    analogWrite(11,255);
    delay(300); 
    
}

  
 