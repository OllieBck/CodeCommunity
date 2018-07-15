#include <Adafruit_CircuitPlayground.h>

const int buttonPin = 4;
int ledPin = 17;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPress = digitalRead(buttonPin);

  if (buttonPress == HIGH) {
    CircuitPlayground.setPixelColor(0, 0, varColor, 0);
    CircuitPlayground.setPixelColor(4, 0, varColor, 0);
    CircuitPlayground.setPixelColor(5, 0, varColor, 0);
    CircuitPlayground.setPixelColor(9, 0, varColor, 0);
  }
  else {
    CircuitPlayground.clearPixels();
  }
}

