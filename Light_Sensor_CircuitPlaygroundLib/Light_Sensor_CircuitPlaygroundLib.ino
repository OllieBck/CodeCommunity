#include <Adafruit_CircuitPlayground.h>

int lightSensor = A5;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Light Analog: ");
  Serial.print(analogRead(lightSensor));
  Serial.print(" CircuitPlayground: ");
  Serial.println(CircuitPlayground.lightSensor());
}
