boolean button1;
int ledPin = 9;
int brightness1 = 1;
boolean a=1;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() {
  button1 = digitalRead(2);
  if(!button1 && a){
    while(!button1 && brightness1 < 255){
      brightness1++;
      analogWrite(ledPin, brightness1);
      Serial.println(brightness1);
      delay(10);
      button1 = digitalRead(2);
  }
  a = !a;
  }
  else if(!button1 && !a){
    while(!button1 && brightness1 > 0){
      brightness1--;
      analogWrite(ledPin, brightness1);
      Serial.println(brightness1);
      delay(10);
      button1 = digitalRead(2);
  }
  a = !a;
  }
  delay(1000);
}
  

  
