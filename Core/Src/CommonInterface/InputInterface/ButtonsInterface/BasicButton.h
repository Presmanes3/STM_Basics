/*
 * BasicButton.h
 *
 *  Created on: Mar 28, 2020
 *      Author: presmanes3
 */

#ifndef SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BASICBUTTON_H_
#define SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BASICBUTTON_H_

#include "stdint.h"
#include "stm32f1xx_hal.h"

class BasicButton {
public:
	BasicButton(uint16_t pin, GPIO_TypeDef* type, GPIO_PinState activationMethod_ = GPIO_PIN_SET);

	/*
	 * @brief This function return reads this->pin
	 *
	 * @return true if button is pressed
	 * */
	virtual bool isPressed();

	/**
	 * @brief saves if the button has been pressed at least once
	 *
	 * @return true if has been pressed at least once
	 */
	virtual bool hasBeenPressed();

	/**
	 * @return how many times has been pressed since last reset
	 */
	uint32_t timesPressed();

	/**
	 * @brief reset all the variable to 0 or false
	 */
	virtual void reset();

	/**
	 * @brief Set if the button activates at low or high state
	 *
	 * @param newMethod new activation method
	 */
	void setActivationMethod(GPIO_PinState newMethod);

	/**
	 * @brief Getter for activation method
	 *
	 * @return activation Method variable
	 */
	GPIO_PinState getActivationMethod();

protected:
	bool currentState = false;
	bool previousState = false;
	bool pressed = false;

	uint32_t timesPressed_ = 0;
	uint16_t pin = 0;

	GPIO_InitTypeDef GPIO_ButtonStruct;
	GPIO_TypeDef *GPIO_type;
	GPIO_PinState activationMethod = GPIO_PIN_SET;

};

#endif /* SRC_COMMONINTERFACE_INPUTINTERFACE_BUTTONSINTERFACE_BASICBUTTON_H_ */
