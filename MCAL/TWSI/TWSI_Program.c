/*
// * TWSI_Program.c
// *
// *  Created on: Aug 13, 2024
// *      Author: PC-SHOP
// */
//#include "../../LIB/STD_TYPES.h"
//#include "../../LIB/BIT_MATH.h"
//#include "TWSI_Cofig.h"
//#include "TWSI_Interface.h"
//#include "TWSI_Privet.h"
//
//
//void TWSI_voidInitMaster(void){
//	//enable TWSI
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWEN);
//
//	//SELECT PRESCALER
//	CLR_BIT(TWSI_u8_TWSR,TWSR_TWPS1);
//	CLR_BIT(TWSI_u8_TWSR,TWSR_TWPS0);
//	TWSI_u8_TWBR=2;
//
//	//ENABLE ACK
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWEA);
//
//}
//
//
//void TWSI_voidInitSlave(u8 Copy_u8Address){
//
//	//SELECT ADDRESS
//	TWSI_u8_TWAR=Copy_u8Address<<1;
//
//	//enable TWSI
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWEN);
//}
//
//
//
//
//TWSI_ErrorState TWSI_u8StartCondition(void){
//
//	TWSI_ErrorState Local_u8Error=NOError;
//	//CLEAR FLAG
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//
//	//SET START CONDITION
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWSTA);
//	//WAIT TO SET FLAG
//	while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//	if ((TWSI_u8_TWSR & 0xF8)==CHK_START_CONDITION){
//
//	}
//	else {
//		Local_u8Error=StartError;
//	}
//	return Local_u8Error;
//}
//
//
//
//TWSI_ErrorState TWSI_u8RepeatedStartCondition(void){
//
//	TWSI_ErrorState Local_u8Error=NOError;
//	//CLEAR FLAG
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//
//	//SET START CONDITION
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWSTA);
//	//WAIT TO SET FLAG
//	while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//	if ((TWSI_u8_TWSR & 0xF8)==CHK_REPEATED_START){
//
//	}
//	else {
//		Local_u8Error=RepeatedStartError;
//	}
//	return Local_u8Error;
//}
//
//TWSI_ErrorState  TWSI_u8SelectAddressWithRead(u8 Copy_u8Address){
//	TWSI_ErrorState Local_u8Error=NOError;
//	TWSI_u8_TWDR=Copy_u8Address<<1;
//	//CLEAR FLAG
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//	//SELECT READ
//	SET_BIT(TWSI_u8_TWDR,0);
//	//WAIT TO SET FLAG
//	while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//	if ((TWSI_u8_TWSR & 0xF8)==CHK_SLAVE_ADRESS_ACK){
//
//	}
//	else {
//		Local_u8Error=SLA_Error_With_Read;
//	}
//	return Local_u8Error;
//}
//
//TWSI_ErrorState  TWSI_u8SelectAddressWithWrite(u8 Copy_u8Address){
//	TWSI_ErrorState Local_u8Error=NOError;
//	TWSI_u8_TWDR=Copy_u8Address<<1;
//	//CLEAR FLAG
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//	//SELECT WRITE
//	CLR_BIT(TWSI_u8_TWDR,0);
//	//WAIT TO SET FLAG
//	while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//	if ((TWSI_u8_TWSR & 0xF8)==CHK_SLAVE_ADRESS_ACK){
//
//	}
//	else {
//		Local_u8Error=SLA_Error_With_Write;
//	}
//	return Local_u8Error;
//}
//
//
//
//
//TWSI_ErrorState TWSI_u8SendData(u8 Copy_u8Data){
//	TWSI_ErrorState Local_u8Error=NOError;
//
//	TWSI_u8_TWDR=Copy_u8Data;
//
//	//CLEAR FLAG
//SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//
////WAIT TO SET FLAG
//while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//
//if ((TWSI_u8_TWSR & 0xF8)==CHK_DATA_ACK){
//}
//
//else {
//	Local_u8Error=Data_Error_With_Read;
//}
//
//return Local_u8Error;
//
//}
//
//
//
//
//TWSI_ErrorState   TWSI_u8RecieveData(u8 *Copy_u8Data){
//	TWSI_ErrorState Local_u8Error=NOError;
//
//	//CLEAR FLAG
//SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//
////WAIT TO SET FLAG
//while(GET_BIT(TWSI_u8_TWCR,TWCR_TWINT)==0);
//
//if (TWSI_u8_TWSR & 0xF8==CHK_DATA_ACK){
//	*Copy_u8Data=TWSI_u8_TWDR;
//}
//
//else {
//	Local_u8Error=Data_Error_With_Write;
//}
//
//return Local_u8Error;
//
//}
//
//void   TWSI_voidStopCondition(void){
//
//	//SET STOP CONDITION
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWSTO);
//
//	//CLEAR FLAG
//	SET_BIT(TWSI_u8_TWCR,TWCR_TWINT);
//}
