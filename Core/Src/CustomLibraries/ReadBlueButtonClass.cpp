/*
 * ReadBlueButtonClass.cpp
 *
 *  Created on: Mar 26, 2020
 *      Author: presmanes3
 */

#include "ReadBlueButtonClass.h"

BlueButtonClass::BlueButtonClass() {
	// TODO Auto-generated constructor stub
	this->GPIO_BlueButtonStruct.Pin = this->pin;
	this->GPIO_BlueButtonStruct.Mode = GPIO_MODE_INPUT;
	this->GPIO_BlueButtonStruct.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOC, &this->GPIO_BlueButtonStruct);

}

BlueButtonClass::~BlueButtonClass() {
	// TODO Auto-generated destructor stub
}

bool BlueButtonClass::isPressed(){
	GPIO_PinState currentButtonState = HAL_GPIO_ReadPin(GPIOC, this->pin);
	if(currentButtonState == GPIO_PIN_SET) return true;
	return false;
}

