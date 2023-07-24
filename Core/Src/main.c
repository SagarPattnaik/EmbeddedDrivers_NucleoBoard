/*
 * main.c
 *
 *  Created on: 02-Jun-2018
 *      Author: kiran
 */

#include<string.h>
#include "stm32f4xx_hal.h"
#include "main.h"

void SystemClockConfig(void);
void TIMER6_Init(void);
void GPIO_Init(void);
void Error_handler(void);

TIM_HandleTypeDef htimer6;


int main(void)
{
	HAL_Init();
	SystemClockConfig();
  while (1)
  {

  }
	return 0;
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClockConfig(void)
{

}

void Error_handler(void)
{
	while(1);
}

