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
  if (CircuitPlayground.leftButton() == true){
    Serial.write('h');
  }
  
  if (Serial.available() > 0) {
    char compData = Serial.read();
    Serial.print("Value of Data: ");
    Serial.println(compData);
  }
}
