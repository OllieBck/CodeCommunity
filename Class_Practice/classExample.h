
#include<Adafruit_CircuitPlayground.h>

class Name {
  int buttonPin;

  public:
  Name (int pinButton) {
    buttonPin = pinButton;
    pinMode(buttonPin, INPUT);
  }

  void turnOnRGB(int ledPin, int redColor, int greenColor, int blueColor){
    int buttonRead = digitalRead(buttonPin);

    if (buttonRead == HIGH){
      CircuitPlayground.setPixelColor(ledPin, redColor, greenColor, blueColor);
    }
    else {
      CircuitPlayground.setPixelColor(ledPin, 0, 0, 0);
    }
  }
};

