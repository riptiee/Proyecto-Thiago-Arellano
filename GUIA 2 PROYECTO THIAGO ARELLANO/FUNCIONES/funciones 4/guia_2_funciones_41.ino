#define pir 4
#define led 2
void setup() 
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    pinMode(pir, INPUT);
}

void loop()
{
    verificarMovimiento();
    delay(500);
}

void verificarMovimiento() 
{
    int movimiento = digitalRead(pir);
    if (movimiento == HIGH) {
        encenderLuz();
    } else {
        prenderLuz();
    }
}

void prenderLuz() 
{
    Serial.println("Se detecto un movimiento!");
    digitalWrite(led, HIGH);
}

void apagarLuz() 
{
    Serial.println("No se detecto ningun movimiento");
    digitalWrite(led, LOW);
}