/*
 * SPI_Program.c
 *
 *  Created on: Aug 12, 2024
 *      Author: PC-SHOP
 */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include  "SPI_Config.h"
#include  "SPI_Interface.h"
#include  "SPI_Privet.h"

void SPI_voidInitSlave(void){
	//ENABLE SLAVE
	CLR_BIT(SPI_SPCR_REG,4);
	// ENABLE SPI
	SET_BIT(SPI_SPCR_REG,6);



}


void SPI_voidInitMaster(void){
	//PRESCALER
	SET_BIT(SPI_SPCR_REG,1);
	SET_BIT(SPI_SPCR_REG,0);
	//ENABLE MASTER
	SET_BIT(SPI_SPCR_REG,4);
	// ENABLE SPI
	SET_BIT(SPI_SPCR_REG,6);
}




u8 SPI_u8Tranceiver(u8 Copy_u8Data){
	SPI_SPDR_REG= Copy_u8Data;
	while (GET_BIT(SPI_SPSR_REG,7)==0);
	return SPI_SPDR_REG;


}
