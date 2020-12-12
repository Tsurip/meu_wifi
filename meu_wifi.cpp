#include "Arduino.h"
#include <ESP8266WiFi.h>
#include "meu_wifi.h"

Meu_Wifi::Meu_Wifi(String login, String pass)
{
  _login = login;
  _pass = pass;  
}

void Meu_Wifi::conectar()
{
  WiFi.begin(_login,_pass);
  Serial.println();
  Serial.println("*******Conectando********");

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  
  Serial.println();
  Serial.println("Conectado");
}

void Meu_Wifi::stats()
{
  if(WiFi.status() == WL_CONNECTED)
  {
    Serial.print("Conectado a rede local ");
    Serial.print(_login);
    Serial.print(". O IP do dispositivo é: ");
    Serial.print(WiFi.localIP());
    Serial.println("");
  }
  else
  {
    Serial.print("Não conectado! Verifique a rede e tente novamente.");
  }
}

void Meu_Wifi::LocalIP()
{
  Serial.print("O IP do dispositivo é: ");
  Serial.print(WiFi.localIP());
}
