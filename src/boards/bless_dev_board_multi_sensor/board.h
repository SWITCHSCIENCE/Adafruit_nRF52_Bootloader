#ifndef BLESS_DEV_BOARD_MULTI_SENSOR_H
#define BLESS_DEV_BOARD_MULTI_SENSOR_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         2
#define LED_PRIMARY_PIN     7
#define LED_SECONDARY_PIN   4
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER      2
#define BUTTON_1            31
#define BUTTON_2            12
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER    "Switch Science, Inc."
#define BLEDIS_MODEL           "BLE-SS dev board Multi Sensor"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

// Shared VID/PID with Feather nRF52840, will be disabled for building in the future
#define USB_DESC_VID           0x2786
#define USB_DESC_UF2_PID       0x9208
#define USB_DESC_CDC_ONLY_PID  0x9209

#define UF2_PRODUCT_NAME    "BLE-SS dev board Multi Sensor"
#define UF2_BOARD_ID        "BLE-SS dev board Multi Sensor Rev.A"
#define UF2_INDEX_URL       "http://ssci.to/6250"

#endif // BLESS_DEV_BOARD_MULTI_SENSOR_H
