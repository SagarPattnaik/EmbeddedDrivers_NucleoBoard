/*
 * main.c
 *
 *  Created on: 15-July-2023
 *      Author: Sagar
 */

#include "main.h"

void SystemClockConfig(void);
void UART2_Init(void);
void Error_handler(void);

UART_HandleTypeDef huart2;

int main(void)
{
	HAL_Init();
  SystemClockConfig();
  while(1);
	return 0;
}

void SystemClockConfig(void)
{
  /* By default, the internal RC oscillator is configured to work at 16MHz */
}

void UART2_Init(void)
{
	huart2.Instance = USART2;
	huart2.Init.BaudRate = 115200;
	huart2.Init.WordLength = UART_WORDLENGTH_8B;
	huart2.Init.StopBits = UART_STOPBITS_1;
	huart2.Init.Parity = UART_PARITY_NONE;
	huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart2.Init.Mode = UART_MODE_TX_RX;
	if ( HAL_UART_Init(&huart2) != HAL_OK )
	{
		//There is a problem
		Error_handler();
	}
}

void Error_handler(void)
{
	while(1);
}