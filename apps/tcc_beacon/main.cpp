#include "pico/stdlib.h"

#include "btstack.h"
#include "pico/cyw43_arch.h"
#include "server_functions.h"
#include "stdlib.h"

#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"

int main() {
  stdio_init_all();

  sleep_ms(3000);

  if (cyw43_arch_init()) {
    printf("cyw43_init error\n");
    return 0;
  }

  l2cap_init();
  sm_init();

  TaskHandle_t adv_task = NULL;

  xTaskCreate(
      [](void *param) {
        // setup advertisements
        uint16_t adv_int_min = 0x0020;
        uint16_t adv_int_max = 0x0020;

        uint8_t adv_type = 2; // only advertisement, not connectable.
        bd_addr_t null_addr;
        memset(null_addr, 0, 6);
        gap_advertisements_set_params(adv_int_min, adv_int_max, adv_type, 0,
                                      null_addr, 0x07, 0x00);
        gap_advertisements_set_data(adv_data_len, (uint8_t *)adv_data);
        gap_advertisements_enable(true);

        hci_power_control(HCI_POWER_ON);

        while (true) {
          adv_temp_humi_handler(&adv_temp_humi);
          // vTaskDelay(100);
          // hci_power_control(HCI_POWER_OFF);
          vTaskDelay(10000);
        }
      },
      "Adv Task", 1024, NULL, tskIDLE_PRIORITY, &adv_task);

  vTaskStartScheduler();

  return 0;
}