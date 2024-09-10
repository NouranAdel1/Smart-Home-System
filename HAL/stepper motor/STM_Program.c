/*
 * STM_Program.c
 *
 *  Created on: Aug 1, 2024
 *      Author: PC-SHOP
 */
#include "../../lib/STD_Types.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "STM_Interface.h"
#include "STM_Config.h"
#include "STM_Privet.h"
#include "util/delay.h"

void STM_RotationDirection(u8 Copy_u8Direction, u32 Copy_u32Angle){
	u32 local_u32Steps;
	u8 local_u8iterationSteps;
	local_u32Steps= (Copy_u32Angle * FullSteps) / 360;
	for (local_u8iterationSteps = 0; local_u8iterationSteps < local_u32Steps; local_u8iterationSteps++) {
		if (Copy_u8Direction==STM_ClockWise){
			DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_LOW);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_LOW );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_LOW );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_LOW);
					_delay_ms(10);
		}
		else if(Copy_u8Direction==STM_CounterClockWise){
			DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_LOW);
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_LOW );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_LOW );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_LOW);
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
					DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
					_delay_ms(10);
		}
	}}
/*void STM_RotationDirection(u8 Copy_u8Direction){
	switch (Copy_u8Direction){
	case STM_ClockWise:{
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_LOW);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_LOW );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_LOW );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_LOW);
		_delay_ms(10); break;}


	case STM_CounterClockWise:{
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_LOW);
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_LOW );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_LOW );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN0,DIO_u8_LOW);
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN1,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN2,DIO_u8_HIGH );
		DIO_voidSetPinValue(DIO_u8_PORTA, DIO_u8_PIN3,DIO_u8_HIGH );
		_delay_ms(10); break;}

	}}*/

