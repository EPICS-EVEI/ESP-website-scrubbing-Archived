#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

WiFiClientSecure client;

char ssid[] = "espNetwork";
char password[] = "password";

float coords[300];

#define HOST_WEBSITE "http://evei-polyline.x10.mx"

void setup() {
  Serial.begin(115200);
  Serial.print("Connecting WiFi: ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  IPAddress ip = WiFi.localIP();
  Serial.println(ip);

  //Getting coordinates from the website
  if(client.connected()) {
    client.stop();
  }
}

void loop() {
  
}
