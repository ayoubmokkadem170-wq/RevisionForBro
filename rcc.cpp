#include "rcc.h"

RCC_TypeDef* RCC_memoryBase = (RCC_TypeDef*) RCC_BASE;
rcc::rcc()
{
	rccErr = RCC_OK;
}
RCC_ErrorType_T rcc::RCC_gpioPortInit (RCC_gpioPortName_t gpioPortName)
{
	RCC_ErrorType_T ReturnErr = RCC_DEFAULT_ERR;
	switch(gpioPortName)
	{
		case RCC_GPIO_PORT_A:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
		  ReturnErr = RCC_OK;
		   break;
		case RCC_GPIO_PORT_B:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
		  ReturnErr = RCC_OK;
		   break;
		case RCC_GPIO_PORT_C:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
		  ReturnErr = RCC_OK;
		   break;
		case RCC_GPIO_PORT_D:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
		  ReturnErr = RCC_OK;
		   break;
		case RCC_GPIO_PORT_E:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
		  ReturnErr = RCC_OK;
		   break;
		case RCC_GPIO_PORT_H:
			RCC_memoryBase ->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
		  ReturnErr = RCC_OK;
		   break;
		default:
			ReturnErr = RCC_DEFAULT_ERR;
		  break; 		
	}
	
	
	
	
	
	return ReturnErr;
	
};