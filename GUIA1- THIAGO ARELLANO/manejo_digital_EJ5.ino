// C++ code
//
void setup()
{
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);  
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT); 
}

void loop()
{
 analogWrite(3,255); //rojo
 analogWrite(5,0);
 analogWrite(6,0);
 delay(200);
 analogWrite(3,0);   //cian
 analogWrite(5,255);
 analogWrite(6,255);
 delay(200);
 analogWrite(3,0);  // verde
 analogWrite(5,0);  
 analogWrite(6,255);
 delay(200);
 analogWrite(3,255); //magenta
 analogWrite(5,255);
 analogWrite(6,0);
 delay(200);
 analogWrite(3,0);  //azul
 analogWrite(5,255);
 analogWrite(6,0);
 delay(200);
 analogWrite(3,255);  //blanco
 analogWrite(5,255);
 analogWrite(6,255);
 delay(200);
 analogWrite(3,255);  //amarillo
 analogWrite(5,0);
 analogWrite(6,255);
 delay(200);
 analogWrite(3,0);   //apagado led1
 analogWrite(5,0);
 analogWrite(6,0);
 analogWrite(9,255); // prendido led2 
 analogWrite(10,0);   // rojo
 analogWrite(11,0);
 delay(200);
 analogWrite(9,0);   //cian
 analogWrite(10,255);
 analogWrite(11,255);
 delay(200);
 analogWrite(9,0);  // verde
 analogWrite(10,0);  
 analogWrite(11,255);
 delay(200);
 analogWrite(9,255); //magenta
 analogWrite(10,255);
 analogWrite(11,0);
 delay(200);
 analogWrite(9,0);  //azul
 analogWrite(10,255);
 analogWrite(11,0);
 delay(200);
 analogWrite(9,255);  //blanco
 analogWrite(10,255);
 analogWrite(11,255);
 delay(200);
 analogWrite(9,255);  //amarillo
 analogWrite(10,0);
 analogWrite(11,255);
 delay(200);
 analogWrite(9,0);   //apagado led2
 analogWrite(10,0);
 analogWrite(11,0);
 
}