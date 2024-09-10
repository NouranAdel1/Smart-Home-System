/*
 * EEPROM_PROGRAM.c
 *
 *  Created on: Aug 14, 2024
 *      Author: PC-SHOP
 */

#include "../../lib/STD_Types.h"
#include "../../lib/BIT_MATH.h"
#include "../../MCAL/TWSI/TWI_Interface.h"
#include "EEPROM_INTERFACE.h"
#include "EEPROM_PRIVATE.h"
#include <util/delay.h>

void EEPROM_voidSendData(u16 Copy_u16Location, u8 Copy_u8Data){
	u8 Local_u8Address=0b1010000 | ((u8)Copy_u16Location>>8);
	TWI_u8StartCondition();
	TWI_u8SelectAdressWithWrite(Local_u8Address);
	TWI_u8SendData((u8)Copy_u16Location);
	TWI_u8SendData(Copy_u8Data);
	TWI_voidStopCondition();
	_delay_ms(10);
}




u8 EEPROM_u8ReceiveData(u16 Copy_u16Location){
	u8 Local_u8Address=0b1010000 | ((u8)Copy_u16Location>>8);
u8 Local_u8Data=0;
TWI_u8StartCondition();
TWI_u8SelectAdressWithWrite(Local_u8Address);
TWI_u8SendData((u8)Copy_u16Location);
TWI_u8RepeatedStartCondition();
TWI_u8SelectAdressWithRead(Local_u8Address);
TWI_u8RecieveData(&Local_u8Data);
TWI_voidStopCondition();
return Local_u8Data;
_delay_ms(10);
}
