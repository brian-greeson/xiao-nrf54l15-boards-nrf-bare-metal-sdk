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
extern "C"
{
#endif

#ifndef GPIO_ACTIVE_HIGH
#define GPIO_ACTIVE_HIGH 1
#endif

#ifndef GPIO_ACTIVE_LOW
#define GPIO_ACTIVE_LOW 0
#endif

#ifndef BOARD_PIN_BTN_0
#define BOARD_PIN_BTN_0 NRF_PIN_PORT_TO_PIN_NUMBER(0, 0)
#endif

#ifndef BOARD_PIN_LED_0
#define BOARD_PIN_LED_0 NRF_PIN_PORT_TO_PIN_NUMBER(0, 2)
#endif

#ifndef BOARD_LED_ACTIVE_STATE
#define BOARD_LED_ACTIVE_STATE GPIO_ACTIVE_LOW
#endif

/* UART logger configuration (XIAO UART20 TX/RX: P1.9/P1.8). */
#ifndef BOARD_CONSOLE_UARTE_INST
#define BOARD_CONSOLE_UARTE_INST NRF_UARTE20
#endif

#ifndef BOARD_CONSOLE_UARTE_PIN_TX
#define BOARD_CONSOLE_UARTE_PIN_TX NRF_PIN_PORT_TO_PIN_NUMBER(9, 1)
#endif

#ifndef BOARD_CONSOLE_UARTE_PIN_CTS
#define BOARD_CONSOLE_UARTE_PIN_CTS NRF_PIN_PORT_TO_PIN_NUMBER(8, 1)
#endif

/* IMU board wiring. */
#ifndef BOARD_IMU_TWIM_INST
#define BOARD_IMU_TWIM_INST NRF_TWIM30
#endif

#ifndef BOARD_IMU_TWIM_PIN_SDA
#define BOARD_IMU_TWIM_PIN_SDA NRF_PIN_PORT_TO_PIN_NUMBER(4, 0)
#endif

#ifndef BOARD_IMU_TWIM_PIN_SCL
#define BOARD_IMU_TWIM_PIN_SCL NRF_PIN_PORT_TO_PIN_NUMBER(3, 0)
#endif

#ifndef BOARD_IMU_PIN_DRDY
#define BOARD_IMU_PIN_DRDY NRF_PIN_PORT_TO_PIN_NUMBER(2, 0)
#endif

#ifndef BOARD_IMU_PIN_PWR_EN
#define BOARD_IMU_PIN_PWR_EN NRF_PIN_PORT_TO_PIN_NUMBER(1, 0)
#endif

#ifndef BOARD_IMU_I2C_ADDRESS
#define BOARD_IMU_I2C_ADDRESS 0x6A
#endif

#ifdef __cplusplus
}
#endif

#endif /* __BM_XIAO_NRF54L15_BOARD_CONFIG */

/** @} */
