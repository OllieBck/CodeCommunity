#include <Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X Motion: ");
  Serial.println(CircuitPlayground.motionX());
  //Serial.print(" Y Motion: ");
  //Serial.println(CircuitPlayground.motionY());
//  Serial.print(" Z Motion: ");
//  Serial.println(CircuitPlayground.motionZ());
  delay(1000);
}
