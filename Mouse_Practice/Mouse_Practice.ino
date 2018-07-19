#include<Mouse.h>

int mouseButton = 4;
int mouseMove = 19;

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  pinMode(mouseButton, INPUT);
  pinMode(mouseMove, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int clickReading = digitalRead(mouseButton);
  int moveReading = digitalRead(mouseMove);

  if (clickReading == HIGH) {
    Mouse.click();
  }

  if (moveReading == HIGH){
    Mouse.move(0, 10, 0);
  }
}
