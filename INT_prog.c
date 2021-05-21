/*
 * INT_prog.c
 *
 *  Created on: Mar 20, 2019
 *      Author: Ahmed Tarek
 */

#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "INT_interface.h"
#include "INT_private.h"
#include "INT_config.h"



static void (*PvoidCallbackFun[3])(void)={NULL,NULL,NULL};

void INT_voidInitialize()
{
	/************INT0**************************/
	switch(INT0_INIT_STATUE)
	{
	case ENABLE:
		voidInt0Enabled();

		break;
	case DISABLE:
		voidInt0Disabled();

		break;
	}

	switch(INT0_INIT_LEVEL)
	{
	case INT0_SENSE_LEVEL_FALLING_EDGE:
		voidInt0FallingEdge();
		break;
	case INT0_SENSE_LEVEL_RISING_EDGE:
		voidInt0RisingEdge();
		break;
	case INT0_SENSE_LEVEL_ON_CHANGE:
		voidInt0OnChange();
		break;
	case INT0_SENSE_LEVEL_LOW_LEVEL:
		voidInt0LowLevel();
		break;

	}


	/******************INT1*******************/
	switch(INT1_INIT_STATUE)
	{
	case ENABLE:
		voidInt1Enabled();

		break;
	case DISABLE:
		voidInt1Disabled();

		break;
	}

	switch(INT1_INIT_LEVEL)
	{
	case INT1_SENSE_LEVEL_FALLING_EDGE:
		voidInt1FallingEdge();
		break;
	case INT1_SENSE_LEVEL_RISING_EDGE:
		voidInt1RisingEdge();
		break;
	case INT1_SENSE_LEVEL_ON_CHANGE:
		voidInt1OnChange();
		break;
	case INT1_SENSE_LEVEL_LOW_LEVEL:
		voidInt1LowLevel();
		break;

	}




	/*********************INT2******************/
	switch(INT2_INIT_STATUE)
	{
	case ENABLE:
		voidInt2Enabled();

		break;
	case DISABLE:
		voidInt2Disabled();

		break;
	}

	switch(INT2_INIT_LEVEL)
	{
	case INT2_SENSE_LEVEL_FALLING_EDGE:
		voidInt2FallingEdge();
		break;
	case INT2_SENSE_LEVEL_RISING_EDGE:
		voidInt2RisingEdge();
		break;

	}


}

/*Copy_u8Level : in Range :
 * 				For INT0    INT0_SENSE_LEVEL_FALLING_EDGE */
/*							INT0_SENSE_LEVEL_RISING_EDGE */
/*							INT0_SENSE_LEVEL_ON_CHANGE    */
/*							INT0_SENSE_LEVEL_LOW_LEVEL    */

/*				For INT1   INT1_SENSE_LEVEL_FALLING_EDGE
						   INT1_SENSE_LEVEL_RISING_EDGE
						   INT1_SENSE_LEVEL_ON_CHANGE
						   INT1_SENSE_LEVEL_LOW_LEVEL   */

/*				For INT2   INT2_SENSE_LEVEL_FALLING_EDGE
						   INT2_SENSE_LEVEL_RISING_EDGE */


u8 INT_u8SetLevel(u8 Copy_u8IntPNb , u8 Copy_u8Level)
{

	u8 LocalOperationStatue = STD_u8_OK;

	if(Copy_u8IntPNb >= MAX_NO_OF_EX_INT)
	{
		LocalOperationStatue = STD_u8_ERROR;
	}
	else
	{


	switch(Copy_u8IntPNb)
	{
	case EX_INT0:
		switch(Copy_u8Level)
		{
		case INT0_SENSE_LEVEL_FALLING_EDGE:
			voidInt0FallingEdge();
			break;
		case INT0_SENSE_LEVEL_RISING_EDGE:
			voidInt0RisingEdge();
			break;
		case INT0_SENSE_LEVEL_ON_CHANGE:
			voidInt0OnChange();
			break;
		case INT0_SENSE_LEVEL_LOW_LEVEL:
			voidInt0LowLevel();
			break;

		}

		break;

		case EX_INT1:
			switch(Copy_u8Level)
			{
			case INT1_SENSE_LEVEL_FALLING_EDGE:
				voidInt1FallingEdge();
				break;
			case INT1_SENSE_LEVEL_RISING_EDGE:
				voidInt1RisingEdge();
				break;
			case INT1_SENSE_LEVEL_ON_CHANGE:
				voidInt1OnChange();
				break;
			case INT1_SENSE_LEVEL_LOW_LEVEL:
				voidInt1LowLevel();
				break;

			}

			break;

			case EX_INT2:
				switch(Copy_u8Level)
				{
				case INT2_SENSE_LEVEL_FALLING_EDGE:
					voidInt2FallingEdge();
					break;
				case INT2_SENSE_LEVEL_RISING_EDGE:
					voidInt2RisingEdge();
					break;

				}

				break;
	  }
	}
	return LocalOperationStatue;
}


u8 INT_u8IntEnable(u8 Copy_u8IntPNb)
{

	u8 LocalOperationStatue = STD_u8_OK;

	if(Copy_u8IntPNb >= MAX_NO_OF_EX_INT)
	{
		LocalOperationStatue = STD_u8_ERROR;
	}
	else
	{

		switch(Copy_u8IntPNb)
		{
		case EX_INT0:
			voidInt0Enabled();
			break;
		case EX_INT1:
			voidInt1Enabled();
			break;
		case EX_INT2:
			voidInt2Enabled();
			break;

		}
	}
	return LocalOperationStatue;
}



u8 INT_u8IntDisable(u8 Copy_u8IntPNb)
{
	u8 LocalOperationStatue = STD_u8_OK;

	if(Copy_u8IntPNb >= MAX_NO_OF_EX_INT)
	{
		LocalOperationStatue = STD_u8_ERROR;
	}
	else
	{

		switch(Copy_u8IntPNb)

		{

		case EX_INT0:
			voidInt0Disabled();
			break;

		case EX_INT1:
			voidInt1Disabled();
			break;

		case EX_INT2:
			voidInt2Disabled();
			break;
		}

	}
	return LocalOperationStatue;
}





u8 INT_u8SetCallbackFunc(void (*Copy_PvoidCallbackFunc)(void),u8 Copy_u8IntNb)
{
	u8 LocalOperationStatue = STD_u8_OK;

	switch(Copy_u8IntNb)
	{
	case EX_INT0: PvoidCallbackFun[0]=Copy_PvoidCallbackFunc; break;
	case EX_INT1: PvoidCallbackFun[1]=Copy_PvoidCallbackFunc; break;
	case EX_INT2: PvoidCallbackFun[2]=Copy_PvoidCallbackFunc; break;

	default: LocalOperationStatue = STD_u8_ERROR;
	}


	return LocalOperationStatue;
}


void __vector_1 (void) __attribute__((signal));
void __vector_1 (void)
{
	if(PvoidCallbackFun[0] != NULL)
	{
		PvoidCallbackFun[0]();
	}
	else
	{

	}
}

void __vector_2 (void) __attribute__((signal));
void __vector_2 (void)
{
	if(PvoidCallbackFun[1] != NULL)
	{
		PvoidCallbackFun[1]();
	}
	else
	{

	}
}



void __vector_3 (void) __attribute__((signal));
void __vector_3 (void)
{
	if(PvoidCallbackFun[2] != NULL)
	{
		PvoidCallbackFun[2]();
	}
	else
	{

	}
}

/************************************************************************/


/*Static functions to enable the external interrupt*/
static void voidInt0Enabled()
{
	GICR_REG |= (HIGH<<GICR_INT0);
}

static void voidInt1Enabled()
{
	GICR_REG |= (HIGH<<GICR_INT1);
}

static void voidInt2Enabled()
{
	GICR_REG |= (HIGH<<GICR_INT2);
}


/*Static functions to disabled the external interrupt*/
static void voidInt0Disabled()
{
	GICR_REG &= ~(HIGH<<GICR_INT0);
}

static void voidInt1Disabled()
{
	GICR_REG &= ~(HIGH<<GICR_INT1);
}

static void voidInt2Disabled()
{
	GICR_REG &= ~(HIGH<<GICR_INT2);
}


/*to set sense level for external Interrupt*/

/********************INT0***************************/

static void voidInt0FallingEdge()
{
	MCUCR_REG &= ~(HIGH<<MCUCR_INT0_ISC00);
	MCUCR_REG |= (HIGH<<MCUCR_INT0_ISC01);
}

static void voidInt0RisingEdge()
{
	MCUCR_REG |= (HIGH<<MCUCR_INT0_ISC00);
	MCUCR_REG |= (HIGH<<MCUCR_INT0_ISC01);
}

static void voidInt0OnChange()
{
	MCUCR_REG &= ~(HIGH<<MCUCR_INT0_ISC00);
	MCUCR_REG &= ~(HIGH<<MCUCR_INT0_ISC01);
}

static void voidInt0LowLevel()
{
	MCUCR_REG |= (HIGH<<MCUCR_INT0_ISC00);
	MCUCR_REG &= ~(HIGH<<MCUCR_INT0_ISC01);
}

/*******************INT1**************************/

static void voidInt1FallingEdge()
{
	MCUCR_REG &= ~(HIGH<<MCUCR_INT1_ISC10);
	MCUCR_REG |= (HIGH<<MCUCR_INT1_ISC11);
}

static void voidInt1RisingEdge()
{
	MCUCR_REG |= (HIGH<<MCUCR_INT1_ISC10);
	MCUCR_REG |= (HIGH<<MCUCR_INT1_ISC11);
}

static void voidInt1OnChange()
{
	MCUCR_REG &= ~(HIGH<<MCUCR_INT1_ISC10);
	MCUCR_REG &= ~(HIGH<<MCUCR_INT1_ISC11);
}

static void voidInt1LowLevel()
{
	MCUCR_REG |= (HIGH<<MCUCR_INT1_ISC10);
	MCUCR_REG &= ~(HIGH<<MCUCR_INT1_ISC11);
}

/********************INT2**************************/

static void voidInt2FallingEdge()
{
	MCUCR_REG &= ~(HIGH<<MCUCSR_INT2_ISC2);

}

static void voidInt2RisingEdge()
{
	MCUCR_REG |= (HIGH<<MCUCSR_INT2_ISC2);
}



