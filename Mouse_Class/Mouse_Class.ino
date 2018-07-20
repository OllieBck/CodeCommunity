#include<Mouse.h> // includes the mouse library

int mouseButton = 4; // click button on mouse
int mouseMove = 19; // move cursor of the mouse

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  pinMode(mouseButton, INPUT);
  pinMode(mouseMove, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mouseReading = digitalRead(mouseButton);
  int moveReading = digitalRead(mouseMove);

  if (mouseReading == 1) {
    Mouse.click();
  }

  if (moveReading == 1) {
    Mouse.move(5, -5, 0); //mouse move takes 3 parameters: x direction to move pixel, y direction to move pixel, and scroll whelle
  }
}
