#ifndef __SD_CARD_H__
#define __SD_CARD_H__

#include "gpio.h"

// define GC9A01 DC pin, CS pin, BLK pin enable/disable function
#define     SPI2_CS_0    HAL_GPIO_WritePin(SPI2_CS_GPIO_Port, SPI2_CS_Pin, GPIO_PIN_RESET)
#define     SPI2_CS_1    HAL_GPIO_WritePin(SPI2_CS_GPIO_Port, SPI2_CS_Pin, GPIO_PIN_SET)


#endif


