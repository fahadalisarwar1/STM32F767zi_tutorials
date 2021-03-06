

#include "main.h"


#include "nucleo_stm32f767xx_rcc.h"
#include "nucleo_stm32f767xx_gpio.h"
#include "nucleo_stm32f767xx_uart.h"
#include "nucleo_stm32f767xx_timer.h"


#include "utils.h"


uint32_t counter = 0;
int main(void)
{
	HAL_Init(); // Initializing HAL.

	rcc_clock_config_HSE();

	gpio_LED_Blue_init();


	uart_UART3_GPIO_config();
	uart_UART3_config();

	timer_Init();



	display_board_information();
	timer_start();
    while (1){

    }
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{

}


