/*
 * Copyright (c) 2025 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/** @file
 *
 * @defgroup Bare Metal XIAO nRF54L15 Board Configuration
 * @{
 */

#ifndef __BM_XIAO_SOFTDEVICE_BOARD_CONFIG
#define __BM_XIAO_SOFTDEVICE_BOARD_CONFIG

#include <hal/nrf_gpio.h>
#include <hal/nrf_uarte.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GPIO_ACTIVE_LOW 0

#ifndef BOARD_PIN_BTN_0
#define BOARD_PIN_BTN_0 NRF_PIN_PORT_TO_PIN_NUMBER(0, 0)
#endif

#ifndef BOARD_PIN_LED_0
#define BOARD_PIN_LED_0 NRF_PIN_PORT_TO_PIN_NUMBER(0, 2)
#endif

#ifndef BOARD_LED_ACTIVE_STATE
#define BOARD_LED_ACTIVE_STATE GPIO_ACTIVE_LOW
#endif

/* UART Logger configuration */
#ifndef BOARD_CONSOLE_UARTE_INST
#define BOARD_CONSOLE_UARTE_INST NRF_UARTE20
#endif

#ifndef BOARD_CONSOLE_UARTE_PIN_TX
#define BOARD_CONSOLE_UARTE_PIN_TX NRF_PIN_PORT_TO_PIN_NUMBER(9, 1)
#endif
#ifndef BOARD_CONSOLE_UARTE_PIN_CTS
#define BOARD_CONSOLE_UARTE_PIN_CTS NRF_UARTE_PSEL_DISCONNECTED
#endif

/* Application UART configuration */
#ifndef BOARD_APP_UARTE_INST
#define BOARD_APP_UARTE_INST NRF_UARTE21
#endif

#ifndef BOARD_APP_UARTE_PIN_TX
#define BOARD_APP_UARTE_PIN_TX NRF_PIN_PORT_TO_PIN_NUMBER(8, 2)
#endif
#ifndef BOARD_APP_UARTE_PIN_RX
#define BOARD_APP_UARTE_PIN_RX NRF_PIN_PORT_TO_PIN_NUMBER(7, 2)
#endif
#ifndef BOARD_APP_UARTE_PIN_RTS
#define BOARD_APP_UARTE_PIN_RTS NRF_UARTE_PSEL_DISCONNECTED
#endif
#ifndef BOARD_APP_UARTE_PIN_CTS
#define BOARD_APP_UARTE_PIN_CTS NRF_UARTE_PSEL_DISCONNECTED
#endif

#ifdef __cplusplus
}
#endif

#endif /* __BM_XIAO_SOFTDEVICE_BOARD_CONFIG */

/** @} */
