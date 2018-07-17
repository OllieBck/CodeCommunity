/*
  Adapted from:
  
  Melody
  Plays a melody
  circuit:
  - 8 ohm speaker on digital pin 8
  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone
*/

int pinTone = 5;
int shortNote = 1000 / 4;
int longNote = 1000 / 8;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(pinTone, 300 , shortNote); //d
  delay(shortNote * 1);
  noTone(5);

  tone(pinTone, 247 , longNote); //b
  delay(longNote * 1.5);
  noTone(5);

  tone(pinTone, 220 , longNote); //a
  delay(longNote * 1.3);
  noTone(5);

  tone(pinTone, 247, shortNote); //b
  delay(shortNote * 1);
  noTone(5);

  tone(pinTone, 294, shortNote); //d
  delay(shortNote * 1.7);
  noTone(5);

  tone(pinTone, 294, shortNote); //d
  delay(shortNote * 2);
  noTone(5);

  tone(pinTone, 294, shortNote); //d
  delay(shortNote * 2.3);
  noTone(5);

  tone(pinTone, 294, shortNote); //d
  delay(shortNote * 2);
  noTone(5);
}

