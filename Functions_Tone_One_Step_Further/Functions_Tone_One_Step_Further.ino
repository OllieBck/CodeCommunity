int musicPin = 5;

int ditNotes = 100;
int dahNotes = 300;

int ditFreq = 440;
int dahFreq = 200;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  notePlay(ditFreq, ditNotes);
  delay(dahNotes);
  notePlay(dahFreq, dahNotes);
  delay(dahNotes);
  notePlay(ditFreq, ditNotes);
  delay(ditNotes*7);
}

void notePlay(int frequency, int duration){
  tone(musicPin, frequency, duration);
  delay(duration);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, frequency, duration);
  delay(duration);
  noTone(musicPin);
  delay(ditNotes);

  tone(musicPin, frequency, duration);
  delay(duration);
  noTone(musicPin);
  delay(ditNotes);
}

