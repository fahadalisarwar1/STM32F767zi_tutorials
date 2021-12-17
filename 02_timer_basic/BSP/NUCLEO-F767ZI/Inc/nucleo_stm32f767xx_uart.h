/*
 * nucleo_stm32f767xx_uart.h
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#ifndef NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_UART_H_
#define NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_UART_H_

#include "main.h"

extern USART_HandleTypeDef husart3;


/**
 * @brief UART GPIO configuration
 *
 */

void uart_UART3_GPIO_config(void);


/**
 * @brief UART peripheral configuration
 *
 */

bool uart_UART3_config(void);

#endif /* NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_UART_H_ */
