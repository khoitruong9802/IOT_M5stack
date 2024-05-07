// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: m5core2

#include "../ui.h"

void ui_AppScreen_screen_init(void)
{
    ui_AppScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_AppScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_AppScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AppScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_AppScreen);
    lv_obj_set_width(ui_Panel5, 320);
    lv_obj_set_height(ui_Panel5, 240);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel5, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_Panel5);
    lv_obj_set_width(ui_Panel6, 320);
    lv_obj_set_height(ui_Panel6, 240);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel6, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Panel6, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_Panel3, 250);
    lv_obj_set_height(ui_Panel3, 55);
    lv_obj_set_x(ui_Panel3, 0);
    lv_obj_set_y(ui_Panel3, 2);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel3, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x353535), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel9 = lv_obj_create(ui_Panel3);
    lv_obj_set_width(ui_Panel9, 50);
    lv_obj_set_height(ui_Panel9, 50);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel9, &ui_img_setting_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Settings");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_Panel1, 250);
    lv_obj_set_height(ui_Panel1, 55);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 2);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x353535), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel7 = lv_obj_create(ui_Panel1);
    lv_obj_set_width(ui_Panel7, 50);
    lv_obj_set_height(ui_Panel7, 50);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel7, &ui_img_folder_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Files");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel11 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_Panel11, 250);
    lv_obj_set_height(ui_Panel11, 55);
    lv_obj_set_x(ui_Panel11, 0);
    lv_obj_set_y(ui_Panel11, 2);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel11, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel11, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel11, lv_color_hex(0x353535), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel12 = lv_obj_create(ui_Panel11);
    lv_obj_set_width(ui_Panel12, 50);
    lv_obj_set_height(ui_Panel12, 50);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel12, &ui_img_mqtt_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "MQTT");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel8 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_Panel8, 250);
    lv_obj_set_height(ui_Panel8, 55);
    lv_obj_set_x(ui_Panel8, 0);
    lv_obj_set_y(ui_Panel8, 2);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel8, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel8, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0x353535), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel10 = lv_obj_create(ui_Panel8);
    lv_obj_set_width(ui_Panel10, 50);
    lv_obj_set_height(ui_Panel10, 50);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel10, &ui_img_clock_item_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Clock");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel13 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_Panel13, 250);
    lv_obj_set_height(ui_Panel13, 55);
    lv_obj_set_x(ui_Panel13, 0);
    lv_obj_set_y(ui_Panel13, 2);
    lv_obj_set_align(ui_Panel13, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel13, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel13, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel13, lv_color_hex(0x353535), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel13, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel14 = lv_obj_create(ui_Panel13);
    lv_obj_set_width(ui_Panel14, 50);
    lv_obj_set_height(ui_Panel14, 50);
    lv_obj_set_align(ui_Panel14, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel14, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel14, &ui_img_about_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel14, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "About");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Panel3, ui_event_Panel3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel11, ui_event_Panel11, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel13, ui_event_Panel13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AppScreen, ui_event_AppScreen, LV_EVENT_ALL, NULL);

}