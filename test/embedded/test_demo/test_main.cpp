#include <unity.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void setUp(void) {}

void tearDown(void) {}

void test_toPass(void) {
    TEST_ASSERT_TRUE(1);
}

void test_toFail(void) {
    TEST_ASSERT_TRUE(0);
}

extern "C" { // This switch allows the ROS C-implementation to find this main
void app_main(void);
}

void app_main(void) {
        vTaskDelay(pdMS_TO_TICKS(2000));

    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_toPass);
    RUN_TEST(test_toFail);
    UNITY_END(); // stop unit testing
}


