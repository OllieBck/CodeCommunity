#include<Adafruit_CircuitPlayground.h>

class Blinker{
  unsigned long previousMillis;

  bool ledState = false;

  int ledPin;

public:
  Blinker(int ledBulb){
    ledPin = ledBulb;
    pinMode(ledPin, OUTPUT);
  }

  void blink(int duration){
    if (millis() - previousMillis >= duration){
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
};

Blinker blinkFast(13);

void setup(){
  CircuitPlayground.begin();
}

void loop(){
  blinkFast.blink(1000);
}
