/*
 * ReadBlueButtonClass.cpp
 *
 *  Created on: Mar 26, 2020
 *      Author: presmanes3
 */

#include "ReadBlueButtonClass.h"

BlueButtonClass::BlueButtonClass() {
	// TODO Auto-generated constructor stub
	this->GPIO_BlueButtonStruct.Pin = this->pin;         // Set pin to GPIO
	this->GPIO_BlueButtonStruct.Mode = GPIO_MODE_INPUT;  // Set mode to GPIO
	this->GPIO_BlueButtonStruct.Pull = GPIO_NOPULL;      // Set pull resistor to GPIO
	HAL_GPIO_Init(GPIOC, &this->GPIO_BlueButtonStruct);  // Init GPIO

}

BlueButtonClass::~BlueButtonClass() {
	// TODO Auto-generated destructor stub
}

bool BlueButtonClass::isPressed(){

	// Save pin state into a variable
	GPIO_PinState currentButtonState = HAL_GPIO_ReadPin(GPIOC, this->pin);

	/*
	 * currentButtonState == GPIO_PIN_SET = 1 or currentButtonState == GPIO_PIN_RESET = 0
	 * */
	if(currentButtonState == GPIO_PIN_SET) return true;
	return false;
}

