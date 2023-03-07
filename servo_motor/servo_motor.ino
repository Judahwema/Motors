#include <Servo.h> //Name of the library given
int servo = 8;
Servo myservo;
int yellow = 10;
int green = 12;

void setup() {
  // put your setup code here, to run once:
myservo.attach(servo); //attaching the servo to pins it is connected to
pinMode(green, OUTPUT);
pinMode(yellow,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
myservo.write(0); //programming the servo to move in different angles
digitalWrite(yellow,HIGH);
delay(1000);
myservo.write(45);
digitalWrite(yellow,LOW);
delay(1000);
myservo.write(90);
digitalWrite(green,HIGH);
delay(1000);
myservo.write(135);
digitalWrite(green,LOW);
delay(1000);
}
