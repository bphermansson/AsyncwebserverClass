#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "wifi.h"

#define MYSSID "BrandstorpWifi"
#define PASSWORD "Brandstorp"

void wifi_connect(char *ipAddrPtr)
{   
  WiFi.begin(MYSSID, PASSWORD);
  Serial.print("Connecting to Wifi");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  char IP[] = "xxx.xxx.xxx.xxx";          
  IPAddress ip = WiFi.localIP();
  ip.toString().toCharArray(IP, 16);
  strcpy(ipAddrPtr, IP);
}