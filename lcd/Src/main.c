/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "lcd.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	SystemInit();
	LcdInit();
	LcdPuts(LCD_LINE1, "HOTEL JAGADAMBA  OFFER IS GOING ON !!!!");
	LcdPuts(LCD_LINE2, "CHICKEN PLATE ! PANNER MASLA ! FISH FRY !");

	for(int i=1;i<16;i++){

		DelayMs(1000);
		LcdWrite(LCD_CMD,LCD_CURS);

	}LcdWrite(LCD_CMD,LCD_CLEAR);
	return 0;
}







