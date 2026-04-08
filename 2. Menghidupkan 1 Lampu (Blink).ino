const int pinLED = 8; //SESUAIKAN PIN DENGAN RANGKAIAN KALIAN!

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH); // Menyalakan LED
  delay(1000);
  digitalWrite(pinLED, LOW);  // Mematikan LED
  delay(1000);
}
