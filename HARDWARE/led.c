#include <stm32f10x_lib.h>
#include "led.h"

void LED_Init(void)
{
	RCC->APB2ENR |= 1<<2;
	RCC->APB2ENR |= 1<<5;
	GPIOA->CRH &= 0xfffffff0;
	GPIOA->CHR |= 0x00000003;
	GPIOA->ODR |= 1<<8;
	GPIOD->CRL &= 0xfffff0ff;
	GPIOD->CRL |= 0x00000300;
	GPIOD->ODR |= 1<<2;
}