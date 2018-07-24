void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long testOne = calculateThis(20, 30);
  long testTwo = calculateThis(50, 100);
  long testThree = calculateThis(100, 200);
  Serial.print("Test 1: ");
  Serial.print(testOne);
  Serial.print(" Test 2: ");
  Serial.print(testTwo);
  Serial.print(" Test 3: ");
  Serial.println(testThree);
}

long calculateThis(long figure1, long figure2){
  long valueSummed = figure1 + figure2;
   return valueSummed;
}
