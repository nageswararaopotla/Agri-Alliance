const int phPin = 34;  // Analog input pin for pH sensor

// Define the calibration values for the pH sensor
const float phMin = 0;  // Minimum pH value
const float phMax = 14;  // Maximum pH value
const float phOffset = 0;  // pH offset value

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Read pH sensor value
  int phValue = analogRead(phPin);
  float ph = mapFloat(phValue, 0, 4095, phMin, phMax) + phOffset;

  // Print pH value to serial monitor
  Serial.print("pH: ");
  Serial.print(ph);
  Serial.println();

  delay(1000);  // Print pH value every 1 second
}

// Map analog value to pH value
float mapFloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}