int lightSensor = A5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int lightReading = analogRead(lightSensor);
  
  Serial.println(lightReading);
  if(lightReading < 100){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  delay(1000);
  
}
