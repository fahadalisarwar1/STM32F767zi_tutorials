/*
 * stm32_msp.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */


#include "stm32_msp.h"

// msp.c
// this does the low level inits for timer 3


void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim)
{
	//1. enable the clock for the TIM6 peripheral
	__HAL_RCC_TIM3_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();


	GPIO_InitTypeDef OC_pin;
	OC_pin.Pin = GPIO_PIN_0;
	OC_pin.Mode = GPIO_MODE_AF_PP;
	OC_pin.Alternate = GPIO_AF2_TIM3;
	OC_pin.Speed = GPIO_SPEED_FREQ_VERY_HIGH;


	HAL_GPIO_Init(GPIOB, &OC_pin);

	//2. Enable the IRQ of TIM3
	HAL_NVIC_EnableIRQ(TIM3_IRQn);

	//3. setup the priority for TIM3_IRQn
	HAL_NVIC_SetPriority(TIM3_IRQn,15,0);



}
