This project uses the Asyncwebserver (https://github.com/me-no-dev/ESPAsyncWebServer) library to
create a simple webserver. Most of the server code is placed in it's own class which makes the 
code easier to handle and more portable. 
To make this work the files in the data folder has to be uploaded to the ESP8266 separatly. 
-Click the PIO icon.
-Select env:nnn (the board you are using)
'Platform/Build Filesystem' Image and them
'Upload Filesystem Image'. Done.

Code is written in VSCode/PlatformIO for an ESP8266-based Wemos card. It shows a dynamically updated styled webpage with the current runtime (the millis() command).

![Screenshot of the created webpage](https://raw.githubusercontent.com/bphermansson/AsyncwebserverClass/b15be407c674eba76ebd734c50bdd1bfd6854fbf/screenshotOfWebpage.png)