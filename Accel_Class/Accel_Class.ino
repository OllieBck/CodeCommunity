#include<Adafruit_CircuitPlayground.h>
#include<Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int xValue = CircuitPlayground.motionX();
  int breathMic = analogRead(A4);

  Serial.println(xValue);

  if ( xValue > 5) {
    Keyboard.press(119);
  }
  else {
    Keyboard.release(119);
  }

  if ( breathMic > 800) {
    Keyboard.press(115);
  }
  else{
    Keyboard.release(115);
  }

}
