/*
 * EEPROM_INTERFACE.h
 *
 *  Created on: Aug 14, 2024
 *      Author: PC-SHOP
 */

#ifndef HAL_EPROM_EEPROM_INTERFACE_H_
#define HAL_EPROM_EEPROM_INTERFACE_H_
void EEPROM_voidSendData(u16 Copy_u16Location, u8 Copy_u8Data);
u8 EEPROM_u8ReceiveData(u16 Copy_u16Location);

#endif /* HAL_EPROM_EEPROM_INTERFACE_H_ */
