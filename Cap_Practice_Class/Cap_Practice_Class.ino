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

  if(capValue > 250){
    for (int t = 5000; t < 10000; t = t + 1){
      tone(5, t);
    }
//    for(int i = 0; i < 10; i = i+1){
//      CircuitPlayground.setPixelColor(i, 255, 192, 203);
//    }
  }
  else{
    noTone(5);
    //CircuitPlayground.clearPixels();
  }
}
