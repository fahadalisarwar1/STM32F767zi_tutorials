/*
 * nucleo_stm32f767xx_gpio.h
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#ifndef NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_GPIO_H_
#define NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_GPIO_H_

#include "main.h"


#define 		GREEN_LED		GPIO_PIN_0
#define 		BLUE_LED		GPIO_PIN_7
#define 		RED_LED			GPIO_PIN_14

#define USER_BUTTON				GPIO_PIN_13


void gpio_LED_Green_init(void);
void gpio_LED_Green_write(bool state);
void gpio_LED_Green_toggle(void);


void gpio_LED_Blue_init(void);
void gpio_LED_Blue_write(bool state);
void gpio_LED_Blue_toggle(void);


void gpio_LED_Red_init(void);
void gpio_LED_Red_write(bool state);
void gpio_LED_Red_toggle(void);


void gpio_BUTTON_init(void);
bool gpio_BUTTON_read_state(void);

#endif /* NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_GPIO_H_ */
