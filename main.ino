#include <Servo.h>
Servo myservo;
int potpin =0;  //analog pin A0
int val;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
val= analogRead(potpin);
val= map(val,0,1023,0,180);
Serial.print(val);
Serial.println(" Degree");
myservo.write(val);
delay(15);
}
