#include <Adafruit_CircuitPlayground.h>

 void setup(){
  Serial.begin(9600);
  CircuitPlayground.begin();
  while (Serial.available() <= 0) {
    Serial.println("waiting"); // send a starting message
    delay(300);              // wait 1/3 second
  }
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    char compData = Serial.read();
    // read the sensor:
    float sensorValue = CircuitPlayground.motionX();
    // print the results:
    Serial.print("X Value: ");
    Serial.print(sensorValue);
    Serial.print(" Value of Data: ");
    Serial.println(compData);
  }
}
