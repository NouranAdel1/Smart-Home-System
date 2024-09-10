/*
 * TWI_Private.h
 *
 *  Created on: Aug 13, 2024
 *      Author: walee
 */

#ifndef MCAL_TWI_DRIVER_TWI_PRIVATE_H_
#define MCAL_TWI_DRIVER_TWI_PRIVATE_H_

#define TWI_u8_TWBR  *((volatile u8 *)0x20)
#define TWI_u8_TWCR  *((volatile u8 *)0x56)
enum{
	TWCR_TWIE,
	reserved,
	TWCR_TWEN,
	TWCR_TWWC,
	TWCR_TWSTO,
	TWCR_TWSTA,
	TWCR_TWEA,
	TWCR_TWINT,
};


#define TWI_u8_TWSR  *((volatile u8 *)0x21)

#define TWSR_TWPS1   1
#define TWSR_TWPS0   0

#define TWI_u8_TWDR  *((volatile u8 *)0x23)
#define TWI_u8_TWAR  *((volatile u8 *)0x22)

#define CHK_START_CONDITION      0x08
#define CHK_REPEATED_START       0x10
#define CHK_SLAVE_ADRESS_ACK     0x18
#define CHK_SLAVE_ADRESS_RD_ACK     0x40

#define CHK_SLAVE_ADRESS_NACK    0x20
#define CHK_DATA_WR_ACK             0x28
#define CHK_DATA_RD_ACK             0x50

#define CHK_DATA_RD_NACK            0x58




#endif /* MCAL_TWI_DRIVER_TWI_PRIVATE_H_ */
