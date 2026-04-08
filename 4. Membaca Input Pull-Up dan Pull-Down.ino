const int pinPullUp = 2;   
const int pinPullDown = 3; 

void setup() {
  Serial.begin(9600);
  pinMode(pinPullUp, INPUT);
  pinMode(pinPullDown, INPUT);
}

void loop() {
  int valPullUp = digitalRead(pinPullUp);
  int valPullDown = digitalRead(pinPullDown);

  Serial.print("Pull-Up: ");
  Serial.print(valPullUp);
  Serial.print(" | Pull-Down: ");
  Serial.println(valPullDown);
  delay(500);
}
