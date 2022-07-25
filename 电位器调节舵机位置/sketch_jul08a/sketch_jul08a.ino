#include <Servo.h>
Servo myservo;
int pos = 0;
void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  

}

void loop() {
  int val = analogRead(A0);
  pos = map(val,0,1023,0,180);
  myservo.write(pos);
  delay(10);
  Serial.println(pos);
  
}
