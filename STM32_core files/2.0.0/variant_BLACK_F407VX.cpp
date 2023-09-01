/*
 *******************************************************************************
 * Copyright (c) 2017-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_BLACK_F407VE) || defined(ARDUINO_BLACK_F407VG)

#include "pins_arduino.h"

// Digital PinName array
// This array allows to wrap Arduino pin number(Dx or x)
// to STM32 PinName (PX_n)
const PinName digitalPin[] = {
  PC_9,   PC_8,   // D0, D1
  PD_7,   PB_6,
  PD_11,  PD_10,
  PD_9,   PD_8,
  PB_15,  PB_14,
  PB_12,  PB_13,   // D10, D11
  PA_8,   PD_2,
  PD_5,   PD_6,
  PC_12,  PC_11,
  PD_4,   PD_3,
  PD_0,   PD_1,   // D20, D21
  PA_10,  PA_9,
  PA_15,  PB_10,
  PC_7,   PB_11,
  PC_6,   PC_10,
  PD_14,  PD_15,  // D30, D31
  PD_12,  PD_13,
  PE_5,   PE_15,
  PE_4,   PE_14,
  PE_3,   PE_13,
  PE_2,   PE_12,   // D40, D41
  PE_10,  PB_7,
  PB_3,   PE_11,
  PE_0,   PE_9,
  PE_6,   PE_8,
  PE_7,   PB_8,   // D50, D51
  PC_13,  PB_9,
  PA_0,   PA_1,
  PA_2,   PA_3,
  PA_4,   PA_5,
  PA_6,   PA_7,   // D60, D61
  PB_0,   PB_1,
  PC_0,   PC_1,
  PC_2,   PC_3,
  PC_4,   PC_5,
  PA_11,  PA_12,  // D70, D71
  PE_1,   PB_4,
  PB_5,
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  54, // A0
  55, // A1
  56, // A2
  57, // A3
  58, // A4
  59, // A5
  60, // A6
  61, // A7
  62, // A8
  63, // A9
  64, // A10
  65, // A11
  66, // A12
  67, // A13
  68, // A14
  69  // A15

};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};

  /**Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    Error_Handler();
  }

  /* Ensure CCM RAM clock is enabled */
  __HAL_RCC_CCMDATARAMEN_CLK_ENABLE();

}

#ifdef __cplusplus
}
#endif

#endif /* ARDUINO_BLACK_F407VE || ARDUINO_BLACK_F407VG */