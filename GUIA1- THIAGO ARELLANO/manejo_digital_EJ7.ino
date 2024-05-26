int contador = 0;
bool botonEstado = HIGH;
bool botonPrendido = false;

void setup()
{
  pinMode(A2,INPUT_PULLUP);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);  
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT); 
}

void loop()
{
  if(digitalRead(A2) == LOW){
    contador = contador + 1;
    if(contador > 3){
      contador = 1; 
    }
  }else{

  analogWrite(A3, 0);
  analogWrite(A4, 0);
  analogWrite(A5, 0);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
 
  }if(contador == 1){
    
    analogWrite(A3,255); // led1
    analogWrite(A4,0);  // led1
    analogWrite(A5,0); // led1
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    
  }else if(contador == 2){
    
    analogWrite(A3,0);
    analogWrite(A4,0);
    analogWrite(A5,0);
    analogWrite(3,0);     // led2
    analogWrite(5,255);  // led2
    analogWrite(6,0);   // led2
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    
  }else if(contador == 3){
    
    analogWrite(A3,0);
    analogWrite(A4,0);
    analogWrite(A5,0);
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
    analogWrite(9, 0);   // led3
    analogWrite(10,0);  // led3
    analogWrite(11,255); // led3

 }  
}
    