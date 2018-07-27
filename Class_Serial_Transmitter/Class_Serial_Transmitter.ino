void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial1.print('H');
  delay(1000);
  Serial1.print('L');
  delay(1000);
}
