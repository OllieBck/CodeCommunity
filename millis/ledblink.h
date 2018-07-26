#include<Adafruit_CircuitPlayground.h>

class Blinker {
    bool ledState = false; // holds if LED is on of off

    unsigned long previousTime; // container to hold time

    int interval;

    int ledPin;

  public:
    Blinker(int ledBulb) {
      ledPin = ledBulb;
    }

    void blinkLed(int duration, int redColor, int greenColor, int blueColor) {
      interval = duration;
      if (millis() - previousTime >= interval) {
        previousTime = millis();

        if (ledState == false) {
          ledState = true;
          CircuitPlayground.setPixelColor(ledPin, redColor, greenColor, blueColor);
        }
        else {
          ledState = false;
          CircuitPlayground.setPixelColor(ledPin, 0, 0, 0);
        }
      }
    }
};

