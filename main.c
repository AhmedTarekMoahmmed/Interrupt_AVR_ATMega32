/*
 * main.c
 *
 *  Created on: Mar 25, 2019
 *      Author: Ahmed Tarek
 */



#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include "MCU_interface.h"
#include "INT_interface.h"


#define TIMER0_OCR0_REG	        ((Register_8B*) 0x5c) -> ByteAccess

#define TIMER0_TIMSK_REG	    ((Register_8B*) 0x59) -> ByteAccess
#define TIMER0_TIFR0_REG	    ((Register_8B*) 0x58) -> ByteAccess
#define TIMER0_TCCR0_REG	    ((Register_8B*) 0x53) -> ByteAccess
#define TIMER0_TCNT0_REG	    ((Register_8B*) 0x52) -> ByteAccess
#define SREG_REG				((Register_8B*) 0x5f) -> ByteAccess

void DisplayLed(void);

u8 period=0,on_time=0,off_time=0;

int main(void){
u8 DCycle=0;
/*************************/
	TIMER0_TCNT0_REG = 0;
	TIMER0_TCCR0_REG |= 0x02;
		TIMER0_TIMSK_REG |= 0x01;
		SREG_REG |= 0x80;
/*********************************************/
	DIO_voidIntialize();
	MCU_voidInitlize();
	INT_voidInitialize();

	INT_u8SetLevel(EX_INT0,INT0_SENSE_LEVEL_RISING_EDGE);
	INT_u8IntEnable(EX_INT0);

	INT_u8SetCallbackFunc(DisplayLed,EX_INT0);
	DIO_u8SetPinValue(DIO_PIN0,0);

while(1)
	{
	DCycle =0;

		period = on_time + off_time ;
		DCycle = (on_time*100)/period;

		if ((DCycle >= 10) && (DCycle <= 50))
		{
			DIO_u8SetPinValue(DIO_PIN0,1);

		}
		else
		{
			DIO_u8SetPinValue(DIO_PIN0,0);
		}


	}

	return 0;
}


void DisplayLed(void){

	static u8 flag=0;
	static u8 time=0;
	time  = TIMER0_TCNT0_REG;
	TIMER0_TCNT0_REG = 0 ;

	if (flag == 0)
	{
		on_time = time;
		flag =1;
		INT_u8SetLevel(EX_INT0,INT0_SENSE_LEVEL_FALLING_EDGE);

	}
	else
	{
		off_time = time;
		flag = 0;
		INT_u8SetLevel(EX_INT0,INT0_SENSE_LEVEL_RISING_EDGE);

	}


	return;
}















//void DisplayLed(void);
//
//
//
//int main(void){
//
//	DIO_voidIntialize();
//	MCU_voidInitlize();
//	INT_voidInitialize();
//
//	INT_u8SetLevel(EX_INT0,INT0_SENSE_LEVEL_FALLING_EDGE);
//	INT_u8IntEnable(EX_INT0);
//
//	INT_u8SetCallbackFunc(DisplayLed,EX_INT0);
//while(1);
//
//	return 0;
//}
//
//
//void DisplayLed(void){
//
//
//	DIO_u8SetPinValue(DIO_PIN0,1);
//
//
//	return;
//}
