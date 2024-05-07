#include <lvgl.h>
#include "ui_start.h"
#include "ui.h"
#include "driver/lvgl_driver.h"
#include "ui_custom_events.h"

void custom_event_init() {
    lv_obj_add_event_cb(ui_Label22, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Label27, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Label26, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Switch1, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, NULL);
    lv_obj_add_event_cb(ui_Switch2, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, NULL);
    lv_obj_add_event_cb(ui_Label1, rtc_update_handler, (lv_event_code_t)LV_EVENT_RTC_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Label2, rtc_update_handler, (lv_event_code_t)LV_EVENT_RTC_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Image2, wifi_update_handler, (lv_event_code_t)LV_EVENT_WIFI_OFF, NULL);
    lv_obj_add_event_cb(ui_Image2, wifi_update_handler, (lv_event_code_t)LV_EVENT_WIFI_ON, NULL);
}

void ui_start() {
    lv_init();
    lvgl_driver_init();
    ui_init();
    custom_event_init();
}