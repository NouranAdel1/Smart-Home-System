/*
 * ADC_Privet.h
 *
 *  Created on: Aug 5, 2024
 *      Author: PC-SHOP
 */

#ifndef MCAL_ADC_DRIVER_ADC_PRIVET_H_
#define MCAL_ADC_DRIVER_ADC_PRIVET_H_

#define ADC_u8_ADMUX  *((volatile u8 *)0x27)
#define ADMUX_MUX0     0
#define ADMUX_MUX1     1
#define ADMUX_MUX2     2
#define ADMUX_MUX3     3
#define ADMUX_MUX4     4
#define ADMUX_ADLAR    5
#define ADMUX_REFS0    6
#define ADMUX_REFS1    7

#define ADC_u8_ADCSRA  *((volatile u8 *)0x26)
#define ADCSRA_ADPS0   0
#define ADCSRA_ADPS1   1
#define ADCSRA_ADPS2   2
#define ADCSRA_ADIE    3
#define ADCSRA_ADIF    4
#define ADCSRA_ADATE   5
#define ADCSRA_ADSC    6
#define ADCSRA_ADEN    7

#define ADC_u8_ADCH  *((volatile u8 *)0x25)
#define ADC_u8_ADCL  *((volatile u8 *)0x24)

#define ADC_u16_ADCDataReg  *((volatile u16 *)0x24)

#define ADC_u8_SFIOR  *((volatile u8 *)0x50)
#define SFIOR_ADTS0   5
#define SFIOR_ADTS1   6
#define SFIOR_ADTS2   7









#endif /* MCAL_ADC_DRIVER_ADC_PRIVET_H_ */
