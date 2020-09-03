#ifndef ISP1807_BREAKOUT_H
#define ISP1807_BREAKOUT_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         2
#define LED_PRIMARY_PIN     6
#define LED_SECONDARY_PIN   7
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER      2
#define BUTTON_1            _PINNUM(1,6)
#define BUTTON_2            _PINNUM(1,7)
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER    "Switch Science, Inc."
#define BLEDIS_MODEL           "ISP1807 Breakout"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

// Shared VID/PID with Feather nRF52840, will be disabled for building in the future
#define USB_DESC_VID           0x2786
#define USB_DESC_UF2_PID       0x920B
#define USB_DESC_CDC_ONLY_PID  0x920C

#define UF2_PRODUCT_NAME    "ISP1807 Breakout"
#define UF2_BOARD_ID        "ISP1807 Breakout Rev.A"
#define UF2_INDEX_URL       "http://ssci.to/6100"

#endif // ISP1807_BREAKOUT_H
