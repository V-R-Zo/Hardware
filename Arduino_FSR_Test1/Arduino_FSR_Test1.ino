#include <Adafruit_NeoPixel.h>

//발의 motion 초기화
int prefoot1 = 1;
int prefoot2 = 1;
int foot1 = 1; //왼발
int foot2 = 1; //오른발

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
}

void loop() {
  int sensorval1 = analogRead(9);//9번핀에서 압력센서가 측정한 값을 받아온다.
  int sensorval2 = analogRead(7);//7번핀에서 압력센서가 측정한 값을 받아온다
  
//압력센서 측정값이 100이상일 경우 발이 땅에 닿아있다고 가정
  if(sensorval1 >= 100){
    foot1 = 1; //발이 닿아있다
  }else {
    foot1 = 0;
  }

  if(sensorval2 >= 100){
    foot2 = 1; //발이 닿아있다
  }else {
    foot2 = 0;
  }

  //그 전의 foot의 압력과 지금 압력을 비교해 서로 값이 다르면
  //걸은것으로 간주
  if(prefoot1!=foot1){
     Serial.print("걷기");
  }

  if(prefoot2!=foot2){
     Serial.print("걷기");
  }

  prefoot1 = foot1;
  prefoot2 = foot2;
}
