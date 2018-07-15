#include<Adafruit_CircuitPlayground.h>

int playerOne = 9;
int playerTwo = 12;
int gameReset = 4;
int pinTone = 5;
int ledReset = 13;

int playerOnePixels[5] = {0, 1, 2, 3, 4};
int playerTwoPixels[5] = {5, 6, 7, 8, 9};

int playerOneScore = 0;
int playerTwoScore = 0;

bool pressedReset = false;


void setup() {
  // put your setup code here, to run once:

  //start Circuit Playground's library
  CircuitPlayground.begin();

  // declare button pins
  pinMode(playerOne, INPUT_PULLUP);
  pinMode(playerTwo, INPUT_PULLUP);
  pinMode(gameReset, INPUT);
  pinMode(ledReset, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // create variables to hold whether button is pressed or not
  int buttonOne = digitalRead(playerOne);
  int buttonTwo = digitalRead(playerTwo);
  int buttonReset = digitalRead(gameReset);

  if (buttonReset == HIGH && pressedReset == false) {
    tone(pinTone, 262, 1000);
    delay(1000);
    noTone(pinTone);
    delay(500);
    tone(pinTone, 262, 1000);
    delay(1000);
    noTone(pinTone);
    delay(500);
    tone(pinTone, 262, 1000);
    delay(1000);
    noTone(pinTone);
    digitalWrite(ledReset, HIGH);
    pressedReset = true;
  }

  if (buttonOne == LOW && pressedReset == true || buttonTwo == LOW && pressedReset == true) {
    if (buttonOne == LOW) {
      playerOneScore = playerOneScore + 1;
      pressedReset = false;
      digitalWrite(ledReset, LOW);
    }
    if (buttonTwo == LOW) {
      playerTwoScore = playerTwoScore + 1;
      pressedReset = false;
      digitalWrite(ledReset, LOW);
    }
  }

  for (int i = 0; i < playerOneScore; i++) {
    CircuitPlayground.setPixelColor(playerOnePixels[i], 200, 0, 0);
  }

  for (int t = 0; t < playerTwoScore; t++) {
    CircuitPlayground.setPixelColor(playerTwoPixels[t], 0, 200, 0);
  }

}
