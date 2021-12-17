/*
 * nucleo_stm32f767xx_adc.c
 *
 *  Created on: Nov 9, 2021
 *      Author: Fahad
 */


#include "nucleo_stm32f767xx_adc.h"


ADC_HandleTypeDef adc1_handler;

void adc_GPIO_init(void)
{
    __HAL_RCC_GPIOC_CLK_ENABLE();

    GPIO_InitTypeDef gpio_t;
    gpio_t.Pin = ADC1_CH10;

    gpio_t.Mode = GPIO_MODE_ANALOG;
    gpio_t.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOC, &gpio_t);
}


bool adc_single_conversion_init()
{
	__HAL_RCC_ADC1_CLK_ENABLE();

	// ADC general configuration
	adc1_handler.Instance = ADC1;
	adc1_handler.Init.DataAlign = ADC_DATAALIGN_RIGHT;
	adc1_handler.Init.ScanConvMode = ADC_SCAN_DISABLE;
	adc1_handler.Init.ContinuousConvMode = DISABLE;
	adc1_handler.Init.NbrOfConversion = 1;
	adc1_handler.Init.DiscontinuousConvMode = DISABLE;
	adc1_handler.Init.ExternalTrigConv = ADC_SOFTWARE_START;


	if (HAL_ADC_Init(&adc1_handler) != HAL_OK)
	{
		return false;
	}


	// ADC channel configuration

	ADC_ChannelConfTypeDef channel_config_t;
	channel_config_t.Channel = ADC_CHANNEL_10;

	channel_config_t.Rank = 1;

	channel_config_t.SamplingTime = ADC_SAMPLETIME_28CYCLES;


	if (HAL_ADC_ConfigChannel(&adc1_handler, &channel_config_t) != HAL_OK)
	{
		return false;
	}


	return true;
}


void adc_interrupt_init()
{
	__HAL_ADC_ENABLE_IT(&adc1_handler, ADC_IT_EOC);


	HAL_NVIC_SetPriority(ADC_IRQn, 10, 0);
	HAL_NVIC_EnableIRQ(ADC_IRQn);

}




bool adc_multichannel_init(void)
{
	__HAL_RCC_ADC1_CLK_ENABLE();

	// ADC general configuration
	adc1_handler.Instance = ADC1;
	adc1_handler.Init.DataAlign = ADC_DATAALIGN_RIGHT;

	adc1_handler.Init.ScanConvMode = ADC_SCAN_ENABLE;


	adc1_handler.Init.ContinuousConvMode = DISABLE;
	adc1_handler.Init.NbrOfConversion = 2;


	adc1_handler.Init.DiscontinuousConvMode = DISABLE;
	adc1_handler.Init.ExternalTrigConv = ADC_SOFTWARE_START;

	if (HAL_ADC_Init(&adc1_handler) != HAL_OK)
	{
		return false;
	}


	// ADC channel configuration

	ADC_ChannelConfTypeDef channel_config_t;
	channel_config_t.Channel = ADC_CHANNEL_10; // connected to PC0
	channel_config_t.Rank = 1;
	channel_config_t.SamplingTime = ADC_SAMPLETIME_28CYCLES;

	if (HAL_ADC_ConfigChannel(&adc1_handler, &channel_config_t) != HAL_OK)
	{
		return false;
	}

	channel_config_t.Channel = ADC_CHANNEL_11; // PC1
	channel_config_t.Rank = 2;
	channel_config_t.SamplingTime = ADC_SAMPLETIME_28CYCLES;

	if (HAL_ADC_ConfigChannel(&adc1_handler, &channel_config_t) != HAL_OK)
	{
		return false;
	}
	return true;

}


void adc_DMA_init()
{


}



