#include<Adafruit_CircuitPlayground.h> // load the library

int leds[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int light = A5;

int speakerPin = 5;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin(); // setup the library
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightReading = analogRead(light);

  if (lightReading <= 10) {
    for (int i = 0; i < 11; i = i + 1) {
      CircuitPlayground.setPixelColor(leds[i], 255, 0, 75);
    }
    for (int t = 8000; t > 0; t = t - 100) {
      tone(speakerPin, t, 1000);
      delay(3.75);
    }

  }
  else {
    CircuitPlayground.clearPixels(); // turns off all the leds
    noTone(speakerPin);
  }
}

