/*
 * TWI_Program.c
 *
 *  Created on: Aug 13, 2024
 *      Author: walee
 */

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "TWI_Private.h"
#include "TWI_Config.h"
#include "TWI_Interface.h"


void TWI_voidInitMaster(void){

	/*select prescaler*/
	CLR_BIT(TWI_u8_TWSR,0);
	CLR_BIT(TWI_u8_TWSR,1);
	TWI_u8_TWBR=2;
	/*enable ACK*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWEA);
	/*enable TWI*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWEN);
}


void TWI_voidInitSlave(u8 Copy_u8Address)
{
	/*select Adress*/
	TWI_u8_TWAR=Copy_u8Address<<1;
	/*enable TWI*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWEN);

}

TWI_ErrorState TWI_u8StartCondition(void)
{
	TWI_ErrorState  local_u8Error=NOError;

	/*set Start condition */
	SET_BIT(TWI_u8_TWCR,TWCR_TWSTA);
	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);

	/*wait to set flag*/
	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_START_CONDITION){

	}
	else {

		local_u8Error=StartError;
	}

	return local_u8Error;
}
TWI_ErrorState TWI_u8RepeatedStartCondition(void){

	TWI_ErrorState  local_u8Error=NOError;

	/*set Start condition */

	SET_BIT(TWI_u8_TWCR,TWCR_TWSTA);
	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);

	/*wait to set flag*/
	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_REPEATED_START){

	}
	else {

		local_u8Error=RepeatedStartError;
	}

	return local_u8Error;
}
TWI_ErrorState TWI_u8SelectAdressWithRead(u8 Copy_u8Address){

	TWI_ErrorState  local_u8Error=NOError;

	TWI_u8_TWDR=Copy_u8Address<<1;

	/*select read*/
	SET_BIT(TWI_u8_TWDR,0);
	/*set Start condition */
	CLR_BIT(TWI_u8_TWCR,TWCR_TWSTA);
	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);
	/*wait to set flag*/
	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_SLAVE_ADRESS_RD_ACK){

	}
	else {

		local_u8Error=SLA_Error_WITH_READ;
	}

	return local_u8Error;

}

TWI_ErrorState TWI_u8SelectAdressWithWrite(u8 Copy_u8Address){
	TWI_ErrorState  local_u8Error=NOError;

	TWI_u8_TWDR=Copy_u8Address<<1;

	/*select read*/
	CLR_BIT(TWI_u8_TWDR,0);
	/*set Start condition */
	CLR_BIT(TWI_u8_TWCR,TWCR_TWSTA);
	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);
	/*wait to set flag*/

	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_SLAVE_ADRESS_ACK){

	}
	else {

		local_u8Error=SLA_Error_WITH_WRITE;
	}

	return local_u8Error;

}

TWI_ErrorState TWI_u8SendData(u8 copy_u8Data)
{
	TWI_ErrorState  local_u8Error=NOError;

	TWI_u8_TWDR=copy_u8Data;

	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);
	/*wait to set flag*/
	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_DATA_WR_ACK){

	}
	else {

		local_u8Error=Data_Error_WITH_READ;
	}

	return local_u8Error;


}

TWI_ErrorState TWI_u8RecieveData(u8 *copy_u8Data)
{
	TWI_ErrorState  local_u8Error=NOError;
	/*enable ACK*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWEA);

	/*Clear flag */
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);
	/*wait to set flag*/
	while (GET_BIT(TWI_u8_TWCR,TWCR_TWINT)==0);

	if ((TWI_u8_TWSR & 0xF8)==CHK_DATA_RD_ACK)
	{
		*copy_u8Data=TWI_u8_TWDR;
	}
	else {

		local_u8Error=Data_Error_WITH_READ;
	}

	return local_u8Error;



}

void TWI_voidStopCondition(void){
	/*enable stop condition*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWSTO);
	/*clear flag*/
	SET_BIT(TWI_u8_TWCR,TWCR_TWINT);


}

