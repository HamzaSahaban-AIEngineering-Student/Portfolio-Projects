#include <Servo.h> 
Servo myServo; 

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
  myServo.write(0);

} 

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  myServo.write(90);
  delay(2000);
  myServo.write(180);  
  delay(2000);
  myServo.write(180);

  
}

