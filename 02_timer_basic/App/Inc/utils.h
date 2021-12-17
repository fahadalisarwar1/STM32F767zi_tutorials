/*
 * utils.h
 *
 *  Created on: Dec 16, 2021
 *      Author: Fahad
 */

#ifndef INC_UTILS_H_
#define INC_UTILS_H_

void display_board_information()
{
	if (VERBOSE)
	{
		printf("Board Id:\t\t\t%d\r\n", (int)HAL_GetDEVID());
		printf("Board Freq:\t\t\t%d\r\n", (int)HAL_RCC_GetHCLKFreq());
	}
}


uint32_t get_timer_freq(void) // F4 Example
{
  /* Get PCLK1 frequency */
  uint32_t pclk1 = HAL_RCC_GetPCLK1Freq();

  /* Get PCLK1 prescaler */
  if((RCC->CFGR & RCC_CFGR_PPRE1) == 0)
  {
    /* PCLK1 prescaler equal to 1 => TIMCLK = PCLK1 */
    return (pclk1);
  }
  else
  {
    /* PCLK1 prescaler different from 1 => TIMCLK = 2 * PCLK1 */
    return(2 * pclk1);
  }
}

#endif /* INC_UTILS_H_ */
