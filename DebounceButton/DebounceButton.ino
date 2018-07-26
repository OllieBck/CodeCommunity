#include<Adafruit_CircuitPlayground.h>

unsigned long previousMillis = 0;

int interval = 100;

bool ledState = false;

int ledPin = 13;

int buttonPin = 4;

bool buttonState;
bool lastButtonState = false;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  CircuitPlayground.begin();
}

void loop() {
int buttonReading = digitalRead(buttonPin);

  if (buttonReading != lastButtonState){
    previousMillis = millis();
  }
  
  if (millis() - previousMillis >= interval) {
    if (buttonReading != buttonState){
      buttonState = buttonReading;
      if (buttonState == 1){
        ledState = !ledState;
      }
    }
  }
  digitalWrite(ledPin, ledState);
  lastButtonState = buttonReading;
}
