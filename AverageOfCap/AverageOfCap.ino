#include<Adafruit_CircuitPlayground.h>
#include<Keyboard.h>

int averageReading = 0;
int averageTouch = 0;
int capPin = 9;
int diffVariable = 10;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
  averageReading = averageUnTouched();
  averageTouched();
}

void loop() {
  // put your main code here, to run repeatedly:
  averageReading = averageUnTouched();
  if(CircuitPlayground.readCap(capPin) > averageReading + diffVariable){
    Serial.println("here");
    averageTouch = averageTouched();
    Serial.println(averageTouch);
    if (averageTouch - averageReading > diffVariable){
      Keyboard.press(109);
    }
  }
  else{
    Keyboard.release(109);
  }
}

int averageUnTouched() {
  for (int i = 0; i < 20; i++) {
    averageReading = averageReading + CircuitPlayground.readCap(capPin);
    if (i == 19) {
      averageReading = averageReading + CircuitPlayground.readCap(capPin);
      averageReading = averageReading / 20;
      return averageReading;
    }
  }
}

int averageTouched(){
    for (int i = 0; i < 20; i++) {
    averageTouch = averageTouch + CircuitPlayground.readCap(capPin);
    if (i == 19) {
      averageTouch = averageTouch + CircuitPlayground.readCap(capPin);
      averageTouch = averageTouch/20;
      return averageTouch;
    }
  }
}

