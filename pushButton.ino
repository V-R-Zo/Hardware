void setup() {
  Serial.begin(9600);

  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  int readValue=digitalRead(7); //버튼 누르는 인풋 받음
  int readValue2=digitalRead(5);//버튼 누르는 인풋 받음

  if(readValue==HIGH){ //버튼이 눌렸으면
    digitalWrite(8,HIGH); //LED on
  }
  else{
    digitalWrite(8,LOW);
  }

  if(readValue2==HIGH){//버튼이 눌렸으면
    digitalWrite(4,HIGH); //LED on
  }
  else{
    digitalWrite(4,LOW);
  }
}
