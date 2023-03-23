#define FAN 23

void setup() {
  pinMode(FAN, OUTPUT);
}

void loop() {
  digitalWrite(FAN, HIGH);
  delay(5000);
  digitalWrite(FAN, LOW);
  delay(5000);
}