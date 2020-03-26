/*
 * ReadBlueButtonClass.h
 *
 *  Created on: Mar 26, 2020
 *      Author: presmanes3
 */

#ifndef SRC_CUSTOMLIBRARIES_READBLUEBUTTONCLASS_H_
#define SRC_CUSTOMLIBRARIES_READBLUEBUTTONCLASS_H_

#ifdef __cplusplus
extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

#ifdef __cplusplus
}
#endif

#define BLUE_BUTTON GPIO_PIN_13

class BlueButtonClass{
public:
	BlueButtonClass();
	virtual ~BlueButtonClass();

	bool isPressed();

private:
	bool state = false;
	GPIO_InitTypeDef GPIO_BlueButtonStruct;

	uint16_t pin = BLUE_BUTTON;

};

#endif /* SRC_CUSTOMLIBRARIES_READBLUEBUTTONCLASS_H_ */
