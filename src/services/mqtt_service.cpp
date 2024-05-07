#include "mqtt_service.h"
#include <lvgl.h>
#include "../gui/ui_custom_events.h"

#define MAX_MQTT_CONNECT_TIMES 5

// MQTT broker details
const char *mqtt_server = "io.adafruit.com";
const int mqtt_port = 1883;
const char *mqtt_user = "";
const char *mqtt_password = "";

const char *topic_nutnhan1 = "khoitruong9802/feeds/nutnhan1";
const char *topic_nutnhan2 = "khoitruong9802/feeds/nutnhan2";
const char *topic_cambien1 = "khoitruong9802/feeds/cambien1";
const char *topic_cambien2 = "khoitruong9802/feeds/cambien2";
const char *topic_cambien3 = "khoitruong9802/feeds/cambien3";

// Initialize the WiFi and MQTT clients
WiFiClient espClient;
PubSubClient client(espClient);


void callback(char *topic, uint8_t *payload, unsigned int length)
{
  // char *mqtt_topic = new char[strlen(topic) + 1];
  // strcpy(mqtt_topic, topic);
  char *mqtt_payload = new char[length + 1];
  memcpy(mqtt_payload, payload, length);
  mqtt_payload[length] = '\0';

  Serial.printf("Message received: %s from %s\n", mqtt_payload, topic);

  if (strcmp(topic, "khoitruong9802/feeds/cambien1") == 0)
  {
    Serial.println("Update temp!!");
    // Serial.printf("data = %s, pointer = %p, pointer to = %p\n", mqtt_payload, &mqtt_payload, mqtt_payload);

    lv_event_send(ui_Label22, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)mqtt_payload);
  }
  else if (strcmp(topic, "khoitruong9802/feeds/cambien2") == 0)
  {
    Serial.println("Update humi!!");
    // Serial.printf("data = %s, pointer = %p, pointer to = %p\n", mqtt_payload, &mqtt_payload, mqtt_payload);

    lv_event_send(ui_Label27, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)mqtt_payload);
  }
  else if (strcmp(topic, "khoitruong9802/feeds/cambien3") == 0)
  {
    Serial.println("Update light!!");
    // Serial.printf("data = %s, pointer = %p, pointer to = %p\n", mqtt_payload, &mqtt_payload, mqtt_payload);

    lv_event_send(ui_Label26, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)mqtt_payload);
  }
  else if (strcmp(topic, "khoitruong9802/feeds/nutnhan1") == 0)
  {
    Serial.println("Update switch!!");
    lv_event_send(ui_Switch1, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, (void *)mqtt_payload);
  }
  else if (strcmp(topic, "khoitruong9802/feeds/nutnhan2") == 0)
  {
    Serial.println("Update switch!!");
    lv_event_send(ui_Switch2, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, (void *)mqtt_payload);
  }
}

uint8_t connect_mqtt()
{
  uint8_t connect_times = 0, connect_ok = 1;
  client.setServer(mqtt_server, mqtt_port);
  while (!client.connected() && connect_times < MAX_MQTT_CONNECT_TIMES)
  {
    connect_times++;
    Serial.println("Connecting to MQTT broker...");
    if (client.connect("ij34j32oj523kn6lk32n6ljoiij", mqtt_user, mqtt_password))
    {
      Serial.println("Connected to MQTT broker!");
      if (client.subscribe(topic_nutnhan1) && client.subscribe(topic_nutnhan2) && client.subscribe(topic_cambien1) && client.subscribe(topic_cambien2) && client.subscribe(topic_cambien3))
      {
        client.setCallback(callback);
        Serial.println("Subcribe to topic successfully!");
        connect_ok = 1;
      }
      else
      {
        Serial.println("Subcribe fail!");
        connect_ok = 0;
      }
    }
    else
    {
      Serial.print("Failed with state ");
      Serial.println(client.state());
      delay(2000);
    }
  }
  if (!client.connected()) {
    connect_ok = 0;
  }
  return connect_ok;
}

void mqtt_service(void *parameter)
{
  for (;;)
  {
    while (WiFi.status() != WL_CONNECTED)
    {
      // Connect to wifi
      Serial.println("Wifi disconnected!! Connect wifi to use MQTT");
      delay(500);
      continue;
    }
    if (!client.connected())
    {
      // Connect to MQTT broker
      uint8_t connect_ok = connect_mqtt();
      if (connect_ok == 0) {
        vTaskDelete(NULL);
      }
    }
    client.loop();
    delay(100);
  }
}
