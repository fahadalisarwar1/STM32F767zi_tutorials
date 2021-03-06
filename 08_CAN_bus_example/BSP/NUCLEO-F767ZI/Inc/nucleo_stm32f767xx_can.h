/*
 * nuceloe_stm32f767xx_can.h
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */

#ifndef NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_CAN_H_
#define NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_CAN_H_
#include "main.h"

CAN_HandleTypeDef hcan1;


CAN_RxHeaderTypeDef RxHeader;
CAN_TxHeaderTypeDef TxHeader;

uint8_t TxData[8];
uint8_t RxData[8];

uint32_t TxMailBox;


void CAN_Init_250kbps(void);
void CAN_Init_500kbps(void);


void CAN_sendFrame(void);


void myCanFilter(void);

#endif /* NUCLEO_F767ZI_INC_NUCLEO_STM32F767XX_CAN_H_ */
