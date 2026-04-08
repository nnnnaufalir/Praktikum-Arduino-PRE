const int pinPot = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int nilaiPot = analogRead(pinPot); // Rentang nilai 0 - 1023
  Serial.println(nilaiPot);
  delay(100);
}
