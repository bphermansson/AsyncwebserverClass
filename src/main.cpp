#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include "wifi.h"
#include "webserver.h"
 
WiFiClient wifiClient;
wserver newWebserver;

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("Start");

  char ipAddr[] = "xxx.xxx.xxx.xxx";
  char *ipAddrPtr = ipAddr;
  wifi_connect(ipAddrPtr);
  Serial.printf("Connected, IP: %s!\n", ipAddrPtr);
  newWebserver.webserver();
}

void loop() {
}