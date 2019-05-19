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

  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;
  if (sensorValue) rangeValue = 1;

 Serial.print(rangeValue);
 delay(100);
 Serial.print(rangeValue);
 delay(100);
 Serial.print(rangeValue);

  delay(5000);

}
