#include<Mouse.h>
#include<Keyboard.h>

int mouseButton = 4;
int wButton = 19;

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  Keyboard.begin();
  pinMode(mouseButton, INPUT);
  pinMode(wButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mouseReading = digitalRead(mouseButton);
  int wReading = digitalRead(wButton);

  if (mouseReading == HIGH) {
    Mouse.click();
  }

  if (wReading == HIGH){
    Keyboard.write(32);
  }
}
