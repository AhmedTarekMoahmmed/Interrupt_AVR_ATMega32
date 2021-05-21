/*interface mustn't change between the differnt Targets but the prog,config and private file may be change */
/**********************************************************************************/
/* Author  : Ahmed Tarek                                                          */
/* Date    : 29 Jan 2019                                                          */
/* Version : v01                                                                  */
/**********************************************************************************/
/*Description												                              	        		  */
/*-----------												                                      			  */
/*DIO_interface.h is a file from DIO Deriver include the header of function which */
/*use to initiate all pins ,set pin direction , set pin value ,get pin value ,    */
/*set port direction , set port value, get port value		                          */
/**********************************************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



/*pin number of the target AVR ATMEGA 32  */
/*Rnge : PIN0 TO PIN31 */

#define DIO_PIN0          (u8)0 
#define DIO_PIN1          (u8)1 
#define DIO_PIN2          (u8)2 
#define DIO_PIN3          (u8)3 
#define DIO_PIN4          (u8)4 
#define DIO_PIN5          (u8)5 
#define DIO_PIN6          (u8)6 
#define DIO_PIN7          (u8)7 
#define DIO_PIN8          (u8)8 
#define DIO_PIN9          (u8)9 
#define DIO_PIN10         (u8)10
#define DIO_PIN11         (u8)11
#define DIO_PIN12         (u8)12
#define DIO_PIN13         (u8)13
#define DIO_PIN14         (u8)14
#define DIO_PIN15         (u8)15
#define DIO_PIN16         (u8)16
#define DIO_PIN17         (u8)17
#define DIO_PIN18         (u8)18
#define DIO_PIN19         (u8)19
#define DIO_PIN20         (u8)20
#define DIO_PIN21         (u8)21
#define DIO_PIN22         (u8)22
#define DIO_PIN23         (u8)23
#define DIO_PIN24         (u8)24
#define DIO_PIN25         (u8)25
#define DIO_PIN26         (u8)26
#define DIO_PIN27         (u8)27
#define DIO_PIN28         (u8)28
#define DIO_PIN29         (u8)29
#define DIO_PIN30         (u8)30
#define DIO_PIN31         (u8)31

#define DIO_PORT_A         0
#define DIO_PORT_B         1
#define DIO_PORT_C         2
#define DIO_PORT_D         3

/****************************PORTS_HANDLING**************************/


#define DIO_PORTA      DIO_PORT_0_REG
#define DIO_DDRA       DIO_DDR_0_REG	
#define DIO_PINA       DIO_PIN_0_REG	


#define DIO_PORTB      DIO_PORT_1_REG
#define DIO_DDRB       DIO_DDR_1_REG	
#define DIO_PINB       DIO_PIN_1_REG	
      
      
#define DIO_PORTC      DIO_PORT_2_REG
#define DIO_DDRC       DIO_DDR_2_REG	
#define DIO_PINC       DIO_PIN_2_REG	
      
      
#define DIO_PORTD      DIO_PORT_3_REG
#define DIO_DDRD       DIO_DDR_3_REG	
#define DIO_PIND       DIO_PIN_3_REG	


/***************************************************************/

/*Description: Initialization all pins direction and value
 * Inputs : void
 * Outputs: void
 *
 * */


void DIO_voidIntialize(void);

/****************************************************************/

/****************************************************************/

/*Description: set pin Direction
 * Inputs : u8  Copy_u8PinNB     : pin Number
                                  Range PIN0 TO PIN31
 * 		  : u8  Copy_u8Direction : if it DIO_u8_PIN_INIT_INPUT mean that this pin is input ,
                                if it DIO_u8_PIN_INIT_OUTPUT mean that this pin is output
 * Outputs: Error state
 *
 * */
 
u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB,u8 Copy_u8Direction);

/****************************************************************/

/****************************************************************/

/*Description: set pin value
 * Inputs : u8 u8PinNB : pin Number
                        Range PIN0 TO PIN31
 * 		  : u8 u8value :  if it DIO_u8_PIN_INIT_LOW mean that this pin is input ,
 *                      if it DIO_u8_PIN_INIT_HIGH mean that this pin is output
 * Outputs: Error state
 * */

u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 Copy_u8value);

/******************************************************************/

/****************************************************************/

/*Description: get pin value
 * Inputs : u8 u8PinNB   : pin Number
                           Range PIN0 TO PIN31
 * 		  : u8* pu8value : pointer to value which it may be high (1) or low (0)
 * Outputs: Error state
 *
 * */

u8 DIO_u8GetPinValue(u8 Copy_u8PinNB,u8* Copy_pu8value);

/****************************************************************/

/****************************************************************/

/*Description: set port value
 * Inputs : u8 u8PortNB     : port Number
                             Range PORTA TO PORTD
 * 		  : u8 u8Direction : if it DIO_u8_PORT_INIT_LOW mean that all pins of this port are zero ,
 * 		                    if it DIO_u8_PORT_INIT_HIGH mean that all pins of this port are one
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortValue(u8 Copy_u8PortNB,u8 Copy_u8Value);
/****************************************************************/

/****************************************************************/
/*Description: set port Direction
 * Inputs : u8 u8PortNB     : port Number
                             Range PORTA TO PORTD
 * 		  : u8 u8Direction : if it DIO_u8_PORT_INIT_INPUT mean that this port is input ,
 * 		                     if it DIO_u8_PORT_INIT_OUTPUT mean that this port is output
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB,u8 Copy_u8Direction);

/****************************************************************/

/****************************************************************/

/*Description: get port value
 * Inputs : u8 u8PinNB   :  port Number
                           Range PORTA TO PORTD
 * 		  : u8* pu8value : pointer to value which it may be high (1) or low (0)
 * Outputs: Error state
 *
 * */

u8 DIO_u8GetPortValue(u8 Copy_u8PortNB,u8* Copy_pu8value);
/****************************************************************/

#endif /* DIO_INTERFACE_H_ */
