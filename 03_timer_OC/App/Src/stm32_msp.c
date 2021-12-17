/*
 * stm32_msp.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */


#include "stm32_msp.h"

// msp.c
// this does the low level inits for timer 6


void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)
{
	//1. enable the clock for the TIM6 peripheral
	__HAL_RCC_TIM6_CLK_ENABLE();

	//2. Enable the IRQ of TIM6
	HAL_NVIC_EnableIRQ(TIM6_DAC_IRQn);

	//3. setup the priority for TIM6_DAC_IRQn
	HAL_NVIC_SetPriority(TIM6_DAC_IRQn,15,0);
}
