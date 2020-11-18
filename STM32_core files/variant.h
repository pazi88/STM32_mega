/*
 *******************************************************************************
 * Copyright (c) 2017, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
#if defined(ARDUINO_BLACK_F407VE) || defined(ARDUINO_BLACK_F407VG)

#define PA10 0
#define PA9  1
#define PD7  2
#define PB6  3
#define PD11 4
#define PD10 5
#define PD9  6
#define PD8  7
#define PB15 8
#define PB14 9
#define PB12 10
#define PB13 11
#define PA8  12
#define PD2  13 // SD CMD
#define PD5  14
#define PD6  15
#define PB10 16
#define PB11 17
#define PD4  18
#define PD3  19
#define PD0  20 // CAN RX
#define PD1  21 // CAN TX
#define PC12 22 // SD SCK
#define PC8  23 // SD D0
#define PA15 24
#define PC9  25 // SD D1
#define PC7  26
#define PC10 27 // SD D2
#define PC6  28
#define PC11 29 // SD D3
#define PD14 30
#define PD15 31
#define PD12 32
#define PD13 33
#define PE5  34
#define PE15 35
#define PE4  36
#define PE14 37
#define PE3  38
#define PE13 39
#define PE2  40
#define PE12 41
#define PE10 42
#define PB7  43
#define PB3  44 // SPI1 CLK
#define PE11 45
#define PE0  46
#define PE9  47
#define PE6  48
#define PE8  49
#define PE7  50
#define PB8  51
#define PC13 52
#define PB9  53
#define PA0  54 // A0
#define PA1  55 // A1
#define PA2  56 // A2
#define PA3  57 // A3
#define PA4  58 // A4
#define PA5  59 // A5
#define PA6  60 // A6
#define PA7  61 // A7
#define PB0  62 // A8
#define PB1  63 // A9
#define PC0  64 // A10
#define PC1  65 // A11
#define PC2  66 // A12
#define PC3  67 // A13
#define PC4  68 // A14
#define PC5  69 // A15
#define PA11 70 // USB_DP
#define PA12 71 // USB_DM
#define PE1  72 // SPI-Flash CS
#define PB4  73 // SPI1 MOSI
#define PB5  74 // SPI1 MISO

// This must be a literal
#define NUM_DIGITAL_PINS        75
// This must be a literal with a value less than or equal to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       16
#define NUM_ANALOG_FIRST        54

// On-board LED pin number
#define LED_D2                  PE12
//#define LED_D3                  PA7

#define LED_BUILTIN             LED_D2

// Board specific button
// #define BTN_K_UP                PA0

#endif // ARDUINO_BLACK_F407VE || ARDUINO_BLACK_F407VG

#if defined(ARDUINO_BLACK_F407ZE) || defined(ARDUINO_BLACK_F407ZG)
// Left Side
#define PB12 0
#define PB13 1
#define PB14 2
#define PB15 3
#define PD8  4
#define PD9  5
#define PD10 6
#define PD11 7
#define PD12 8
#define PD13 9
#define PD14 10
#define PD15 11
#define PG2  12
#define PG3  13
#define PG4  14
#define PG5  15
#define PG6  16
#define PG7  17
#define PG8  18
#define PC6  19
#define PC7  20
#define PC8  21
#define PC9  22
#define PA8  23
#define PA9  24
#define PA10 25
#define PA11 26 // USB_DM
#define PA12 27 // USB_DP
#define PA13 28
#define PA14 29
#define PA15 30
#define PC10 31
#define PC11 32
#define PC12 33
#define PD0  34
#define PD1  35
#define PD2  36
#define PD3  37
#define PD4  38
#define PD5  39
#define PD6  40
#define PD7  41
#define PG9  42
#define PG10 43
#define PG11 44
#define PG12 45
#define PG13 46
#define PG14 47
#define PG15 48
#define PB3  49
#define PB4  50
#define PB5  51
#define PB6  52
#define PB7  53
#define PB8  54
#define PB9  55

// Right Side
#define PB10 56
#define PB11 57
#define PE14 58
#define PE15 59
#define PE12 60
#define PE13 61
#define PE10 62
#define PE11 63
#define PE8  64
#define PE9  65
#define PG1  66
#define PE7  67
#define PF15 68
#define PG0  69
#define PF13 70
#define PF14 71
#define PF11 72
#define PF12 73
#define PB2  74
#define PB1  75 // A0
#define PC5  76 // A1
#define PB0  77 // A2
#define PA7  78 // A3
#define PC4  79 // A4
#define PA5  80 // A5
#define PA6  81 // A6
#define PA3  82 // A7
#define PA4  83 // A8
#define PA1  84 // A9
#define PA2  85 // A10
#define PC3  86 // A11
#define PA0  87 // A12/PA_0(WK_UP): BUT K_UP)
#define PC1  88 // A13
#define PC2  89 // A14
#define PC0  90 // A15
#define PF8  91 // A16
#define PF6  92 // A17
#define PF7  93 // A18
#define PF9  94 // LED D1 (active low)
#define PF10 95 // LED D2 (active low)
#define PF4  96
#define PF5  97
#define PF2  98
#define PF3  99
#define PF0  100
#define PF1  101
#define PE6  102
#define PC13 103
#define PE4  104 // BUT K0
#define PE5  105 // BUT K1
#define PE2  106
#define PE3  107
#define PE0  108
#define PE1  109

// This must be a literal
#define NUM_DIGITAL_PINS        110
// This must be a literal with a value less than or equal to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       19
#define NUM_ANALOG_FIRST        75

// On-board LED pin number
#define LED_D2                  PF10
#define LED_D1                  PF9

// Board specific button
#define BTN_WK_UP                PA0

#endif // ARDUINO_BLACK_F407ZE || ARDUINO_BLACK_F407ZG

#define LED_BUILTIN             LED_D2
#define LED_GREEN               LED_D2

// On-board user button
#define BTN_K0                  PE4
#define BTN_K1                  PE3
#define USER_BTN                BTN_K0

// Below SPI and I2C definitions already done in the core
// Could be redefined here if differs from the default one
// SPI Definitions
#define PIN_SPI_SS              PB7 // NRF24 connector
#define PIN_SPI_SS1             PB0 // W25Q16 (on board flash)
#define PIN_SPI_MOSI            PB5 // NRF24 connector & W25Q16 (on board flash)
#define PIN_SPI_MISO            PB4 // NRF24 connector & W25Q16 (on board flash)
#define PIN_SPI_SCK             PB3 // NRF24 connector & W25Q16 (on board flash)

// I2C Definitions
#define PIN_WIRE_SDA            PB9
#define PIN_WIRE_SCL            PB8

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1

// Default pin used for 'Serial' instance
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

/* Extra HAL modules */
#define HAL_DAC_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED

// This indicates that there is an external and fixed 1.5k pullup
// on the D+ line. This define is only needed on boards that have
// internal pullups *and* an external pullup. Note that it would have
// been better to omit the pullup and exclusively use the internal
// pullups instead.
#define USBD_FIXED_PULLUP

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */