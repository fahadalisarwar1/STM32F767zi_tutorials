/*
 * nucleo_stm32f767xx_timer.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */

#include "nucleo_stm32f767xx_timer.h"


void timer_Init()
{
	htimer6.Instance = TIM6;
	// timer clock is 108 Mhz
	// scale it by 2
	// now clock is 54 Mhz
	// one clock cycle is .185 ns
	// count up to 54000 to have 1 ms delay
	// the interrupt will be triggered every 1 ms

	// set up a variable in ISR and count up every time.
	// this variable should give you ticks in ms


	htimer6.Init.Prescaler 			= 2 - 1;
	htimer6.Init.Period 			= 54000 - 1;

	HAL_TIM_Base_Init(&htimer6);

}

void timer_start(void)
{
	HAL_TIM_Base_Start_IT(&htimer6);


}
