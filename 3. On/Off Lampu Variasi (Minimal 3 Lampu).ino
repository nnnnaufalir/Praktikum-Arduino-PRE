//SESUAIKAN DENGAN RANGKAIAN KALIAN, BISA LEBIH DARI 3 LAMPU, SESUAI SELERA
const int led1 = 8, led2 = 9, led3 = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Nyala bergantian (Running LED)
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
}
