int speakerPin = 5; // setup speaker pin

int shortFreq = 500; // the dit frequency, i.e. short high note
int longFreq = 250; // the dah frequency, i.e. the long lower note

int shortTime = 100; // short time in milliseconds
int longTime = 300; // long time in milliseconds

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  playNote(shortFreq, shortTime); // plays the "S"
  delay(longTime); // pause between letters
  playNote(longFreq, longTime); // plays the "O"
  delay(longTime); // pasue between letters
  playNote(shortFreq, shortTime);
  delay(shortTime * 7);
}

void playNote(int freq, int duration) {
  tone(speakerPin, freq, duration);
  delay(duration);
  noTone(speakerPin);
  delay(shortTime);

  tone(speakerPin, freq, duration);
  delay(duration);
  noTone(speakerPin);
  delay(shortTime);
  
  tone(speakerPin, freq, duration);
  delay(duration);
  noTone(speakerPin);
  delay(shortTime);
}

