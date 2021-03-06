

#include "main.h"


#include "nucleo_stm32f767xx_rcc.h"
#include "nucleo_stm32f767xx_gpio.h"
#include "nucleo_stm32f767xx_uart.h"

#include "utils.h"


int main(void)
{
	HAL_Init(); // Initializing HAL.

	rcc_clock_config_HSE();

	gpio_LED_Blue_init();


	uart_UART3_GPIO_config();
	uart_UART3_config();

	display_board_information();


    while (1){
		gpio_LED_Blue_toggle();
    	HAL_Delay(250);
    }



}




