/*
 * nucleo_stm32f767xx_exti.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */


#include "nucleo_stm32f767xx_exti.h"


void exti_BUTTON_IT_init()
{
	__HAL_RCC_GPIOC_CLK_ENABLE();

    GPIO_InitTypeDef btn_t;
    btn_t.Pin = GPIO_PIN_13;
    btn_t.Mode = GPIO_MODE_IT_RISING;
    btn_t.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOC, &btn_t);

    /**
     * ENABLE NVIC
     */

    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

}
