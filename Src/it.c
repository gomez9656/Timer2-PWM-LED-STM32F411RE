/*
 * it.c
 *
 *  Created on: 23/01/2021
 *      Author: PC
 */
#include "main.h"
extern TIM_HandleTypeDef htimer2;

void SysTick_Handler(void){

	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}

void TIM2_IRQHandler(){

	HAL_TIM_IRQHandler(&htimer2);
}
