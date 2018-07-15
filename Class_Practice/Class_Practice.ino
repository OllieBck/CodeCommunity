#include"classExample.h"

Name redLED(4);
Name greenLED(9);

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 10; i++){
    redLED.turnOnRGB(i, 255, 0, 0);
  }

  for (int t = 0; t < 10; t++){
    greenLED.turnOnRGB(t, 0, 255, 0);  
  }
  
  
}
