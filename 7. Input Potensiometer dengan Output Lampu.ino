const int pinPot = A0;
const int pinLED = 9; // Harus menggunakan pin PWM (simbol ~)

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int nilaiPot = analogRead(pinPot);
  
  // Konversi nilai analog (0-1023) ke nilai PWM (0-255)
  int kecerahan = map(nilaiPot, 0, 1023, 0, 255);
  
  analogWrite(pinLED, kecerahan); // Mengatur terang-redup LED
}
