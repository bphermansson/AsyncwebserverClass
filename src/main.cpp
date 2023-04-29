#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include "Add.h"
#include "wifi.h"
#include "webserver.h"
 
WiFiClient wifiClient;

class foo {
  //AsyncWebServer server;  // fails if instead I instantiate it here
  int dummy;

  //foo() : server(80), dummy(0){}  // Inits variabels server and dummy

  
  /*
    foo().on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    Serial.println("Request");
      request->send(200, "text/plain", "Hello World!");

  });
  */
};

CBoo Boo;
wserver newWebserver;


void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Hej");


  Boo.x = 5;
  Boo.Plot();

  char ipAddr[] = "xxx.xxx.xxx.xxx";
  char *ipAddrPtr = ipAddr;
  wifi_connect(ipAddrPtr);
  Serial.printf("Connected, IP: %s!\n", ipAddrPtr);

  newWebserver.webserver();


//    Boo.Add();
//    Boo.Plot();


}

void loop() {
  // put your main code here, to run repeatedly:
}