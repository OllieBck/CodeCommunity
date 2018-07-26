/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay

  Modified for Circuit Playground by OllieBck on July 24
*/
#include<Adafruit_CircuitPlayground.h>

unsigned long previousMillis;

bool ledState = false;

int ledPin = 13;

int interval = 1000;

int redValue = 255;
int greenValue = 0;
int blueValue = 0;


void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;

    if (ledState == false){
      ledState = true;
      redValue = 0;
      greenValue = 0;
      blueValue = 0;
    }
    else{
      ledState = false;
      redValue = 255;
    }
    CircuitPlayground.setPixelColor(1, redValue, greenValue, blueValue);
  }
}
