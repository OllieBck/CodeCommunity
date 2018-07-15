
#include<Adafruit_CircuitPlayground.h>

class Blinker {
  int ledPin;
  unsigned long previousMillis = 0;

  bool ledState = false;

  int redValue;
  int greenValue;
  int blueValue;

  public:
  Blinker (int ledBulb) {
    ledPin = ledBulb;
  }

  void blinkLed(int interval, int redColor, int greenColor, int blueColor){
    unsigned long currentMillis = millis();
    
    if (currentMillis - previousMillis >= interval){
      previousMillis = currentMillis;
      if (ledState == false) {
        ledState = true;
        redValue = 0;
        greenValue = 0;
        blueValue = 0;
      }
      else {
        ledState = false;
        redValue = redColor;
        greenValue = greenColor;
        blueValue = blueColor;
      }
      CircuitPlayground.setPixelColor(ledPin, redValue, greenValue, blueValue);
    }
  }
};

