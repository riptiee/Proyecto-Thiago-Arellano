void prenderPines(int pines[], int cantidad) 
{
    for (int i = 0; i < cantidad; i++) {
        pinMode(pines[i], OUTPUT); 
        digitalWrite(pines[i], HIGH); 
    }
}

void setup() 
{
    int pines[] = {2, 3, 4, 5, 6}; 
    int cantidad = sizeof(pines)/sizeof(pines[0]); 
    prenderPines(pines, cantidad); 
}

void loop() 
{
}