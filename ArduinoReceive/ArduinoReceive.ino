int ledPin = 13;
int message;

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial1.available() >= 0){
    message = Serial1.read();
    if (message == 'H'){
      digitalWrite(ledPin, HIGH);
    }
    if (message == 'L'){
      digitalWrite(ledPin, LOW);
    }
  }
}
