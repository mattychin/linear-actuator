#include <Servo.h> 

Servo myServo;          // declare a servo object 
int ServoPin = 9;       // declare the servo pin

void setup() 
{
   myServo.attach(ServoPin);  // Attach servo to the used pin number 
   Serial.begin(9600);        // Open serial window for log
}

void loop() 
{ 
  myServo.writeMicroseconds(2000);  // extend
  delay(10000);
  myServo.writeMicroseconds(1000);  // retract
  delay(10000);
}
