#include "ui_custom_events.h"
#include <M5Unified.h>

uint32_t LV_EVENT_MQTT_UPDATE_LABEL = lv_event_register_id();
uint32_t LV_EVENT_MQTT_UPDATE_SWITCH = lv_event_register_id();
uint32_t LV_EVENT_RTC_UPDATE_LABEL = lv_event_register_id();
uint32_t LV_EVENT_WIFI_OFF = lv_event_register_id();
uint32_t LV_EVENT_WIFI_ON = lv_event_register_id();

void mqtt_update_handler(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    char *data = (char *)e->param;
    Serial.printf("data = %s, pointer = %p, pointer to = %p\n", data, &data, data);
    if (event_code == LV_EVENT_MQTT_UPDATE_LABEL) {
        _ui_label_set_property(target, _UI_LABEL_PROPERTY_TEXT, data);
    } else if (event_code == LV_EVENT_MQTT_UPDATE_SWITCH) {
        if (strcmp(data, "0") == 0) {
            _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        } else if (strcmp(data, "1") == 0) {
            _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        }
    }
    delete[] data;
}

void rtc_update_handler(lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    char *data = (char *)e->param;
    Serial.printf("data = %s, pointer = %p, pointer to = %p\n", data, &data, data);
    if (event_code == LV_EVENT_RTC_UPDATE_LABEL) {
        _ui_label_set_property(target, _UI_LABEL_PROPERTY_TEXT, data);
    }
    delete[] data;
}

void wifi_update_handler(lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if (event_code == LV_EVENT_WIFI_OFF) {
        _ui_flag_modify(ui_Image2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    } else if (event_code == LV_EVENT_WIFI_ON) {
        _ui_flag_modify(ui_Image2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}