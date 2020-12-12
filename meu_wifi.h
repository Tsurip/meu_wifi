#include "Arduino.h"
#include <ESP8266WiFi.h>

#ifndef meu_w
#define meu_w

class Meu_Wifi
{
  public:
    Meu_Wifi(String login, String pass);
    void conectar();
    void stats();
    void LocalIP();
    
  private:
    String _login;
    String _pass;
};

#endif
