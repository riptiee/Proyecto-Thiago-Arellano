bool esMultiplo(int numero, int divisor) {
  if (divisor == 0) {
    return false;
  }
  return (numero % divisor == 0);
}

void setup() {
  
  Serial.begin(9600); 
  //numeros random//
  int numero1 = 10;
  int divisor1 = 5;
  int numero2 = 10;
  int divisor2 = 3;

  if (esMultiplo(numero1, divisor1)) {
    Serial.print(numero1);
    Serial.print(" es multiplo de ");
    Serial.println(divisor1);
  } else {
    Serial.print(numero1);
    Serial.print(" NO es multiplo de ");
    Serial.println(divisor1);
  }

  if (esMultiplo(numero2, divisor2)) {
    Serial.print(numero2);
    Serial.print(" es multiplo de ");
    Serial.println(divisor2);
  } else {
    Serial.print(numero2);
    Serial.print(" NO es múltiplo de ");
    Serial.println(divisor2);
  }
}

void loop() {

}
