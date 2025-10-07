#define PH_PIN A2

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(PH_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  float pH = 7 + ((2.5 - voltage) / 0.18);
  
  Serial.print("pH Value: ");
  Serial.println(pH);
  delay(2000);
}
