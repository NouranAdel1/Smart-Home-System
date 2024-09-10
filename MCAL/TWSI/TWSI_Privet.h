/*
 * TWSI_Privet.h
 *
 *  Created on: Aug 13, 2024
 *      Author: PC-SHOP
 */

#ifndef MCAL_TWSI_TWSI_PRIVET_H_
#define MCAL_TWSI_TWSI_PRIVET_H_

#define TWSI_u8_TWBR  *((volatile u8 *)0x20)
#define TWSI_u8_TWCR  *((volatile u8 *)0x56)
#define TWSI_u8_TWSR  *((volatile u8 *)0x21)
#define TWSI_u8_TWDR  *((volatile u8 *)0x23)
#define TWSI_u8_TWAR  *((volatile u8 *)0x22)

enum {
	TWCR_TWIE,
	TWCR_Res,
	TWCR_TWEN,
	TWCR_TWWC,
	TWCR_TWSTO,
	TWCR_TWSTA,
	TWCR_TWEA,
	TWCR_TWINT
};



#define TWSR_TWPS1 1
#define TWSR_TWPS0 0

#define CHK_START_CONDITION     0x08
#define CHK_REPEATED_START      0x10
#define CHK_SLAVE_ADRESS_ACK    0x18
#define CHK_SLAVE_ADRESS_NACK   0x20
#define CHK_DATA_ACK            0x28
#define CHK_DATA_NACK           0x30





#endif /* MCAL_TWSI_TWSI_PRIVET_H_ */
