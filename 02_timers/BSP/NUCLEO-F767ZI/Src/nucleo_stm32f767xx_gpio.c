/*
 * nucleo_stm32f767xx_gpio.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */


#include "nucleo_stm32f767xx_gpio.h"

/*************************************************************************************************************************************************************************/

void gpio_LED_Green_init()
{

    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef led_green_t;
    led_green_t.Pin = GREEN_LED;
    led_green_t.Mode = GPIO_MODE_OUTPUT_PP;
    led_green_t.Pull = GPIO_NOPULL;
    led_green_t.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &led_green_t);
}

/*---------------------------------------------*/

void gpio_LED_Green_write(bool state)
{
	HAL_GPIO_WritePin(GPIOB, GREEN_LED, state);
}

/*---------------------------------------------*/

void gpio_LED_Green_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOB, GREEN_LED);
}


/*************************************************************************************************************************************************************************/


void gpio_LED_Blue_init()
{

    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef led_blue_t;
    led_blue_t.Pin = BLUE_LED;
    led_blue_t.Mode = GPIO_MODE_OUTPUT_PP;
    led_blue_t.Pull = GPIO_NOPULL;
    led_blue_t.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &led_blue_t);
}

/*---------------------------------------------*/
void gpio_LED_Blue_write(bool state)
{
	HAL_GPIO_WritePin(GPIOB, BLUE_LED, state);
}
/*---------------------------------------------*/

void gpio_LED_Blue_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOB, BLUE_LED);
}

/*************************************************************************************************************************************************************************/

void gpio_LED_Red_init()
{

    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef led_red_t;
    led_red_t.Pin = RED_LED;
    led_red_t.Mode = GPIO_MODE_OUTPUT_PP;
    led_red_t.Pull = GPIO_NOPULL;
    led_red_t.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &led_red_t);
}
/*---------------------------------------------*/

void gpio_LED_Red_write(bool state)
{
	HAL_GPIO_WritePin(GPIOB, RED_LED, state);
}

/*---------------------------------------------*/

void gpio_LED_Red_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOB, RED_LED);
}

/*************************************************************************************************************************************************************************/



void gpio_BUTTON_init()
{
	__HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitTypeDef btn_t;
    btn_t.Pin = USER_BUTTON;
    btn_t.Mode = GPIO_MODE_INPUT;
    btn_t.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOC, &btn_t);


}
/*********************************************************************************************************************************************************************/

bool gpio_BUTTON_read_state()
{
	GPIO_PinState btn_state = HAL_GPIO_ReadPin(GPIOC, USER_BUTTON);
	return (bool)btn_state;
}




