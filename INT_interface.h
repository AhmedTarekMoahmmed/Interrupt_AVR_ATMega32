/*
 * INT_interface.h
 *
 *  Created on: Mar 20, 2019
 *      Author: Ahmed Tarek
 */

#ifndef INT_INTERFACE_H_
#define INT_INTERFACE_H_



#define EX_INT0	(u8)0
#define EX_INT1	(u8)1
#define EX_INT2	(u8)2

/*those macros are used to choose sense level of external interrupt 0*/
#define  MCUCR_INT0_ISC00   (u8)0
#define  MCUCR_INT0_ISC01   (u8)1


#define INT0_SENSE_LEVEL_FALLING_EDGE  (u8)0x02
#define INT0_SENSE_LEVEL_RISING_EDGE   (u8)0x03
#define INT0_SENSE_LEVEL_ON_CHANGE	   (u8)0x00
#define INT0_SENSE_LEVEL_LOW_LEVEL     (u8)0x01


/*those macros are used to choose sense level of external interrupt 1*/
#define  MCUCR_INT1_ISC10   (u8)2
#define  MCUCR_INT1_ISC11   (u8)3

#define INT1_SENSE_LEVEL_FALLING_EDGE  (u8)0x08
#define INT1_SENSE_LEVEL_RISING_EDGE   (u8)0x0c
#define INT1_SENSE_LEVEL_ON_CHANGE	   (u8)0x00
#define INT1_SENSE_LEVEL_LOW_LEVEL     (u8)0x04

/*those macros are used to choose sense level of external interrupt 2*/
#define  MCUCSR_INT2_ISC2   (u8)6


#define INT2_SENSE_LEVEL_FALLING_EDGE  (u8)0x00
#define INT2_SENSE_LEVEL_RISING_EDGE   (u8)0x40


/*those macros are used to choose which external interrupt will be enabled */
#define   GICR_INT0  (u8)6
#define   GICR_INT1  (u8)5
#define   GICR_INT2  (u8)7



void INT_voidInitialize();


u8 INT_u8SetLevel(u8 Copy_u8IntPNb , u8 Copy_u8Level);


u8 INT_u8IntEnable(u8 Copy_u8IntPNb);

u8 INT_u8IntDisable(u8 Copy_u8IntPNb);

u8 INT_u8SetCallbackFunc(void (*Copy_PvoidCallbackFunc)(void),u8 Copy_u8IntNb);


#endif /* INT_INTERFACE_H_ */
