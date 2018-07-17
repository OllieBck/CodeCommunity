int pinLED = 13; // global variable
int shortCount = 500;
int longCount = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT); // set pin 13 to an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED, HIGH); // turn on LED on pin 13
  delay(shortCount); // waiting for 1 second
  digitalWrite(pinLED, LOW); // turn off LED on pin 13
  delay(longCount); // waiting for 1 second
  
}
