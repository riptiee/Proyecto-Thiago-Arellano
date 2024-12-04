void configurarPines(int pinesRandom[], int configuraciones[], int cantidadPines) {
  for (int i = 0; i < cantidadPines; i++) {
    if (configuraciones[i] == 0) {
      pinMode(pinesRandom[i], INPUT);
    } else if (configuraciones[i] == 1) {
      pinMode(pinesRandom[i], OUTPUT);
    }
  }
}

void setup() {
  Serial.begin(9600); 
  int pinesRandom[] = {2, 3, 4, 5, 6};
  int configuraciones[] = {1, 0, 1, 0, 1};  
  configurarPines(pinesRandom, configuraciones, 5);
  for (int i = 0; i < 5; i++) {
    Serial.print("Pin ");
    Serial.print(pinesRandom[i]);
    Serial.print(" configurado como ");
    if (configuraciones[i] == 0) {
      Serial.println("INPUT");
    } else {
      Serial.println("OUTPUT");
    }
  }
}

void loop() {
 
}
