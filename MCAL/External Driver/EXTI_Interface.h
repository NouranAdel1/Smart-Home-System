/*
 * EXTI_Interface.h
 *
 *  Created on: Aug 4, 2024
 *      Author: walee
 */

#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_

#define LOW_LEVEL      0
#define RAISING_EDGE   1
#define FAILING_EDGE   2
#define LOGICAL        3


void EXTI_voidEXTI0SelectSenseControl(u8 Copy_u8Trigg);
void EXTI_voidEXTI1SelectSenseControl(u8 Copy_u8Trigg);
void EXTI_voidEXTI2SelectSenseControl(u8 Copy_u8Trigg);

void EXTI_voidEXTI0Enable(void);
void EXTI_voidEXTI1Enable(void);
void EXTI_voidEXTI2Enable(void);

void EXIT_voidSetCallBack(void(*Copy_u8PF)(void));

#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
