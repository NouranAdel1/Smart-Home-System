/*
 * TWSI_Interface.h
 *
 *  Created on: Aug 13, 2024
 *      Author: PC-SHOP
 */

#ifndef MCAL_TWSI_TWSI_INTERFACE_H_
#define MCAL_TWSI_TWSI_INTERFACE_H_

typedef enum {
NOError,
StartError,
RepeatedStartError,
SLA_Error_With_Read, //SlaveAdressError
SLA_Error_With_Write,
Data_Error_With_Read,
Data_Error_With_Write
}TWSI_ErrorState;

void TWSI_voidInitMaster(void);

void TWSI_voidInitSlave(u8 Copy_u8Address);

TWSI_ErrorState   TWSI_u8StartCondition(void);

TWSI_ErrorState   TWSI_u8SelectAddressWithRead(u8 Copy_u8Address);

TWSI_ErrorState   TWSI_u8SelectAddressWithWrite(u8 Copy_u8Address);

TWSI_ErrorState  TWSI_u8SendData(u8 Copy_u8Data);

TWSI_ErrorState   TWSI_u8RecieveData(u8 *Copy_u8Data);

void   TWSI_voidStopCondition(void);

TWSI_ErrorState TWSI_u8RepeatedStartCondition(void);

#endif /* MCAL_TWSI_TWSI_INTERFACE_H_ */
