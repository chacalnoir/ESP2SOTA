#ifndef ESP2SOTA_h
#define ESP2SOTA_h

#include "Arduino.h"
#include "stdlib_noniso.h"


#define HARDWARE "ESP32"
#include "WebServer.h"
#include "Update.h"

class ESP2SOTAClass{
  public:
    ESP2SOTAClass();
    void begin(WebServer *server);
  private:
    WebServer *_server;    
};
extern ESP2SOTAClass ESP2SOTA;
#endif
