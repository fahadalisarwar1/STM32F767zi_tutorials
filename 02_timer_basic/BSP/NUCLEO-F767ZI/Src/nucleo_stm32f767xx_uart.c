/*
 * nucleo_stm32f767xx_uart.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#include "nucleo_stm32f767xx_uart.h"

USART_HandleTypeDef husart3;

void uart_UART3_GPIO_config()
{
    /**
     * TX = PD8
     * RX = PD9
     * 1 Enable cllock for Port D
     * 2: set GPIO_TypeDef to corresponding values
     */

     __HAL_RCC_GPIOD_CLK_ENABLE();
     GPIO_InitTypeDef gpio_tx_t;

     gpio_tx_t.Pin = GPIO_PIN_8;
     gpio_tx_t.Mode = GPIO_MODE_AF_PP;
     gpio_tx_t.Speed = GPIO_SPEED_FREQ_HIGH;
     gpio_tx_t.Alternate = GPIO_AF7_USART3;
     HAL_GPIO_Init(GPIOD, &gpio_tx_t);

     GPIO_InitTypeDef gpio_rx_t;

     gpio_rx_t.Pin = GPIO_PIN_9;
     gpio_rx_t.Mode = GPIO_MODE_INPUT;
     gpio_rx_t.Pull = GPIO_NOPULL;
     gpio_rx_t.Speed = GPIO_SPEED_FREQ_HIGH;
     HAL_GPIO_Init(GPIOD, &gpio_rx_t);




}


bool uart_UART3_config()
{
    __HAL_RCC_USART3_CLK_ENABLE();

    husart3.Instance = USART3;
    husart3.Init.BaudRate = 115200;
    husart3.Init.WordLength = UART_WORDLENGTH_8B;
    husart3.Init.Parity = UART_PARITY_NONE;
    husart3.Init.StopBits = UART_STOPBITS_1;
    husart3.Init.Mode= UART_MODE_TX_RX;

    if(HAL_USART_Init(&husart3) != HAL_OK)
      {
    		return false;
      }
    return true;

}
