/*
 * stm32f7xx_it.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#include "main.h"  // to include HAL

#include "stm32f7xx_it.h"

extern TIM_HandleTypeDef htimer6;

void SysTick_Handler(void)
{
	HAL_IncTick();

}

void TIM6_DAC_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&htimer6);
}
