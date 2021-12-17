/*
 * nucleo_stm32f767xx_adc.h
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */

#ifndef NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_ADC_H_
#define NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_ADC_H_

#include "main.h"


extern ADC_HandleTypeDef adc1_handler;


#define ADC1_CH10			GPIO_PIN_0


void adc_GPIO_init(void);

bool adc_single_conversion_init(void);


///---------------------------------------------------------------------------------------------------

void adc_interrupt_init(void);




/**
 *
 * @brief ADC multichannel config
 */

bool adc_multichannel_init(void);

void adc_DMA_init(void); // wil take care of data transfer from peripheral to memory.







#endif /* NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_ADC_H_ */
