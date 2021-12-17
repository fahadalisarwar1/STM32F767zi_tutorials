/*
 * nucleo_stm32f767xx_info.h
 *
 *  Created on: Dec 16, 2021
 *      Author: Fahad
 */

#ifndef NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_INFO_H_
#define NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_INFO_H_


void display_board_info()
{
	uint32_t hclk = HAL_RCC_GetHCLKFreq();

	printf("Clock frequency is = %d\r\n", hclk);
}

#endif /* NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_INFO_H_ */
