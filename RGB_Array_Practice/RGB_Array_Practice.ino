#include<Adafruit_CircuitPlayground.h>

int pixelPins[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<10; i++){
    for (int t = 0; t < 255; t++){
    CircuitPlayground.setPixelColor(pixelPins[i], 255, 20, 203);

  }
  
}
