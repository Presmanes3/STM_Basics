/*
 * BlueButtonClassb.h
 *
 *  Created on: Mar 28, 2020
 *      Author: presmanes3
 */

#ifndef SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BLUEBUTTONOBJECT_BLUEBUTTONCLASS_H_
#define SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BLUEBUTTONOBJECT_BLUEBUTTONCLASS_H_

#include "../BasicButton.h"

#define BLUE_BUTTON GPIO_PIN_13

class BlueButtonClass : public BasicButton{
public:
	BlueButtonClass(uint16_t pin, GPIO_TypeDef* type, GPIO_PinState activationMethod_ = GPIO_PIN_SET) : BasicButton(pin, type, activationMethod_){

	};

};

#endif /* SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BLUEBUTTONOBJECT_BLUEBUTTONCLASS_H_ */
