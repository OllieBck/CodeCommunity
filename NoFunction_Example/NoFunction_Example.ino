int musicPin = 5; //setting a global for speaker pin
 
int ditNotes = 100; // a short note duration
int dahNotes = 300; // long note duration

int ditFreq = 440; // frequency for short
int dahFreq = 200; // frequency for long

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  // pause between letters
  delay(dahNotes);

  // O
  tone(musicPin, dahFreq, dahNotes);
  delay(dahNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, dahFreq, dahNotes);
  delay(dahNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, dahFreq, dahNotes);
  delay(dahNotes);
  noTone(musicPin);
  delay(ditNotes);

  // pause between letters
  delay(dahNotes);

  // S
  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, ditFreq, ditNotes);
  delay(ditNotes);
  noTone(musicPin);
  delay(ditNotes);

  // pause between words
  delay(ditNotes * 7);

}
