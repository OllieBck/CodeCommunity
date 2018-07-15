#include<Adafruit_CircuitPlayground.h>

int pixelPins[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<11; i++){
    CircuitPlayground.setPixelColor(i, 0, 200, 0);
    delay(1000); 
  }
  for (int t=9; t>-1; t--){
    CircuitPlayground.setPixelColor(t, 0, 0, 0);
    delay(1000);
  }
}
