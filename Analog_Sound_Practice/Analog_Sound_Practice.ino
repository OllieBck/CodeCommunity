const int soundSensor = A4;
int arrayAvg[10] = {};
int avgValue;
int avgReading;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int soundReading = analogRead(soundSensor);

  for (int i = 0; i < 11; i++) {
    arrayAvg[i] = soundReading;
    delay(10);
  }

  for (int t = 0; t < 11; t++) {
    avgValue = arrayAvg[t];

    if (t == 0) {
      avgValue = arrayAvg[t];
    }
    else if (t > 0 && t < 10) {
      avgValue = avgValue + arrayAvg[t];
    }
    else {
      avgValue = avgValue + arrayAvg[t];
      avgReading = avgValue / t;
    }
  }

  Serial.println(avgReading);
  if (avgReading > 90 || avgReading < 20){
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  delay(100);
}
