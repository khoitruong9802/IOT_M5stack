#include "wifi_service.h"
#include <WiFi.h>
#include <lvgl.h>
#include "../gui/ui_custom_events.h"

// WiFi credentials
const char *ssid = "";
const char *password = "";

void connect_wifi()
{
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  lv_event_send(ui_Image2, (lv_event_code_t)LV_EVENT_WIFI_ON, NULL);

}

void wifi_service(void *parameter) {
    for (;;) {
        if (WiFi.status() != WL_CONNECTED) {
            // Connect to wifi
            
            lv_event_send(ui_Image2, (lv_event_code_t)LV_EVENT_WIFI_OFF, NULL);
            connect_wifi();
        }
        delay(1000);
    }
}