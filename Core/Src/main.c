/*
 * main.c
 *
 *  Created on: 15-July-2023
 *      Author: Sagar
 */

#include "main.h"

void SystemClockConfig(void);

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
