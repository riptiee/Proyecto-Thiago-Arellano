#define led 3
#define boton 4
const int maximo_datos = 5;
int datos[maximo_datos];
int posiciones = 0;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  if (posiciones < maximo_datos) {
    digitalWrite(led, HIGH);
    delay(500);

    while (digitalRead(boton) == HIGH) {
    }
    digitalWrite(led, LOW);
    delay(500);

    if (digitalRead(boton) == LOW) {
      datos[posiciones] = 1;
    } else {
      datos[posiciones] = 0;
    }
    posiciones ++;
    
    while (digitalRead(boton) == LOW) {
    }
    delay(1000);
  } else {
    Serial.print("Secuencia: ");
    for (int i = 0; i < maximo_datos; i++) {
      Serial.print(datos[i]);
      if (i < maximo_datos - 1) {
        Serial.print(", ");
      }
    }
    Serial.println();

    posiciones = 0;
    delay(2000);
  }
}