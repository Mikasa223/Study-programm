void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  int pinNumber = 3;
  while(pinNumber <= 9){
    pinMode(pinNumber, OUTPUT);
    pinNumber = pinNumber + 1;
  }
  randomSeed(analogRead(A0));
}

void loop() {
  int number;
  if(!digitalRead(2)){
  number = getRandomNumber(0,10);
  }
  displayNumber(number);
}

void displayClear(){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void displayNumber (int ledNumber) { 
  switch(ledNumber){
    case 0:
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(6, HIGH);
      break;
    case 1:
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 2:
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      break;
    case 3:
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 4:
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 5:
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 6:
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 7:
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      break;
    case 8:
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      break;
    case 9:
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      break;
  }
}

int getRandomNumber(int minNumber, int maxNumber){
  int randomNumber;
  int i = 0;
  while (i < 5){
    i = i + 1;
    randomNumber = random(minNumber, maxNumber);
    displayNumber(randomNumber);
    delay(100);
    displayClear();
    delay(100);
    
    Serial.print("i = ");
    Serial.println(i);
    Serial.print("randomNumber = ");
    Serial.println(randomNumber);
    Serial.println("");
  }
  
  return randomNumber;
}
