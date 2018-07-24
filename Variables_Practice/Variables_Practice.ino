int globalVariable = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int localVariable = 0;
  int functionVariable = counterFunction(globalVariable);
 
  Serial.print("Global Variable: ");
  Serial.print(globalVariable);
  Serial.print(" Local Variable: ");
  Serial.print(localVariable);
  Serial.print(" Function Variable: ");
  Serial.println(functionVariable); 
  delay(1000);
  
  globalVariable = globalVariable + 1;
  localVariable = localVariable + 1;
  functionVariable = functionVariable + 1;
}

int counterFunction(int variableValue){
  int innerFunctionVariable = variableValue;
  innerFunctionVariable = innerFunctionVariable + 1;
  return innerFunctionVariable;
}

