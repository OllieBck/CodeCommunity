#include<Adafruit_CircuitPlayground.h>

unsigned long previousMillis = 0;

int interval = 1000;

int ledState = false;

int ledPin = 13;

void setup(){
  pinMode(ledPin, OUTPUT);
  CircuitPlayground.begin();
}

void loop() {
  if (millis() - previousMillis >= interval) {
    previousMillis = millis();

    if (ledState == false){
      ledState = true;
    }
    else{
      ledState = false;
    }
    digitalWrite(ledPin, ledState);
  }
}
