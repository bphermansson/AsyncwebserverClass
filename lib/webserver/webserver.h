#ifndef __WEBSERVER_H
#define __WEBSERVER_H

#include <Arduino.h>
// pragma once prevents the file to be included twice
#pragma once



class wserver {
  public:
        //extern String jsondata;
        //extern char json_string[500];

        void notFound(AsyncWebServerRequest *request);
        //void webserver(AsyncWebServer server);
        void webserver();
};

#endif