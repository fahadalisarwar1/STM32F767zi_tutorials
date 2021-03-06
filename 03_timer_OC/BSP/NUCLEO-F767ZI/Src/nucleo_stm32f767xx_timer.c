/*
 * nucleo_stm32f767xx_timer.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */

#include "nucleo_stm32f767xx_timer.h"




// TIMER 3 CHANNEL 4 is connected to PB0 which is green LED on the nucleo board so we will use this pin as OC channel.

// TIM3 is connected to APB1
void timer_Init()
{
	htimer3.Instance = TIM3;
	// clock freq  =  108 Mhz
	// prescaler = 2000
	// 108 Mhz / 2000 = 54000 Hz
	// this means each cycle takees 18.5 us
	// to get 1 second, we use 54000  cycles





	htimer3.Init.Prescaler 			= 2000 - 1;
	htimer3.Init.Period 			= 54000 - 1;

	HAL_TIM_OC_Init(&htimer3);
	TIM_OC_InitTypeDef sConfig;
	sConfig.OCMode     = TIM_OCMODE_TOGGLE;

	sConfig.OCPolarity = TIM_OCPOLARITY_LOW;
	HAL_TIM_OC_ConfigChannel(&htimer3, &sConfig, TIM_CHANNEL_3);


}

void timer_start(void)
{

	HAL_TIM_OC_Start_IT(&htimer3, TIM_CHANNEL_3);


}
