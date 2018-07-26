#include<Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(CircuitPlayground.readCap(9));
}
