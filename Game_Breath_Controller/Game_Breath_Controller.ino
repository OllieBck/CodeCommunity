#include<Keyboard.h>

int mic = A4;
int button = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int micReading = analogRead(mic);
  int buttonReading = digitalRead(button);
  
   // if louder than a value, move right which is the letter "a"
   if(micReading > 600) {
    //Keyboard.release(100);
    Keyboard.press(97); // send out an "a"
   }
   else{
    Keyboard.release(97);
   }

   if (buttonReading == 1){
    Keyboard.press(100);
   }
   else{
    Keyboard.release(100);
   }
}
//
