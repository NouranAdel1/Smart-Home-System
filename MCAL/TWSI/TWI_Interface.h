/*
 * TWI_Interface.h
 *
 *  Created on: Aug 13, 2024
 *      Author: walee
 */

#ifndef MCAL_TWI_DRIVER_TWI_INTERFACE_H_
#define MCAL_TWI_DRIVER_TWI_INTERFACE_H_

typedef enum{
	NOError,
	StartError,
	RepeatedStartError,
    SLA_Error_WITH_READ,
	SLA_Error_WITH_WRITE,
	Data_Error_WITH_READ,
	Data_Error_WITH_WRITE,
}TWI_ErrorState;

void TWI_voidInitMaster(void);

void TWI_voidInitSlave(u8 Copy_u8Address);

TWI_ErrorState TWI_u8StartCondition(void);

TWI_ErrorState TWI_u8SelectAdressWithRead(u8 Copy_u8Address);

TWI_ErrorState TWI_u8SelectAdressWithWrite(u8 Copy_u8Address);

TWI_ErrorState TWI_u8SendData(u8 copy_u8Data);

TWI_ErrorState TWI_u8RecieveData(u8 *copy_u8Data);

TWI_ErrorState TWI_u8RepeatedStartCondition(void);

void TWI_voidStopCondition(void);



#endif /* MCAL_TWI_DRIVER_TWI_INTERFACE_H_ */
