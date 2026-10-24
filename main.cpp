#include "rcc.h"

rcc Rcc_object;
RCC_gpioPortName_t Rcc_port_Name = RCC_GPIO_PORT_A;
int main()
{
	Rcc_object.RCC_gpioPortInit(Rcc_port_Name);
	
	while(1);
}