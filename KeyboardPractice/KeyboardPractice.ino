#include <Keyboard.h>

const int printButton = 4;

void setup() {
  pinMode(printButton, INPUT);
  Keyboard.begin();
}

void loop() {
  if(digitalRead(printButton)==HIGH){
    Keyboard.write(61);
    delay(500);
  }
}
