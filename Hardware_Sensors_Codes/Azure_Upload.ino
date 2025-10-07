#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Nag";
const char* password = "Chowdary";
String serverName = "https://your-azure-function-url.azurewebsites.net/api/upload";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConnected!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);

    String postData = "{\"temp\":27.5, \"humidity\":65, \"ph\":6.8}";
    http.addHeader("Content-Type", "application/json");
    int httpResponseCode = http.POST(postData);

    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    http.end();
  } else {
    Serial.println("WiFi disconnected");
  }
  delay(5000);
}
