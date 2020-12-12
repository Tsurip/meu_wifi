#include "meu_wifi.h"

#define login ""
#define pass  ""

Meu_Wifi wifi(login, pass);

void setup() {
  Serial.begin(115200);
  wifi.conectar();
  wifi.stats();
  wifi.LocalIP();
}

void loop() {
}
