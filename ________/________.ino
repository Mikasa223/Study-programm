void setup() {
  //这一部分干的事就是把arduino设置一下的感觉
  //把引脚2和3给设置成上拉输入模式然后就可以检测按钮的状态了。
  //然后把引脚4和7设置成输出模式给电机供电
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  //这一部分就是把引脚2和3读取到的电平变成两个变量
  //这样后续就可以使用了，用if创建条件然后开搞！
  int motor1_val = digitalRead(2);
  int motor2_val = digitalRead(3);
  Serial.println(motor1_val);
  Serial.println(motor2_val);

  if (motor1_val==HIGH){
    digitalWrite(4,LOW);
  }
  else{
    digitalWrite(4,HIGH);
  }
  if(motor2_val==HIGH){
    digitalWrite(7,LOW); 
  }
  else{
    digitalWrite(7,HIGH);
  }
  //以上的部分就是用if判断条件，也就是被转换成int的开关的状态
  //判断条件之后选择引脚4和7所要输出的电压从而驱动电机。
}
