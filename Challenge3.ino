#include <ElegantOTA.h>
#include <WiFi.h>
#include <WebServer.h>

const char* ssid ="Jerry";
const char* password = "12345#6789";

WebServer server(80);

void setup(void) {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/", []() {
    server.send(200, "text/plain", "Hi! This is ElegantOTA Demo by BYTEWAVES!");
  });

  ElegantOTA.begin(&server);    // Start ElegantOTA
  ElegantOTA.setAuth("ByteWaves", "123Pass");
  server.begin();
  Serial.println("HTTP server started");
}
 
void loop(void) {
  server.handleClient();
  ElegantOTA.loop();
}