#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>
#include <WiFiManager.h>

WiFiClientSecure client;

char ssid[] = "espNetwork";
char password[] = "password";

float coords[300];

#define HOST_WEBSITE "http://evei-polyline.x10.mx"

void setup() {
  Serial.begin(115200);
  //Serial.print("Connecting WiFi: ");
  //Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFiManager wm;
  bool res;
  res = wm.autoConnect("AutoConnectAP", "password");

  if(!res) {
    Serial.println("Failed to connect");
  }
  else {
    Serial.println("connectedAYYAD");
  }
  /*WiFi.begin(ssid, password);
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

  if(!client.connect(HOST_WEBSITE, 80)) {
    Serial.println(F("Connection Failed"));
    return;
  }

  yield();

  client.print(F("GET "));
  client.print("/");
  client.println(F("HTTP/1.1"));

  client.print(F("Host: "));
  client.println(HOST_WEBSITE);
  
  client.println(F("Cache-Control: no-cache"));

  if(client.println() == 0) {
    Serial.println(F("Failed to send request"));
    return;
  }

  char status[32] = {0};
  client.readBytesUntil('\r', status, sizeof(status));
  if(strcmp(status, "HTTP/1.1 200 OK") != 0) {
    Serial.print(F("Unexpected response: "));
    Serial.println(status);
    return;
  }

  char endOfHeaders[] = "\r\n\r\n";
  if(!client.find(endOfHeaders)) {
    Serial.println(F("Invalid response"));
    return;
  }
  
  char coords[50] = {0};

  char coordsString[] = "coordinates=\"";
  if(!client.find(coordsString)) {
    Serial.println(F("Found no coordinates"));
    return;  
  }
  else {
    client.readBytesUntil('\"', coords, sizeof(coords));
    Serial.print(coords[0]);
  }


  return;*/
}

void loop() {
  
}
