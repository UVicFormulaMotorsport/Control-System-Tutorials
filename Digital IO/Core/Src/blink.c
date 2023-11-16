#include "main.h"


void blink(GPIO_TypeDef * GPIO_PIN_Letter, uint16_t GPIO_PIN_Number)
{
	HAL_GPIO_TogglePin(GPIO_PIN_Letter, GPIO_PIN_Number);
	return;
}
