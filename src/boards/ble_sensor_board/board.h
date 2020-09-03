/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BLE_SENSOR_BOARD_H
#define BLE_SENSOR_BOARD_H

#define _PINNUM(port, pin) ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER 2
#define LED_PRIMARY_PIN _PINNUM(0, 7)    // R
#define LED_SECONDARY_PIN _PINNUM(0, 4)  // G
#define LED_STATE_ON 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER 2
#define BUTTON_1 _PINNUM(0, 12) // S2 DFU
#define BUTTON_2 _PINNUM(0, 25) // N.C
#define BUTTONS_ACTIVE_STATE 0
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* UART
 *------------------------------------------------------------------*/
// #define RX_PIN_NUMBER 8
// #define TX_PIN_NUMBER 6
// #define CTS_PIN_NUMBER 2
// #define RTS_PIN_NUMBER 3
#define RX_PIN_NUMBER 8
#define TX_PIN_NUMBER 6
#define CTS_PIN_NUMBER 0
#define RTS_PIN_NUMBER 0
#define HWFC false

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID 0x2786
#define USB_DESC_UF2_PID 0xf000
#define USB_DESC_CDC_ONLY_PID 0xf001

// Used as model string in OTA mode
#define BLEDIS_MANUFACTURER "Switch Science, Inc."
#define BLEDIS_MODEL "ISP1807 BLE Sensor Board"

#define UF2_PRODUCT_NAME "ISP1807 BLE Sensor Board"
#define UF2_BOARD_ID "ISP1807 BLE Sensor Board Rev.1"
#define UF2_INDEX_URL "https://www.switch-science.com/catalog/xxxx/"

#endif  // BLE_SENSOR_BOARD_H
