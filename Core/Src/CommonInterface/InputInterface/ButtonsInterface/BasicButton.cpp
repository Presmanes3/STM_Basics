/*
 * BasicButton.cpp
 *
 *  Created on: Mar 28, 2020
 *      Author: presmanes3
 */

#include "BasicButton.h"

BasicButton::BasicButton(uint16_t pin, GPIO_TypeDef* type,  GPIO_PinState activationMethod_) {
	this->pin = pin;
	this->GPIO_type = type;
	this->activationMethod = activationMethod_;
}

bool BasicButton::isPressed(){
	GPIO_PinState currentButtonState = HAL_GPIO_ReadPin(this->GPIO_type, this->pin);

	// Update previous state
	this->previousState = this->currentState;

	if(currentButtonState == this->activationMethod){
		this->currentState = true;

		if(!this->pressed) this->pressed = true;

		if(this->previousState == false){
			this->timesPressed_++;
		}

		return this->currentState;
	}else{ // GPIO_PIN_RESET
		this->currentState = false;
	}

	return false;
}

bool BasicButton::hasBeenPressed(){
	return this->pressed;
}

uint32_t BasicButton::timesPressed(){
	return this->timesPressed_;
}

void BasicButton::reset(){
	this->pressed = false;
	this->timesPressed_ = 0;
	this->currentState = false;
	this->previousState = false;
}

void BasicButton::setActivationMethod(GPIO_PinState newMethod){
	this->activationMethod = newMethod;
}

GPIO_PinState BasicButton::getActivationMethod(){
	return this->activationMethod;
}

