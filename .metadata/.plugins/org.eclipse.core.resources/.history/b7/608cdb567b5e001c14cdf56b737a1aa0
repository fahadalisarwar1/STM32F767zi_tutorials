

#include "main.h"


#include "nucleo_stm32f767xx_rcc.h"
#include "nucleo_stm32f767xx_gpio.h"
#include "nucleo_stm32f767xx_adc.h"
#include "nucleo_stm32f767xx_uart.h"



int main(void)
{
	HAL_Init(); // Initializing hal.

	rcc_clock_config();

	gpio_LED_Blue_init();


	uart_UART3_GPIO_config();
	uart_UART3_config();
	printf("program starting....\r\n");

	adc_GPIO_init();
	adc_single_conversion_init();
	uint16_t adcValue  = 0;
    while(1)
    {

    	HAL_ADC_Start(&adc1_handler);

    	if(HAL_ADC_PollForConversion(&adc1_handler, 10) == HAL_OK)
    	{
    		adcValue = HAL_ADC_GetValue(&adc1_handler);
    		gpio_LED_Blue_write(1);
    		printf("adc value is  = %u\r\n", adcValue);
    		HAL_Delay(10);
    		gpio_LED_Blue_write(0);
    	}

    	HAL_Delay(250);
    }
}
