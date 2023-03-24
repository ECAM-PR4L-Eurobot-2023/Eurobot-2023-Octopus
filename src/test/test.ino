#include <ESP32Servo.h>

#define FAN 23
#define TRAP_LEFT 25
#define TRAP_RIGHT 33

Servo trapLeft;
Servo trapRight;

void setup() {
  pinMode(FAN, OUTPUT);
  trapLeft.attach(TRAP_LEFT);
  trapRight.attach(TRAP_RIGHT);
}

void loop() {
  trapLeft.write(0);
  delay(1000);
  trapLeft.write(95);
  delay(200);
  digitalWrite(FAN, HIGH);
  delay(10000);
  digitalWrite(FAN, LOW);
  trapLeft.write(0);
  while(1);
}