#include <Adafruit_CircuitPlayground.h>

int buttonPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonPress = digitalRead(buttonPin);

  if (buttonPress == HIGH) {
    CircuitPlayground.setPixelColor(0, 0, 255, 0);
    CircuitPlayground.setPixelColor(4, 0, 255, 0);
    CircuitPlayground.setPixelColor(5, 0, 255, 0);
    CircuitPlayground.setPixelColor(9, 0, 255, 0);
  }
  else {
    CircuitPlayground.clearPixels();
  }
}
