/*
 * EXTI_Private.h
 *
 *  Created on: Aug 4, 2024
 *      Author: walee
 */

#ifndef MCAL_EXTI_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_PRIVATE_H_

#define EXTI_u8_MCUCR      *((volatile u8 *)0x55)
#define MCUCR_ISC00      0  /*INT0*/
#define MCUCR_ISC01      1
#define MCUCR_ISC10      2   /*INT1*/
#define MCUCR_ISC11      3

#define EXTI_u8_MCUCSR     *((volatile u8 *)0x54)
#define MCUCSR_ISC2      6  /*INT2*/


#define EXTI_u8_GICR       *((volatile u8 *)0x5B)
#define GICR_INT2        5
#define GICR_INT0        6
#define GICR_INT1        7


#define EXTI_u8_GIFR       *((volatile u8 *)0x5A)
#define GIFR_INTF2       5
#define GIFR_INTF0       6
#define GIFR_INTF1       7



#endif /* MCAL_EXTI_EXTI_PRIVATE_H_ */
