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


#include "uart.h"
#include "led.h"
#include "switch.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{

		char str[90];
		int choice ;

			SystemInit();
			LedInit(LED_RED);
			LedInit(LED_BLUE);
			SwitchInit(SWITCH);
			UartInit(BAUD_9600);


			do
			{
				sprintf(str,"Menu : \n\r 0 . Exit\n\r1. Red Led ON\n\r2.Red Led Off \n\r3. Led Blue ON \n\r4. Blue Led OFF\n\n\r");

				UartPuts(str);

				sprintf(str,"Select your choice :");
				UartPuts(str);
				UartGets(str);

				sscanf(str,"%d",&choice);

				switch(choice) {
							case 0:
									sprintf(str, "\n\rThank You\n\r");
									UartPuts(str);
									break;
							case 1:
									LedOn(LED_RED);
									break;

							case 2:
									LedOff(LED_RED);
									break;

							case 3:
									LedOn(LED_BLUE);
									break;

							case 4:
									LedOff(LED_BLUE);
									break;

							default:
									sprintf(str, "Invalid choice\n");
									UartPuts(str);
						}
					}while(choice != 0);
	return 0;
}
