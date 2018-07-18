int ledPin = 13; // pin with LED
int buttonPin = 9; // pin with Button

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(buttonPin));

  int buttonRead = digitalRead(buttonPin); //holds the value of 1 or 0 sent to chip

  if (buttonRead == 0){ // see if button is pressed, if pressed
    digitalWrite(ledPin, HIGH); // turn on LED
  }

  else {
    digitalWrite(ledPin, LOW); // if button not pressed, turn off led
  }
  
  
}
