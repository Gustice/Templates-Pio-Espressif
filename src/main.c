#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include <stdio.h>

void app_main() {
    vTaskDelay(pdMS_TO_TICKS(2000));
    printf("Hello world!\n");

    while (1) {
        ESP_LOGI("main", "Tick");
        vTaskDelay(pdMS_TO_TICKS(1000));
        ESP_LOGW("main", "Tack");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}