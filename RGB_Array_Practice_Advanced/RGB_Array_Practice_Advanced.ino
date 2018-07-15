#include<Adafruit_CircuitPlayground.h>

int pixelPins[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int r = 50; r < 256; r = r + 5) {
    for (int g = 100; g < 256; g = g + 5) {
      CircuitPlayground.setPixelColor(0, r, g, 0);
      CircuitPlayground.setPixelColor(1, r, g, 0);
      CircuitPlayground.setPixelColor(2, r, g, 0);
      CircuitPlayground.setPixelColor(3, r, g, 0);
      CircuitPlayground.setPixelColor(4, r, g, 0);
      CircuitPlayground.setPixelColor(5, r, g, 0);
      CircuitPlayground.setPixelColor(6, r, g, 0);
      CircuitPlayground.setPixelColor(7, r, g, 0);
      CircuitPlayground.setPixelColor(8, r, g, 0);
      CircuitPlayground.setPixelColor(9, r, g, 0);
      delay(25);
    }
  }
  for (int k = 250; k > 51; k = k - 5) {
    for (int l = 250; l > 100; l = l - 5) {
      CircuitPlayground.setPixelColor(0, k, 0, 0);
      CircuitPlayground.setPixelColor(1, k, 0, 0);
      CircuitPlayground.setPixelColor(2, k, 0, 0);
      CircuitPlayground.setPixelColor(3, k, 0, 0);
      CircuitPlayground.setPixelColor(4, k, 0, 0);
      CircuitPlayground.setPixelColor(5, k, 0, 0);
      CircuitPlayground.setPixelColor(6, k, 0, 0);
      CircuitPlayground.setPixelColor(7, k, 0, 0);
      CircuitPlayground.setPixelColor(8, k, 0, 0);
      CircuitPlayground.setPixelColor(9, k, 0, 0);
      delay(25);
    }
  }
}
