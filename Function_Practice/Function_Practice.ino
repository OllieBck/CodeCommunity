String stringContainer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    long compData1 = Serial.parseInt();
    long compData2 = Serial.parseInt();
    long mathYay = calculateThis(compData1, compData2);
    Serial.println(mathYay);
  }
}

long calculateThis(long figure1, long figure2){
  long valueSummed = figure1 + figure2;
   return valueSummed;
}

