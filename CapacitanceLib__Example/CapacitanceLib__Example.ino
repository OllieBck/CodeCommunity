#include<Adafruit_CircuitPlayground.h>

int capPin = 9;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int capValue = CircuitPlayground.readCap(capPin);
  Serial.println(capValue);

  if (capValue > 100){
    for(int i = 0; i < 10; i++){
      CircuitPlayground.setPixelColor(i, 255, 0, 0);
    }
  }
  else{
    CircuitPlayground.clearPixels();
  }
}
