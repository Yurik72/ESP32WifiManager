// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       ESP32WifiManager.ino
    Created:	17.11.2019 17:34:17
    Author:     DESKTOP-OPL9DVO\yurik
*/
#include <Arduino.h>
#include "src/ESP32WifiManager.h"
#include <WiFi.h>
// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
ESP32WiFiManager wifiman;
char HOSTNAME[] = "ESP";
// The setup() function runs once each time the micro-controller starts
void setup()
{
	
	Serial.begin(115200);
	Serial.println("setup");
	if (!wifiman.autoConnect(HOSTNAME, NULL, true)) {
		ESP.restart();
		delay(1000);
	}
	
}

// Add the main program code into the continuous loop() function
void loop()
{
	Serial.println("loop");
	delay(1000);
}
