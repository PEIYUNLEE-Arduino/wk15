const int analogInPin = A0;
const int analogOutPin = 9;

int sensorRead = 0;
int outputRead = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorRead = analogRead(analogInPin);
  if(sensorRead<60){sensorRead=60;}
  else if(sensorRead>170){sensorRead=170;}
  outputRead = map(sensorRead,60,170,0,255);
  analogWrite(analogOutPin,outputRead);

  Serial.print("sensor=");
  Serial.print(sensorRead);
  Serial.print("\t output=");
  Serial.print(outputRead);

  delay(2);
}
