
 // Luz
const int PORTA_7 = 7;
const int PORTA_6 = 6;

// Som
const int PIEZO = 8;

// Frequências da sirene
const int SOM_AGUDO = 1400;
const int SOM_GRAVE = 1200;

void setup() {
  pinMode(PORTA_7, OUTPUT);
  pinMode(PORTA_6, OUTPUT);
  pinMode(PIEZO, OUTPUT);
}

void loop() {
  // LED 7 aceso + som agudo (PI)
  digitalWrite(PORTA_7, HIGH);
  digitalWrite(PORTA_6, LOW);
  tone(PIEZO, SOM_AGUDO);
  delay(1000);

  // LED 6 aceso + som grave (PÓ)
  digitalWrite(PORTA_7, LOW);
  digitalWrite(PORTA_6, HIGH);
  tone(PIEZO, SOM_GRAVE);
  delay(1000);
}
