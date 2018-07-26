#include"ledblink.h"

Blinker blueLed(6);
Blinker redLed(1);

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  blueLed.blinkLed(100, 0, 0, 255);
  redLed.blinkLed(1000, 255, 0, 0);
}










