#include"classAdvExample.h"
Blinker redLed(0);
Blinker greenLed(5);
Blinker blueLed(9);

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  redLed.blinkLed(500, 255, 0, 0);
  greenLed.blinkLed(5000, 0, 200, 0);
  blueLed.blinkLed(200, 0, 0, 200);
}
