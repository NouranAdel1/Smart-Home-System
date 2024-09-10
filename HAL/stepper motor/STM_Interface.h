/*
 * STM_Interface.h
 *
 *  Created on: Aug 1, 2024
 *      Author: PC-SHOP
 */

#ifndef HAL_STEPPER_MOTOR_STM_INTERFACE_H_
#define HAL_STEPPER_MOTOR_STM_INTERFACE_H_



#define STM_ClockWise 1
#define STM_CounterClockWise 0
#define FullSteps 512


void STM_RotationDirection(u8 Copy_u8Direction, u32 Copy_u32Angle);
//void STM_RotationDirection(u8 Copy_u8Direction);

#endif /* HAL_STEPPER_MOTOR_STM_INTERFACE_H_ */
