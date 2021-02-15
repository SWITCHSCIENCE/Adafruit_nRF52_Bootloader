#ifndef ISP1807_MICRO_BOARD_H
#define ISP1807_MICRO_BOARD_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         1
#define LED_PRIMARY_PIN     _PINNUM(0,31)
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER      2
#define BUTTON_1            _PINNUM(1,14)
#define BUTTON_2            _PINNUM(1,15)
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER    "Switch Science, Inc."
#define BLEDIS_MODEL           "ISP1807 Micro Board"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

// Shared VID/PID with Feather nRF52840, will be disabled for building in the future
#define USB_DESC_VID           0x2786
#define USB_DESC_UF2_PID       0x920B
#define USB_DESC_CDC_ONLY_PID  0x920C

#define UF2_PRODUCT_NAME    "ISP1807 Micro Board"
#define UF2_BOARD_ID        "ISP1807 Micro Board Rev.A"
#define UF2_INDEX_URL       "http://ssci.to/6939"

#endif // ISP1807_MICRO_BOARD_H
