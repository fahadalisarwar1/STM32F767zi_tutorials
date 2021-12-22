/*
 * stm32f7xx_msp.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */

#include "stm32f7xx_msp.h"

extern CAN_HandleTypeDef *hcan;


void HAL_CAN_MspInit(CAN_HandleTypeDef* hcan){


	// low level initialization for CAN peripheral;


	__HAL_RCC_GPIOB_CLK_ENABLE(); 		// enable can pins corresponding to gpio

	__HAL_RCC_CAN1_CLK_ENABLE(); // clock configuration


	// configure CAN pins
	// CAN1_RX  -> PB8    AF9
	// CAN1_TX  -> PB9    AF9

	GPIO_InitTypeDef can_t;

	can_t.Pin 			= GPIO_PIN_8 | GPIO_PIN_9;
	can_t.Mode 		 	= GPIO_MODE_AF_PP;
	can_t.Speed 	 	= GPIO_SPEED_FREQ_VERY_HIGH;
	can_t.Alternate		= GPIO_AF9_CAN1;

	HAL_GPIO_Init(GPIOB, &can_t);


    HAL_NVIC_SetPriority(CAN1_TX_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(CAN1_TX_IRQn);
    HAL_NVIC_SetPriority(CAN1_RX0_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(CAN1_RX0_IRQn);
    HAL_NVIC_SetPriority(CAN1_RX1_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(CAN1_RX1_IRQn);
    HAL_NVIC_SetPriority(CAN1_SCE_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(CAN1_SCE_IRQn);


}
