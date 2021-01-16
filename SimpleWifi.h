#ifndef SimpleWifi_h
#define SimpleWifi_h
#include "Arduino.h"

extern void connectWifi(char *wifiSSID, char *wifiPassword);
extern bool isWiFiConnected();
extern void checkInternet(char *wifiSSID, char *wifiPassword, char *connectionTestHost = "172.217.8.96", unsigned int connectionTestPort = 80, char *connectionTestPath = "/");

#endif