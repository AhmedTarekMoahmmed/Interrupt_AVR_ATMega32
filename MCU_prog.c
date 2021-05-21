/*
 * MCU_prog.c
 *
 *  Created on: Mar 25, 2019
 *      Author: Ahmed Tarek
 */


#include "STD_TYPES.h"
#include "BIT_CALC.h"

#include "MCU_interface.h"
#include "MCU_private.h"
#include "MCU_config.h"



void MCU_voidInitlize()
{
	switch(SREG_GLOBAL_INTERRUPT_STATUE)
	{
	case GI_ENABLE :
	voidGlobalInterruptEnable();
		break;
	case GI_DISABLE :
	voidGlobalInterruptDisable();
		break;
	}
}


static void voidGlobalInterruptEnable()
{
	SREG_REG |= (1<<SREG_I_BIT);
}

static void voidGlobalInterruptDisable()
{
	SREG_REG &= ~(1<<SREG_I_BIT);
}
