#include <SoftwareSerial.h>

SoftwareSerial mod(2, 3); // RX, TX
byte requestData[] = {0x01, 0x03, 0x00, 0x1E, 0x00, 0x03, 0xE4, 0x0C};

void setup() {
  Serial.begin(9600);
  mod.begin(9600);
}

void loop() {
  mod.write(requestData, sizeof(requestData));
  delay(500);

  byte response[11];
  for (byte i = 0; i < 11; i++) {
    response[i] = mod.read();
  }

  int nitrogen = response[3];
  int phosphorus = response[5];
  int potassium = response[7];

  Serial.print("N: "); Serial.print(nitrogen);
  Serial.print(" P: "); Serial.print(phosphorus);
  Serial.print(" K: "); Serial.println(potassium);

  delay(3000);
}
