/**************************************************************************/
/* Author  : Ahmed Tarek                                                  */
/* Date    : 29 Jan 2019                                                  */
/* Version : v01                                                          */
/**************************************************************************/
/*Description															  */
/*-----------															  */
/*DIO_prog.c is a file from DIO Deriver include the body of function which*/
/*use to set pin direction , set pin value ,get pin value ,               */
/*set port direction , set port value, get port value		              */
/**************************************************************************/
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"








/********************************INTILIZATION_FUNCTION****************************************/

/*Description: Initialization all pins direction and value
 * Inputs : void
 * Outputs: void
 *
 * */


void DIO_voidIntialize(void){
    
  /*DIO_u8_DDRA must be define in private file                  */
  /*initialize the direction of port A*/
  DIO_DDRA  = CONC_8bit( DIO_u8_INIT_DIR_PIN0,
                         DIO_u8_INIT_DIR_PIN1,
                         DIO_u8_INIT_DIR_PIN2,
                         DIO_u8_INIT_DIR_PIN3,
                         DIO_u8_INIT_DIR_PIN4,
                         DIO_u8_INIT_DIR_PIN5,
                         DIO_u8_INIT_DIR_PIN6,
                         DIO_u8_INIT_DIR_PIN7
                         );
                                        
                                        
  
    /*initialize the direction of port B*/
  DIO_DDRB  = CONC_8bit( DIO_u8_INIT_DIR_PIN8 ,
                         DIO_u8_INIT_DIR_PIN9 ,
                         DIO_u8_INIT_DIR_PIN10,
                         DIO_u8_INIT_DIR_PIN11,
                         DIO_u8_INIT_DIR_PIN12,
                         DIO_u8_INIT_DIR_PIN13,
                         DIO_u8_INIT_DIR_PIN14,
                         DIO_u8_INIT_DIR_PIN15
                         );
                                        
  /*initialize the direction of port C*/                                      
  DIO_DDRC  = CONC_8bit( DIO_u8_INIT_DIR_PIN16,
                         DIO_u8_INIT_DIR_PIN17,
                         DIO_u8_INIT_DIR_PIN18,
                         DIO_u8_INIT_DIR_PIN19,
                         DIO_u8_INIT_DIR_PIN20,
                         DIO_u8_INIT_DIR_PIN21,
                         DIO_u8_INIT_DIR_PIN22,
                         DIO_u8_INIT_DIR_PIN23
                         );
                                        
                                        
   /*initialize the direction of port D*/
  DIO_DDRD = CONC_8bit( DIO_u8_INIT_DIR_PIN24,
                        DIO_u8_INIT_DIR_PIN25,
                        DIO_u8_INIT_DIR_PIN26,
                        DIO_u8_INIT_DIR_PIN27,
                        DIO_u8_INIT_DIR_PIN28,
                        DIO_u8_INIT_DIR_PIN29,
                        DIO_u8_INIT_DIR_PIN30,
                        DIO_u8_INIT_DIR_PIN31
                        );
                                         
  /*initialize the Value of port A */                                       
  DIO_PORTA = CONC_8bit( DIO_u8_INIT_VALUE_PIN0,
                         DIO_u8_INIT_VALUE_PIN1,
                         DIO_u8_INIT_VALUE_PIN2,
                         DIO_u8_INIT_VALUE_PIN3,
                         DIO_u8_INIT_VALUE_PIN4,
                         DIO_u8_INIT_VALUE_PIN5,
                         DIO_u8_INIT_VALUE_PIN6,
                         DIO_u8_INIT_VALUE_PIN7
                         );
                                        
  /*initialize the Value of port B */                                                                            
  DIO_PORTB  = CONC_8bit( DIO_u8_INIT_VALUE_PIN8 ,
                          DIO_u8_INIT_VALUE_PIN9 ,
                          DIO_u8_INIT_VALUE_PIN10,
                          DIO_u8_INIT_VALUE_PIN11,
                          DIO_u8_INIT_VALUE_PIN12,
                          DIO_u8_INIT_VALUE_PIN13,
                          DIO_u8_INIT_VALUE_PIN14,
                          DIO_u8_INIT_VALUE_PIN15
                          );
  /*initialize the Value of port C */                                                                            
  DIO_PORTC = CONC_8bit( DIO_u8_INIT_VALUE_PIN16,
                         DIO_u8_INIT_VALUE_PIN17,
                         DIO_u8_INIT_VALUE_PIN18,
                         DIO_u8_INIT_VALUE_PIN19,
                         DIO_u8_INIT_VALUE_PIN20,
						 DIO_u8_INIT_VALUE_PIN21,
                         DIO_u8_INIT_VALUE_PIN22,
                         DIO_u8_INIT_VALUE_PIN23
						 );
  /*initialize the Value of port D */                                      
  DIO_PORTD = CONC_8bit( DIO_u8_INIT_VALUE_PIN24,
                         DIO_u8_INIT_VALUE_PIN25,
                         DIO_u8_INIT_VALUE_PIN26,
                         DIO_u8_INIT_VALUE_PIN27,
                         DIO_u8_INIT_VALUE_PIN28,
                         DIO_u8_INIT_VALUE_PIN29,
                         DIO_u8_INIT_VALUE_PIN30,
                         DIO_u8_INIT_VALUE_PIN31
                         );
  
  /* validate the initialization values of all ports when set its direction as input */
  #if (( DIO_u8_PIN_DIR_PIN0 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN0 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN0 
    #define    DIO_u8_PIN_VALUE_PIN0  DIO_u8_PIN_INIT_DEF  
  #endif
    
    
  #if (( DIO_u8_PIN_DIR_PIN1 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN1 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN1 
    #define    DIO_u8_PIN_VALUE_PIN1  DIO_u8_PIN_INIT_DEF
  #endif
    
    #if (( DIO_u8_PIN_DIR_PIN2 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN2 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN2 
    #define    DIO_u8_PIN_VALUE_PIN2  DIO_u8_PIN_INIT_DEF
   #endif
    
    #if (( DIO_u8_PIN_DIR_PIN3 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN3 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN3
    #define    DIO_u8_PIN_VALUE_PIN3  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN4 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN4 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN4 
    #define    DIO_u8_PIN_VALUE_PIN4  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN5 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN5 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN5 
    #define    DIO_u8_PIN_VALUE_PIN5  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN6 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN6 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN6 
    #define    DIO_u8_PIN_VALUE_PIN6  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    
    #if (( DIO_u8_PIN_DIR_PIN7 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN7 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN7 
    #define    DIO_u8_PIN_VALUE_PIN7  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN8 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN8 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN8 
    #define    DIO_u8_PIN_VALUE_PIN8  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN9 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN9 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN9 
    #define    DIO_u8_PIN_VALUE_PIN9  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN10 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN10 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN10 
    #define    DIO_u8_PIN_VALUE_PIN10  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN11 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN11 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN11 
    #define    DIO_u8_PIN_VALUE_PIN11  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN12 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN12 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN12 
    #define    DIO_u8_PIN_VALUE_PIN12  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN13 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN13 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN13 
    #define    DIO_u8_PIN_VALUE_PIN13  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN14 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN14 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN14 
    #define    DIO_u8_PIN_VALUE_PIN14  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN15 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN15 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN15 
    #define    DIO_u8_PIN_VALUE_PIN15  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN16 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN16 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN16 
    #define    DIO_u8_PIN_VALUE_PIN16  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN0 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN17 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN17 
    #define    DIO_u8_PIN_VALUE_PIN17  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN18 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN18 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN18 
    #define    DIO_u8_PIN_VALUE_PIN18  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN19 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN19 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN19 
    #define    DIO_u8_PIN_VALUE_PIN19  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN20 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN20 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN20 
    #define    DIO_u8_PIN_VALUE_PIN20  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    
    #if (( DIO_u8_PIN_DIR_PIN21 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN21 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN21 
    #define    DIO_u8_PIN_VALUE_PIN21  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN22 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN22 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN22 
    #define    DIO_u8_PIN_VALUE_PIN22  DIO_u8_PIN_INIT_DEF
    #endif
    
    
    #if (( DIO_u8_PIN_DIR_PIN23 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN23 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN23 
    #define    DIO_u8_PIN_VALUE_PIN23  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN24 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN24 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN24 
    #define    DIO_u8_PIN_VALUE_PIN24  DIO_u8_PIN_INIT_DEF
    #endif
    
    #if (( DIO_u8_PIN_DIR_PIN25 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN25 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN25 
    #define    DIO_u8_PIN_VALUE_PIN25  DIO_u8_PIN_INIT_DEF
    #endif
    
     #if (( DIO_u8_PIN_DIR_PIN26 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN26 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN26 
    #define    DIO_u8_PIN_VALUE_PIN26  DIO_u8_PIN_INIT_DEF
    #endif
    
    
     #if (( DIO_u8_PIN_DIR_PIN27 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN27 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN27 
    #define    DIO_u8_PIN_VALUE_PIN27  DIO_u8_PIN_INIT_DEF
    #endif
    
     #if (( DIO_u8_PIN_DIR_PIN28 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN28 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN28 
    #define    DIO_u8_PIN_VALUE_PIN28  DIO_u8_PIN_INIT_DEF
    #endif
    
     #if (( DIO_u8_PIN_DIR_PIN29 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN29 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN29 
    #define    DIO_u8_PIN_VALUE_PIN29  DIO_u8_PIN_INIT_DEF
    #endif
    
    
     #if (( DIO_u8_PIN_DIR_PIN30 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN30 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN30 
    #define    DIO_u8_PIN_VALUE_PIN30  DIO_u8_PIN_INIT_DEF
    #endif
    
     #if (( DIO_u8_PIN_DIR_PIN31 == DIO_u8_PIN_INIT_INPUT)&&( DIO_u8_PIN_VALUE_PIN31 == DIO_u8_PIN_INIT_HIGH))
    #warning "this pin its direction is input so it automaticaliy will set as DIO_u8_PIN_VALUE_LOW"
    #undef  DIO_u8_PIN_VALUE_PIN31 
    #define    DIO_u8_PIN_VALUE_PIN31  DIO_u8_PIN_INIT_DEF
    #endif
    
  
}


/********************************************SET_PIN_VALUE****************************************/

/*Description: set pin value
 * Inputs : u8 Copy_u8PinNB : pin Number
 * 		    : u8 Copy_u8value : it may be high (DIO_u8_PIN_INIT_HIGH) or low (DIO_u8_PIN_INIT_LOW)
 * Outputs: Error state
 *
 * */

u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 Copy_u8value)
{
	/*Local variables*/
		u8 Local_u8OperationStatus = STD_u8_OK;
		/*use this if condition to valid the input*/
		if(
				(Copy_u8PinNB >= DIO_MAX_PIN_NO) ||
				((Copy_u8value!=DIO_u8_PIN_INIT_HIGH) && (Copy_u8value!=DIO_u8_PIN_INIT_LOW))
		  )
		{
			Local_u8OperationStatus = STD_u8_ERROR;

		}else
		{
			if(Copy_u8PinNB < DIO_u8_PIN_NO_8)
         {
           			ASSI_BIT( DIO_PORT_0_REG,Copy_u8PinNB,Copy_u8value);
         }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          ASSI_BIT( DIO_PORT_1_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_8),Copy_u8value);
        }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          ASSI_BIT( DIO_PORT_2_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_16),Copy_u8value);
        }
      else
        {
          ASSI_BIT( DIO_PORT_3_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_24),Copy_u8value);
        }

		}


		/*Function Return*/
		return Local_u8OperationStatus;

}
/*******************************************************************************************/



/********************************************SET_PIN_DIRECTION*****************************/

/*Description: set pin value
 * Inputs : u8 Copy_u8PinNB     : pin Number
 * 		    : u8 Copy_u8Direction : it may be output (DIO_u8_PIN_INIT_OUTPUT) or input (DIO_u8_PIN_INIT_INPUT)
 * Outputs: Error state
 *
 * */

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB,u8 Copy_u8Direction)
{
	/*Local variables*/
		u8 Local_u8OperationStatus = STD_u8_OK;
		/*use this if condition to valid the input*/
		if(
				(Copy_u8PinNB >= DIO_MAX_PIN_NO) ||
				((Copy_u8Direction!=DIO_u8_PIN_INIT_OUTPUT) && (Copy_u8Direction!=DIO_u8_PIN_INIT_INPUT))
		  )
		{
			Local_u8OperationStatus = STD_u8_ERROR;

		}else
		{
			if(Copy_u8PinNB < DIO_u8_PIN_NO_8)
         {
           			ASSI_BIT( DIO_DDR_0_REG, Copy_u8PinNB, Copy_u8Direction);
         }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          ASSI_BIT( DIO_DDR_1_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_8),Copy_u8Direction);
        }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          ASSI_BIT( DIO_DDR_2_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_16),Copy_u8Direction);
        }
      else
        {
          ASSI_BIT( DIO_DDR_3_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_24),Copy_u8Direction);
        }

		}


		/*Function Return*/
		return Local_u8OperationStatus;

}
/**************************************************************************************/




/*******************************************GET_PIN_VALUE****************************************/

/*Description: get pin value
 * Inputs : u8 Copy_u8PinNB   : pin Number
 * 		  : u8* Copy_pu8value  : this pointer points to the address
 * 		  				               where i'll save the pin value in it
 * Outputs: Error state
 *
 * */

u8 DIO_u8GetPinValue(u8 Copy_u8PinNB, u8* Copy_pu8value)
{

		/*Local variables*/
	    u8 Local_u8OperationStatus = STD_u8_OK;
		/*use this if condition to valid the input*/
     	if(
     			(Copy_pu8value == NULL) ||
     			(Copy_u8PinNB > DIO_MAX_PIN_NO)
			)
		{
     		Local_u8OperationStatus = STD_u8_ERROR;
		}else
		{
		 	if(Copy_u8PinNB < DIO_u8_PIN_NO_8)
         {
           *Copy_pu8value = GET_BIT( DIO_PIN_0_REG,Copy_u8PinNB);
         }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          *Copy_pu8value = GET_BIT( DIO_PIN_1_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_8));
        }
      else if((Copy_u8PinNB < DIO_u8_PIN_NO_16)&&(Copy_u8PinNB >= DIO_u8_PIN_NO_8))
        {
          *Copy_pu8value = GET_BIT( DIO_PIN_2_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_16));
        }
      else
        {
          *Copy_pu8value = GET_BIT( DIO_PIN_3_REG,(Copy_u8PinNB-DIO_u8_PIN_NO_24));
        }
            
		}


			/*Function Return*/
			return Local_u8OperationStatus;

}
/*************************************************************************************/




/******************************************SET_PORT_DIRECTION**********************************/

/*Description: set port Direction
 * Inputs : u8 Copy_u8PortNB  : port Number
 * 		  : u8 Copy_u8Direction : if it DIO_INPUT mean that this port is input ,
 * 		    if it DIO_OUTPUT mean that this port is output
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB,u8 Copy_u8Direction)
{
	/*Local variables*/
    u8 Local_u8OperationStatus = STD_u8_OK;
	/*use this if condition to valid the input*/
	if(
			(Copy_u8PortNB >= DIO_MAX_PORT_NO) ||
			(Copy_u8Direction > DIO_MAX_VALUE_OF_U8)
	  )
	{
     		Local_u8OperationStatus = STD_u8_ERROR;

	}else
	{
		/*to set the direction of all pins of the port*/
		
    if(Copy_u8PortNB == DIO_PORT_A)
         {
           ASSI_PORT( DIO_DDR_0_REG,Copy_u8Direction);
         }
    else if(Copy_u8PortNB == DIO_PORT_B)
        {
          ASSI_PORT( DIO_DDR_1_REG,Copy_u8Direction);
        }
      else if(Copy_u8PortNB == DIO_PORT_C)
        {
           ASSI_PORT( DIO_DDR_2_REG,Copy_u8Direction);
        }
      else
        {
           ASSI_PORT( DIO_DDR_3_REG,Copy_u8Direction);
        }


	}


	/*Function Return*/
	return Local_u8OperationStatus;

}
/**********************************************************************************/




/******************************************SET_PORT_VALUE**********************************/

/*Description: set port VALUE
 * Inputs : u8 Copy_u8PortNB  : port Number
 * 		  : u8 Copy_u8Value : if it DIO_u8_PIN_HIGH mean that this port is HIGH ,
 * 		    if it DIO_u8_PIN_LOW mean that this port is LOW
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortValue(u8 Copy_u8PortNB,u8 Copy_u8Value)
{
	/*Local variables*/
    u8 Local_u8OperationStatus = STD_u8_OK;
	/*use this if condition to valid the input*/
	if(
			(Copy_u8PortNB >= DIO_MAX_PORT_NO) ||
			(Copy_u8Value >= DIO_MAX_VALUE_OF_U8)
	  )
	{
     		Local_u8OperationStatus = STD_u8_ERROR;

	}else
	{
		/*to set the direction of all pins of the port*/
		
    if(Copy_u8PortNB == DIO_PORT_A)
         {
           ASSI_PORT( DIO_PORT_0_REG,Copy_u8Value);
         }
    else if(Copy_u8PortNB == DIO_PORT_B)
        {
          ASSI_PORT( DIO_PORT_1_REG,Copy_u8Value);
        }
      else if(Copy_u8PortNB == DIO_PORT_C)
        {
           ASSI_PORT( DIO_PORT_2_REG,Copy_u8Value);
        }
      else
        {
           ASSI_PORT( DIO_PORT_3_REG,Copy_u8Value);
        }


	}


	/*Function Return*/
	return Local_u8OperationStatus;

}
/**********************************************************************************/




/*******************************************GET_PORT_VALUE****************************************/

/*Description: get port value
 * Inputs : u8 Copy_u8PortNB   : port Number
 * 		  : u8* pu8value         : pointer to value which it may be high (1) or low (0)
 *                               Outputs: Error state
 *
 * */

u8 DIO_u8GetPortValue(u8 Copy_u8PortNB,u8* Copy_pu8value)
{

			/*Local variables*/
		    u8 Local_PinNumber,Local_u8OperationStatus = STD_u8_OK;
			/*use this if condition to valid the input*/
	     	if(
	     			(Copy_pu8value == NULL) ||
	     			(Copy_u8PortNB >= DIO_MAX_PORT_NO)
				)
			{
     		Local_u8OperationStatus = STD_u8_ERROR;
			}else
			{


        if(Copy_u8PortNB == DIO_PORT_A)
         {
              /*to get the value of all the pins to the port*/
            for(Local_PinNumber=DIO_INITILIZATION_VALUE;Local_PinNumber<DIO_NUMBER_PINS_IN_PORT;Local_PinNumber++)
            {
            *(Copy_pu8value+Local_PinNumber) = GET_BIT(DIO_PIN_0_REG , Local_PinNumber);
    
            }
         }
    else if(Copy_u8PortNB == DIO_PORT_B)
        {
            /*to get the value of all the pins to the port*/
            for(Local_PinNumber=DIO_INITILIZATION_VALUE;Local_PinNumber<DIO_NUMBER_PINS_IN_PORT;Local_PinNumber++)
            {
            *(Copy_pu8value+Local_PinNumber) = GET_BIT(DIO_PIN_1_REG , Local_PinNumber);
    
            }
        }
      else if(Copy_u8PortNB == DIO_PORT_C)
        {
            /*to get the value of all the pins to the port*/
            for(Local_PinNumber=DIO_INITILIZATION_VALUE;Local_PinNumber<DIO_NUMBER_PINS_IN_PORT;Local_PinNumber++)
            {
            *(Copy_pu8value+Local_PinNumber) = GET_BIT(DIO_PIN_2_REG , Local_PinNumber);
    
            }
        }
      else
        {
            /*to get the value of all the pins to the port*/
            for(Local_PinNumber=DIO_INITILIZATION_VALUE;Local_PinNumber<DIO_NUMBER_PINS_IN_PORT;Local_PinNumber++)
            {
            *(Copy_pu8value+Local_PinNumber) = GET_BIT(DIO_PIN_3_REG , Local_PinNumber);
    
            }
        }

				
			}

				/*Function Return*/
				return Local_u8OperationStatus;

}

/***************************************************************************************/



