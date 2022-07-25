  
  


void setup() {
  pinMode(9, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  boolean buttonState = digitalRead(2);
  if (!buttonState){
    for(int brightness = 0;brightness<=255;brightness++){
      Serial.println(brightness);
      analogWrite(9, brightness);
      buttonState = digitalRead(2);
      delay(2);
    }
  
    for(int brightness = 255; brightness>0;brightness--){
      Serial.println(brightness);
      analogWrite(9, brightness);
      buttonState = digitalRead(2);
      delay(2);
    }
  }
  analogWrite(9,0);
}
  
