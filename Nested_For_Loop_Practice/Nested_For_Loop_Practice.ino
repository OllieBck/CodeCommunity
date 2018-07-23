#include<Adafruit_CircuitPlayground.h>

int pixelPins[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int redColor;
int greenColor;
int blueColor;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int r = 0; r < 255; r++) {
    redColor = r;
    for (int g = 0; g < 255; g++) {
      greenColor = g;
      for (int b = 0; b < 255; b++) {
        blueColor = b;
        }
      }
    for (int i = 0; i < 10; i++) {
          CircuitPlayground.setPixelColor(i, redColor, redColor, redColor);
          //delay(10);
    }
  }



}
