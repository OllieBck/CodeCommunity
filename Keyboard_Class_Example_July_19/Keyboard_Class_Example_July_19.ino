#include<Keyboard.h>

int keyboardKey = 4;

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  pinMode(keyboardKey, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int keyReading = digitalRead(keyboardKey); // digitalRead tells us if buttom is being pressed or not

  if(keyReading == 1){
    Keyboard.press(61);
  }
  else{
    Keyboard.release(61);
  }

  
}
