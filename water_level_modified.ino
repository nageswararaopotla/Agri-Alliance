// Import necessary libraries
#include <WiFi.h>
#include <PubSubClient.h>

// Define constants
const char* ssid = "Nag"; // replace with your WiFi SSID
const char* password = "Chowdary"; // replace with your WiFi password
const char* mqttServer = "your_mqtt_broker_url"; // replace with your MQTT broker URL
const char* mqttTopic = "water/level"; // replace with your MQTT topic
const int waterLevelMin = 1000; // minimum water level value (e.g., empty tank)
const int waterLevelMax = 2000; // maximum water level value (e.g., full tank)
const int waterLevelPin = 32; // GPIO pin 32 as analog input pin

// Define variables
WiFiClient espClient;
PubSubClient client(espClient);
int waterLevelValue = 0;

// Setup function
void setup() {
  Serial.begin(115200);
  delay(10);

  // Connect to WiFi
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.println("Initializing MQTT...");

  // Connect to MQTT broker
  client.setServer(mqttServer, 1883);
  client.setCallback(callback);

  // Initialize analog input pin
  pinMode(waterLevelPin, INPUT);
}

// Loop function
void loop() {
  // Read water level value
  waterLevelValue = analogRead(waterLevelPin);

  // Map water level value to percentage
  int waterLevelPercent = map(waterLevelValue, waterLevelMin, waterLevelMax, 0, 100);

  // Publish data to MQTT topic
  if (client.connected()) {
    client.publish(mqttTopic, String(waterLevelPercent).c_str());
  } else {
    reconnect();
  }

  // Print water level value and percentage to serial monitor
  Serial.print("Water Level: ");
  Serial.print(waterLevelValue);
  Serial.print(" (");
  Serial.print(waterLevelPercent);
  Serial.println("%)");

  // Check water level conditions
  if (waterLevelPercent < 20) {
    Serial.println("Water level is low!");
  } else if (waterLevelPercent > 80) {
    Serial.println("Water level is high!");
  }

  delay(10000); // publish data every 10 seconds
}

// Reconnect function
void reconnect() {
  while (!client.connected()) {
    Serial.println("Attempting MQTT connection...");
    if (client.connect("ESP32Client")) {
      Serial.println("Connected to MQTT broker");
      client.publish(mqttTopic, "ESP32Client connected");
    } else {
      Serial.println("Failed to connect to MQTT broker");
      delay(5000);
    }
  }
}

// Callback function
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}