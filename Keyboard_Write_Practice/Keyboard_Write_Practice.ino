#include <Keyboard.h>

int keyButton = 4;

void setup() {
  pinMode(keyButton, INPUT);
  Keyboard.begin();
}

void loop() {
  int buttonReading = digitalRead(keyButton);

  if(buttonReading==HIGH){
    Keyboard.write(61);
    delay(500);
  }
  

}

