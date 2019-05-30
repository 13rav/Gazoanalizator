#include "GyverTM1637.h"

#define CLK 8
#define DIO 10
#define PIN_direction_TX_RX 2
#define pinLED 5

int rangeValue;

void setup() {
  Serial.begin(9600);
  GyverTM1637 disp(CLK, DIO);
  disp.clear();
  disp.brightness(7); // яркость, 0 - 7 (минимум - максимум)
  pinMode(PIN_direction_TX_RX,   OUTPUT);
  digitalWrite(PIN_direction_TX_RX, LOW);
  pinMode(pinLED, OUTPUT);
  
}

void loop() {

  if(Serial.available()>0){
    rangeValue = Serial.read();
    delay(70);
    rangeValue = Serial.read();
    delay(70);
    rangeValue = Serial.read();
  }

  draw(rangeValue);
  delay(2000);
}

void draw (rangeValue){
  switch(rangeValue){
    case 1:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _1);
    digitalWrite(pinLED, 0);
    break;

    case 2:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _2);
    digitalWrite(pinLED, 0);
    break;

    case 3:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _3);
    digitalWrite(pinLED, 0);
    break;

    case 4:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _4);
    digitalWrite(pinLED, 0);
    break;

    case 5:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _5);
    digitalWrite(pinLED, 0);
    break;

    case 6:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _6);
    digitalWrite(pinLED, 0);
    break;

    case 7:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _7);
    digitalWrite(pinLED, 1);
    break;

    case 8:
    disp.clear();
    disp.displayByte(_empty, _empty, _empty, _8);
    digitalWrite(pinLED, 1);
    break;    
  }
  return 0;
}
