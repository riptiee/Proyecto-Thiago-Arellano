int contador = 0;

void setup() {
  pinMode(A5, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
  if(digitalRead(A5) == LOW){
    contador = contador + 1;
    if(contador > 7){
      contador = 1; 
    }
  }else{

  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);

  }if(contador == 1){
    
    analogWrite(9,255); // rojo
    analogWrite(10, 0);
    analogWrite(11, 0);
    
  }else if(contador == 2){
    
    analogWrite(9 , 0);
    analogWrite(10,255);  // cian
    analogWrite(11,255);
    
  }else if(contador == 3){
    
    analogWrite(9, 0);
    analogWrite(10 , 0);  //verde
    analogWrite(11,255);
    
  }else if(contador == 4){
    
    analogWrite(9, 255);
    analogWrite(10,255);  //magenta
    analogWrite(11,  0);
    
  }else if(contador == 5){
    
    analogWrite(9 , 0);
    analogWrite(10,255);  // azul 
    analogWrite(11,  0);
    
  }else if(contador == 6){
    
    analogWrite(9 ,255);
    analogWrite(10,255);  // blanco
    analogWrite(11,255);
    
  }else if(contador == 7){
    
    analogWrite(9, 255);
    analogWrite(10 , 0);  // amarillo
    analogWrite(11,255);
  } 
}

  
 