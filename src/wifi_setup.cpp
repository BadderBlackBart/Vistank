#include <Arduino.h>
#include <Wifi.h>
#include "wifi_setup.h"

const char* ssid     = "wn_eufraat";
const char* password = "AlleKinderenSpelenInDe53WeideTrAjala";

void connectToWiFi() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("\n--- WiFi Verbinding Starten ---");
    Serial.print("Verbinden met: ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("\nWiFi verbonden!");
    Serial.print("IP-adres: ");
    Serial.println(WiFi.localIP());
}
