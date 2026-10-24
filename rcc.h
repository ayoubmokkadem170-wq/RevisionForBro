#ifndef RCC_H
#define RCC_H
#include "stm32f446xx.h"	

enum RCC_gpioPortName_t
{
	RCC_GPIO_PORT_A,
	RCC_GPIO_PORT_B,
	RCC_GPIO_PORT_C,
	RCC_GPIO_PORT_D,
	RCC_GPIO_PORT_E,
	RCC_GPIO_PORT_H	
};
enum RCC_ErrorType_T
{
	RCC_OK,
	RCC_NOK,
	RCC_DEFAULT_ERR=0xFF
};


class rcc
{
	public:
		RCC_ErrorType_T rccErr;
		rcc();
	  RCC_ErrorType_T RCC_gpioPortInit(RCC_gpioPortName_t gpioPortName);
};









#endif