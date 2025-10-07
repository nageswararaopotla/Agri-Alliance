#define waterSensor A1
#define inletMotor 7
#define outletMotor 8

void setup() {
  Serial.begin(9600);
  pinMode(inletMotor, OUTPUT);
  pinMode(outletMotor, OUTPUT);
}

void loop() {
  int waterLevel = analogRead(waterSensor);
  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  if (waterLevel < 300) { 
    digitalWrite(inletMotor, HIGH);
    digitalWrite(outletMotor, LOW);
    Serial.println("Inlet Motor ON");
  } 
  else if (waterLevel > 700) {
    digitalWrite(inletMotor, LOW);
    digitalWrite(outletMotor, HIGH);
    Serial.println("Outlet Motor ON");
  } 
  else {
    digitalWrite(inletMotor, LOW);
    digitalWrite(outletMotor, LOW);
    Serial.println("Water level Normal");
  }

  delay(3000);
}
