/*
 * nucleo_stm32f767xx_can.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Fahad
 */


#include <nucleo_stm32f767xx_can.h>

extern CAN_HandleTypeDef hcan1;



void CAN_Init_500kbps(void){

}


void CAN_Init_250kbps(void){

	  hcan1.Instance 			= CAN1;

	  hcan1.Init.Prescaler = 12;
	  hcan1.Init.Mode = CAN_MODE_NORMAL;
	  hcan1.Init.SyncJumpWidth = CAN_SJW_1TQ;
	  hcan1.Init.TimeSeg1 = CAN_BS1_15TQ;
	  hcan1.Init.TimeSeg2 = CAN_BS2_2TQ;
	  hcan1.Init.TimeTriggeredMode = DISABLE;
	  hcan1.Init.AutoBusOff = DISABLE;
	  hcan1.Init.AutoWakeUp = DISABLE;
	  hcan1.Init.AutoRetransmission = DISABLE;
	  hcan1.Init.ReceiveFifoLocked = DISABLE;
	  hcan1.Init.TransmitFifoPriority = DISABLE;
	  if (HAL_CAN_Init(&hcan1) != HAL_OK)
	  {

	  }

	  myCanFilter();   // Note that it is necessary to setup a filter for reception, {I read this somewhere, not sure if true or not. either way i setup a filter just to be safe}

	  HAL_CAN_Start(&hcan1);


	  HAL_CAN_ActivateNotification(&hcan1, CAN_IT_RX_FIFO0_MSG_PENDING);
}



void myCanFilter(void)
{
	CAN_FilterTypeDef filterConfig;

	filterConfig.FilterBank = 13;
	filterConfig.FilterActivation = ENABLE;
	filterConfig.FilterFIFOAssignment = CAN_FILTER_FIFO0;
	filterConfig.FilterIdHigh = 0x0000;
	filterConfig.FilterIdLow = 0x0000;
	filterConfig.FilterMaskIdHigh = 0x0000;
	filterConfig.FilterMaskIdLow = 0x0000;
	filterConfig.FilterMode = CAN_FILTERMODE_IDMASK;

	filterConfig.FilterScale = CAN_FILTERSCALE_32BIT;

	HAL_StatusTypeDef  filacstatus = HAL_CAN_ConfigFilter(&hcan1, &filterConfig);
	if (filacstatus != HAL_OK)
	{

	}

}


void CAN_sendFrame(void)
{

	TxHeader.DLC = 1;
	TxHeader.IDE = CAN_ID_STD;
	TxHeader.RTR = CAN_RTR_DATA;

	TxHeader.StdId = 0x103;
	TxData[0] = 45;



	HAL_CAN_AddTxMessage(&hcan1, &TxHeader, TxData, &TxMailBox);
}
