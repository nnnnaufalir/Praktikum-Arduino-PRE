const int pinBtn = 2; // Menggunakan metode Pull-Up 
const int pinLED = 8;

void setup() {
  pinMode(pinBtn, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  int statusTombol = digitalRead(pinBtn);
  
  // Karena Pull-Up, tombol ditekan akan bernilai LOW
  if (statusTombol == LOW) { 
    digitalWrite(pinLED, HIGH);
  } else {
    digitalWrite(pinLED, LOW);
  }
}
