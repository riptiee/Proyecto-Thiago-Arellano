#define buzzer 6
#define nota_c4  262
#define nota_d4  294
#define nota_e4  330
#define nota_f4  349
#define nota_g4  392
#define nota_a4  440
#define nota_b4  494
#define nota_c5  523

void tocarNota(int nota, int duracion) {
  tone(buzzer, nota, duracion);
  delay(duracion * 1.30); 
}

void melodia1() {
  tocarNota(nota_c4, 500);
  tocarNota(nota_e4, 500);
  tocarNota(nota_g4, 500);
  tocarNota(nota_c5, 500);
  noTone(buzzer); 
}

void melodia2() {
  tocarNota(nota_g4, 400);
  tocarNota(nota_f4, 400);
  tocarNota(nota_e4, 400);
  tocarNota(nota_d4, 400);
  tocarNota(nota_c4, 600);
  noTone(buzzer); 
}

void melodia3() {
  tocarNota(nota_e4, 300);
  tocarNota(nota_g4, 300);
  tocarNota(nota_a4, 300);
  tocarNota(nota_b4, 300);
  tocarNota(nota_c5, 500);
  noTone(buzzer); 
}

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  melodia1();
  delay(1000);
  melodia2();
  delay(1000); 
  melodia3();
  delay(1000); 
}
