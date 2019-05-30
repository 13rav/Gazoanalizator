#define MQanalogPin A0
#define PIN_direction_TX_RX 2

int sensorValue;
int rangeValue;

void setup() {
  Serial.begin(9600);
  pinMode(MQanalogPin, INPUT);
  pinMode(PIN_direction_TX_RX,   OUTPUT);
  digitalWrite(PIN_direction_TX_RX, HIGH);

}

void loop() {
  sensorValue = analogRead(MQanalogPin);

  if (sensorValue < 2500) rangeValue = 1;
  if (sensorValue > 2500 && sensorValue < 5001) rangeValue = 2;
  if (sensorValue > 5000 && sensorValue < 7501) rangeValue = 3;
  if (sensorValue > 7500 && sensorValue < 10001) rangeValue = 4;
  if (sensorValue > 10000 && sensorValue < 12501) rangeValue = 5;
  if (sensorValue > 12500 && sensorValue < 15001) rangeValue = 6;
  if (sensorValue > 15000 && sensorValue < 17501) rangeValue = 7;
  if (sensorValue > 17500 && sensorValue < 20001) rangeValue = 8;

 Serial.print(rangeValue);
 delay(100);
 Serial.print(rangeValue);
 delay(100);
 Serial.print(rangeValue);

  delay(5000);

}
