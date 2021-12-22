/*
 * stm32f7xx_it.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#include "main.h"  // to include HAL

#include "stm32f7xx_it.h"

extern CAN_HandleTypeDef hcan1;

void SysTick_Handler(void)
{
	HAL_IncTick();

}

void CAN1_RX0_IRQHandler(void)
{
  /* USER CODE BEGIN CAN1_RX0_IRQn 0 */

  /* USER CODE END CAN1_RX0_IRQn 0 */
  HAL_CAN_IRQHandler(&hcan1);
  /* USER CODE BEGIN CAN1_RX0_IRQn 1 */

  /* USER CODE END CAN1_RX0_IRQn 1 */
}
