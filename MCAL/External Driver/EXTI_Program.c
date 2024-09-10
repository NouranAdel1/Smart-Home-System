/*
 * EXTI_Program.c
 *
 *  Created on: Aug 4, 2024
 *      Author: walee
 */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "EXTI_Config.h"
#include "EXTI_Interface.h"
#include "EXTI_Private.h"

static void (*EXIT_u8PF)(void);
void EXTI_voidEXTI0SelectSenseControl(u8 Copy_u8Trigg)
{

	switch (Copy_u8Trigg){

	case LOW_LEVEL:
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC00);
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC01);
		break;
	case RAISING_EDGE:
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC00);
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC01);
       break;
	case FAILING_EDGE:
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC01);
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC00);
       break;
	case LOGICAL:
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC01);
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC00);
	   break;
}

}
void EXTI_voidEXTI1SelectSenseControl(u8 Copy_u8Trigg)
{

	switch (Copy_u8Trigg){

	case LOW_LEVEL:
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC10);
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC11);
		break;
	case LOGICAL:
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC10);
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC11);
	   break;
	case RAISING_EDGE:
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC10);
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC11);
       break;
	case FAILING_EDGE:
		CLR_BIT(EXTI_u8_MCUCR,MCUCR_ISC10);
		SET_BIT(EXTI_u8_MCUCR,MCUCR_ISC11);
       break;

}
}
void EXTI_voidEXTI2SelectSenseControl(u8 Copy_u8Trigg)
{

	switch (Copy_u8Trigg){

	case RAISING_EDGE:
		SET_BIT(EXTI_u8_MCUCSR,MCUCSR_ISC2);

       break;
	case FAILING_EDGE:
		CLR_BIT(EXTI_u8_MCUCSR,MCUCSR_ISC2);
       break;

}
}

void EXTI_voidEXTI0Enable(void)
{
//enable Perpheral EXTI0
	SET_BIT(EXTI_u8_GICR,GICR_INT0);
}

void EXTI_voidEXTI1Enable(void)
{
//enable Perpheral EXTI1
	SET_BIT(EXTI_u8_GICR,GICR_INT1);
}

void EXTI_voidEXTI2Enable(void)
{
//enable Perpheral EXTI2
	SET_BIT(EXTI_u8_GICR,GICR_INT2);
}

void EXIT_voidSetCallBack(void(*Copy_u8PF)(void)){
	EXIT_u8PF=Copy_u8PF;
}

void __vector_1(void)  __attribute__((signal));

void __vector_1(void)
{

	EXIT_u8PF();
}


