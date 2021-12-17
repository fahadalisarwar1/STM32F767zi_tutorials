/*
 * stm32f7xx_it.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#include "main.h"  // to include HAL

#include "stm32f7xx_it.h"
#include "nucleo_stm32f767xx_adc.h"



void SysTick_Handler(void)
{
	HAL_IncTick();

}

void EXTI15_10_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_13);
}

void ADC_IRQHandler(void)
{
	HAL_ADC_IRQHandler(&adc1_handler);

}
