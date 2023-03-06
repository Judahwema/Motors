#include <Servo.h>
int servo = 8;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
myservo.attach(servo);
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(0);
delay(1000);
myservo.write(90);
delay(1000);
myservo.write(180);
delay(1000);
}
