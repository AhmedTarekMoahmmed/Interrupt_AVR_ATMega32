/*
 * INT_private.h
 *
 *  Created on: Mar 20, 2019
 *      Author: Ahmed Tarek
 */

#ifndef INT_PRIVATE_H_
#define INT_PRIVATE_H_




static void voidInt0FallingEdge();
static void voidInt0RisingEdge();
static void voidInt0OnChange();
static void voidInt0LowLevel();



static void voidInt1FallingEdge();
static void voidInt1RisingEdge();
static void voidInt1OnChange();
static void voidInt1LowLevel();

static void voidInt2FallingEdge();
static void voidInt2RisingEdge();




static void voidInt0Enabled();
static void voidInt1Enabled();
static void voidInt2Enabled();


static void voidInt0Disabled();
static void voidInt1Disabled();
static void voidInt2Disabled();



#define ENABLE		(u8)1
#define DISABLE		(u8)0

//#define HIGH	           (u8)1
#define MAX_NO_OF_EX_INT   (u8)3


#define  MCUCR_REG       (( Register_8B *)0x55) -> ByteAccess
#define  MCUCSR_REG      (( Register_8B *)0x54) -> ByteAccess
#define  GICR_REG        (( Register_8B *)0x5B) -> ByteAccess
#define  GIFR_REG        (( Register_8B *)0x5A) -> ByteAccess

#endif /* INT_PRIVATE_H_ */
