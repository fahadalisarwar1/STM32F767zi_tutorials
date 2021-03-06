

#include "main.h"


#include "nucleo_stm32f767xx_rcc.h"
#include "nucleo_stm32f767xx_gpio.h"
#include "nucleo_stm32f767xx_uart.h"
#include "utils.h"
#include "nucleo_stm32f767xx_can.h"


int rxx;

int main(void)
{
	HAL_Init(); // Initializing HAL.

	rcc_clock_config_HSE();

	gpio_LED_Blue_init();


	uart_UART3_GPIO_config();
	uart_UART3_config();


	CAN_Init_250kbps();

	display_board_information();


    while (1){
    	CAN_sendFrame();
		gpio_LED_Blue_toggle();
    	HAL_Delay(1000);
    }



}


void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{

	HAL_CAN_GetRxMessage(&hcan1, CAN_RX_FIFO0, &RxHeader, RxData);

	rxx++;
}


