#include<Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
  randomSeed(analogRead(A5));
}

void loop() {
  int colorRed = randomColor(100, 200);
  int colorGreen = randomColor(50, 100);
  int colorBlue = randomColor(10, 100);
  for (int i = 0; i < 10; i = i + 1) {
    CircuitPlayground.setPixelColor(i, colorRed, colorGreen, colorBlue);
  }
}

int randomColor(int minValue, int maxValue) {
  int randomNumber = random(minValue, maxValue);
  delay(100);
  return randomNumber;
}

