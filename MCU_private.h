/*
 * MCU_private.h
 *
 *  Created on: Mar 25, 2019
 *      Author: Ahmed Tarek
 */

#ifndef MCU_PRIVATE_H_
#define MCU_PRIVATE_H_

#define GI_ENABLE 	(u8)1
#define GI_DISABLE 	(u8)0

#define SREG_I_BIT (u8)7

#define SREG_REG		((Register_8B*)0x5f) -> ByteAccess

static void voidGlobalInterruptEnable();
static void voidGlobalInterruptDisable();


#endif /* MCU_PRIVATE_H_ */
