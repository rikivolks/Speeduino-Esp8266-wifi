// ESP8266 wifi for speeduino code  on tx rx d0 d1  need to plug rx to tx and rx to tx //
// work on esp8266 wemos d1 r2, esp8266 -01
// LED Open when Tuner Studio is connected When lost communication the led keep open


#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#define UART_BAUD 115200
#define packTimeout 1
#define bufferSize 8192

const char * ssid = "SPEEDUINO";                         // write name wifi
const char * pw = "123456789";                           // write password over 6 number or word if you want work
IPAddress ip (192, 168, 1 , 80);                        // ip for tuner studio 
IPAddress netmask (255, 255, 255, 0); 
const int port = 2000;                                   // port


WiFiServer server (port);
WiFiClient client;
uint8_t buf1 [bufferSize];
uint16_t i1=0;
uint8_t buf2 [bufferSize];
uint16_t i2=0;


void setup() {
     Serial.begin (UART_BAUD); 
   { WiFi.mode(WIFI_AP);
     WiFi.softAPConfig (ip, ip, netmask);
     WiFi.softAP (ssid, pw);
     Serial.println("Starting TCP Server");
     server.begin();
   }
  }

void loop() {
      if(!client.connected()) {
      client = server.available();
      return;
  }

   if(client.available()) {
     while(client.available()) {
       buf1[i1] = (uint8_t) client.read() ;
       if(i1<bufferSize-1) i1++;
     }
      Serial.write (buf1, i1);
      i1 = 0 ;
   }

    if(Serial.available()) {
    while(1) {
    if(Serial.available()) {
      buf2[i2] = (char)Serial.read();
      if(i2<bufferSize-1) i2++;
    } else{
      delay(packTimeout);
    if(!Serial.available()) { 
       pinMode(LED_BUILTIN, OUTPUT); 
       digitalWrite(BUILTIN_LED, LOW); 

       break;
      }  
    }
  }
  client.write((char*)buf2, i2);
i2 = 0;

}

}






