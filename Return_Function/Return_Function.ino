// make a simple calculator

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int calc1 = calc(5, 3); // call function and return value and hold that in container called calc1
  int calc2 = calc(30000, 40000); // call function and return value and hold that in container called calc2

  Serial.print("Calculator 1: ");
  Serial.print(calc1);
  Serial.print(" Calculator 2: ");
  Serial.println(calc2);
  
}

int calc(int figure1, int figure2){ // do some math
  int sumValue = figure1 + figure2;
  return sumValue;
}












