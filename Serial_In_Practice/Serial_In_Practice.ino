#include <Adafruit_CircuitPlayground.h>

 void setup(){
  Serial.begin(9600);
  CircuitPlayground.begin();
  /*while (Serial.available() <= 0) {
    Serial.println("waiting"); // send a starting message
    delay(300);              // wait 1/3 second
  }*/
}

void loop() {
  if (CircuitPlayground.leftButton() == true){
    Serial.print("h");
    CircuitPlayground.redLED(true);
    delay(100);
  }
  
  if (Serial.available() > 0) {
    CircuitPlayground.redLED(true);
    char compData = Serial.read();
    Serial.print("Value of Data: ");
    Serial.println(compData);
      delay(1000);
  }
  else{
    CircuitPlayground.redLED(false);
  }
}
