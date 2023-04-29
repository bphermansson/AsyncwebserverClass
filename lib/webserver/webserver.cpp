#include "ESPAsyncWebServer.h"  // https://github.com/me-no-dev/ESPAsyncWebServer
#include <ESPAsyncTCP.h>
#include "LittleFS.h"
#include "webserver.h"

AsyncWebServer server(80);
String jsondata;
char json_string[500];
  void wserver::notFound(AsyncWebServerRequest *request) {
      request->send(404, "text/plain", "Not found");
  }


  void wserver::webserver() {
    LittleFS.begin();

    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
      Serial.println("Request index");
      request->send(LittleFS, "/index.html", String(), false);
    });
    server.on("/json.html", HTTP_GET, [](AsyncWebServerRequest *request){
    });
    server.on("/test.html", HTTP_GET, [](AsyncWebServerRequest *request){
      request->send(LittleFS, "/test.html", String(), false);
    });
    // Route to load style.css file
    server.on("/style.css", HTTP_GET, [
      
    ](AsyncWebServerRequest *request){
      request->send(LittleFS, "/style.css", "text/css");
    });
    server.on("/readdata", HTTP_GET, [](AsyncWebServerRequest *request){
      request->send(200, "text/plain", jsondata);
    });
    //server.onNotFound(wserver.notFound(AsyncWebServerRequest *request));

    server.begin();
    Serial.println("HTTP server started");
}
//};  
