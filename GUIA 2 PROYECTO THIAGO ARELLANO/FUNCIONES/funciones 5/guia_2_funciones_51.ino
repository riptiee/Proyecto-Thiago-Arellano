void setup() 
{
    Serial.begin(9600);
    
    int lados = 6;  
    int resultado = lanzarDado(lados);
    
    Serial.print("Lanzaste un dado de 6 lados y obtuviste: ");
    Serial.println(resultado);
}

void loop()
{}

int lanzarDado(int lados) {
    randomSeed(analogRead(0));  
    return random(1, lados + 1); 
}