#include<Adafruit_CircuitPlayground.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  String message = " ";
  // put your main code here, to run repeatedly:
  if (Serial.available() >= 0) {
    //message = Serial.readString();
    int valueRed = Serial.parseInt();
    int valueGreen = Serial.parseInt();
    int valueBlue = Serial.parseInt();
    int valuePlay = Serial.parseInt();
    Serial.print("red color: ");
    Serial.print(valueRed);
    Serial.print(" green color: ");
    Serial.print(valueGreen);
    Serial.print(" blue color: ");
    Serial.print(valueBlue);
    Serial.print(" tone frequency: ");
    Serial.println(valuePlay);
    CircuitPlayground.setPixelColor(1, valueRed, valueGreen, valueBlue);
    tone(5, valuePlay);
    delay(100);
    noTone(5);
  }
}
