#pragma once

#include "btstack.h"
#include "math.h"
#include "physical_activity_monitor.h"

#include "tensorflow/lite/micro/micro_interpreter.h"

#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"
#include <stdio.h>

#define HEARTBEAT_PERIOD_MS 10000

extern uint8_t adv_data[];
extern uint8_t adv_data_len;

extern float activity;
extern uint16_t activity_i;

extern bool le_notification_enabled;

extern hci_con_handle_t con_handle;
extern btstack_packet_callback_registration_t hci_event_callback_registration;
extern btstack_timer_source_t activity_summary_noti;

extern tflite::MicroInterpreter *interpreter;

uint16_t att_read_callback(hci_con_handle_t connection_handle,
                           uint16_t att_handle, uint16_t offset,
                           uint8_t *buffer, uint16_t buffer_size);

int att_write_callback(hci_con_handle_t connection_handle, uint16_t att_handle,
                       uint16_t transaction_mode, uint16_t offset,
                       uint8_t *buffer, uint16_t buffer_size);

void activity_summary_handle(struct btstack_timer_source *ts);

void packet_handler(uint8_t packet_type, uint16_t channel, uint8_t *packet,
                    uint16_t size);

void init_ble_service();