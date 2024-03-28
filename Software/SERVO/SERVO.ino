#include <Servo.h>

Servo myservo;  


void setup() {
  myservo.attach(3);  
}

void loop() {
int  val = map(900, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
}
