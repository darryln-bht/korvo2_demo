/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "bsp/esp-bsp.h"
#include "lvgl.h"
#include "esp_log.h"

extern void example_lvgl_demo_ui(lv_obj_t *scr);
static char *TAG = "app_main";

void app_main(void)
{
    ESP_LOGI(TAG,"initializing display");
    bsp_display_start();
    bsp_display_backlight_on(); // Set display brightness to 100%

    ESP_LOGI(TAG, "Display LVGL animation");
    bsp_display_lock(0);
    lv_obj_t *scr = lv_disp_get_scr_act(NULL);
    example_lvgl_demo_ui(scr);

    bsp_display_unlock();
    bsp_display_backlight_on();
}
