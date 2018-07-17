#include <Keyboard.h>

const int printButton = 4;

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(printButton, INPUT);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if(digitalRead(printButton)==HIGH){
    //Send the message
    Keyboard.write(61);
    delay(500);
  }
}
