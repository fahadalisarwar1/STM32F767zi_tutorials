/*
 * nucleo_stm32f767xx_rcc.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */
#include "nucleo_stm32f767xx_rcc.h"

bool rcc_clock_config(void)
{
	/*
	   * @brief Clock configuration parameters
	   *
	   * HSI = 16 MHz
	   * SYS_CLCK = 216 MHz
	   * HCLK = 216 MHz
	   * AHB_PreScaler = 1
	   * PLL_Multiplexer PLL_M =  /8
	   * PLL_N = *216
	   * PLL_P = /2
	   * PLL_Q = /2
	   * PLL_R = /2
	   *
	   * Cortex_prescaler = 1 --> 216 Mhz core clock
	   *
	   * APB1_Pre-scaler = 4 --> PCLK1 = 54 MHz
	   * APB2_Pre-scaler = 2 ---> PCLK2 = 106 MHz
	   *
	   */


	  /*
	   * Oscillator initialization   *
	   */
	    RCC_OscInitTypeDef oscInit_t = {0};



	    oscInit_t.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	    oscInit_t.HSIState = RCC_HSI_ON;
	    oscInit_t.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;

	    oscInit_t.PLL.PLLState = RCC_PLL_ON;
	    oscInit_t.PLL.PLLSource = RCC_PLLSOURCE_HSI;

	    oscInit_t.PLL.PLLM = 8;
	    oscInit_t.PLL.PLLN = 216;
	    oscInit_t.PLL.PLLP = RCC_PLLP_DIV2;
	    oscInit_t.PLL.PLLQ = 2;
	    oscInit_t.PLL.PLLR = 2;

	    if(HAL_RCC_OscConfig(&oscInit_t)!= HAL_OK)
	      {
	    		return false;
	      }

	    /**
	     * clock initialization
	     */

	    RCC_ClkInitTypeDef oscClk_t = {0};
	    oscClk_t.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	    oscClk_t.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	    oscClk_t.AHBCLKDivider = RCC_SYSCLK_DIV1;
	    oscClk_t.APB1CLKDivider = RCC_HCLK_DIV4;
	    oscClk_t.APB2CLKDivider = RCC_HCLK_DIV2;

	    if (HAL_RCC_ClockConfig(&oscClk_t, FLASH_LATENCY_7) != HAL_OK){
	    	return false;
	    }
	    return true;
}

bool rcc_clock_config_HSE(void)
{
	/*
	   * @brief Clock configuration parameters
	   *
	   * HSE = 8 MHz
	   * SYS_CLCK = 216 MHz
	   * HCLK = 216 MHz
	   * AHB_PreScaler = 1
	   * PLL_Multiplexer PLL_M =  /8
	   * PLL_N = *216
	   * PLL_P = /2
	   * PLL_Q = /2
	   * PLL_R = /2
	   *
	   * Cortex_prescaler = 1 --> 216 Mhz core clock
	   *
	   * APB1_Pre-scaler = 4 --> PCLK1 = 54 MHz
	   * APB2_Pre-scaler = 2 ---> PCLK2 = 106 MHz
	   *
	   */


	  /*
	   * Oscillator initialization   *
	   */
	    RCC_OscInitTypeDef oscInit_t = {0};



	    oscInit_t.OscillatorType 					= RCC_OSCILLATORTYPE_HSE;
	    oscInit_t.HSEState  						= RCC_HSE_BYPASS;
	    oscInit_t.HSICalibrationValue 				= RCC_HSICALIBRATION_DEFAULT;

	    oscInit_t.PLL.PLLState 						= RCC_PLL_ON;
	    oscInit_t.PLL.PLLSource 					= RCC_PLLSOURCE_HSE;

	    oscInit_t.PLL.PLLM 							= 4;
	    oscInit_t.PLL.PLLN 							= 216;
	    oscInit_t.PLL.PLLP 							= RCC_PLLP_DIV2;
	    oscInit_t.PLL.PLLQ 							= 2;
	    oscInit_t.PLL.PLLR 							= 2;

	    if(HAL_RCC_OscConfig(&oscInit_t)!= HAL_OK)
	      {
	    		return false;
	      }

	    /**
	     * clock initialization
	     */

	    RCC_ClkInitTypeDef oscClk_t = {0};
	    oscClk_t.ClockType 							= RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	    oscClk_t.SYSCLKSource 						= RCC_SYSCLKSOURCE_PLLCLK;
	    oscClk_t.AHBCLKDivider 						= RCC_SYSCLK_DIV1;
	    oscClk_t.APB1CLKDivider						= RCC_HCLK_DIV4;
	    oscClk_t.APB2CLKDivider 					= RCC_HCLK_DIV2;

	    if (HAL_RCC_ClockConfig(&oscClk_t, FLASH_LATENCY_7) != HAL_OK){
	    	return false;
	    }
	    return true;
}

