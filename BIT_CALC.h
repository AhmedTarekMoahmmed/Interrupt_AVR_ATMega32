/**************************************************************/
/*Author   : Ahmed Tarek                                      */
/*Date     : 15 dec 2018                                      */
/*Version  : V01                                              */
/**************************************************************/

/********************************************************************/
/*Description:                                                      */
/*------------                                                      */
/*this file include all basics macros                               */
/********************************************************************/


/*this macro is used to guard the file */
#ifndef BIT_CALC_H_
#define BIT_CALC_H_



/*this macro is used to define hiegh nibble */
#define HIEGH_NIBBLE (u8)0b11110000
/*this macro is used to define low nibble */
#define LOW_NIBBLE   (u8)0b00001111
/*this macro is used to set all pins of the port */
#define HIEGH_PORT   (u8)0b11111111
/*this macro is used to clear all pins of the port */
#define LOW_PORT     (u8)0b00000000
/*this macro is used to define one value */
#define SET_VALUE    1
/*this macro is used to define zero value*/
#define CLR_VALUE    0

#define NIB_SIZE     (u8)4
#define HIGH         (u8)0xf


/*concatinate bits to form value in form obxxxxxxx                               */
#define CONC_8bit(b0,b1,b2,b3,b4,b5,b6,b7)    CONC_HELPER(b0,b1,b2,b3,b4,b5,b6,b7)
#define CONC_HELPER(b0,b1,b2,b3,b4,b5,b6,b7)  0b##b7##b6##b5##b4##b3##b2##b1##b0


/*this macro is used to assign the value to zero if it > one
input: value : value will be used in AASI_BIT macro to assigned to it
*/

  #if VALUE == SET_VALUE
    VALUE=SET_VALUE
  # elif VALUE> SET_VALUE
    VALUE=CLR_VALUE
  
  #endif

/*****************************************/
/*this macro is used to set bit to one
INPUT : VAR :variable to be changed
        BIT :Number of the bit to be set
*/
/****************************************/
#define SET_BIT(VAR,BIT) (VAR)|=(SET_VALUE<<(BIT))
/*****************************************/


/*this macro is used to clear bit to zero
INPUT : VAR :variable to be changed
        BIT :Number of the bit to be clear
*/
/****************************************/
#define CLR_BIT(VAR,BIT) (VAR)&=~(SET_VALUE<<(BIT))
/*****************************************/


/*this macro is used to toggle bit
INPUT : VAR :variable to be changed
        BIT :Number of the bit to be toggle
*/
/****************************************/
#define TOG_BIT(VAR,BIT) (VAR)^=(SET_VALUE<<(BIT))
/*****************************************/


/*this macro is used to assign bit to value (0) or (1)
INPUT : VAR :variable to be changed
        BIT :Number of the bit to be assigned to the value
*/
/****************************************/
#define ASSI_BIT(VAR,BIT,VALUE) VAR=(VAR&(~(SET_VALUE<<BIT)))|(VALUE<<BIT)

/*do{ if(VALUE==CLR_VALUE)      VAR& = ~(SET_VALUE<<BIT);\
									else(VALUE==SET_VALUE)    VAR| =  (SET_VALUE<<BIT);\
									}while(0)*/


/*****************************************/


/*this macro is used to get the value of bit number BIT_NUM
INPUT : VAR     :variable to be changed
        BIT_NUM :Number of the bit to be assigned to the value
*/
/****************************************/
#define GET_BIT(VAR,BIT_NUM) 	(((VAR) >> (BIT_NUM)) & 0x01)

/***********************************************************/
/*this macro is used to set high nibble in the variable
INPUT : VAR          :variable to be changed
	  : HIEGH_NIBBLE :11110000
*/
#define SET_HIEGH_NIBBLE(VAR) (VAR) |= HIEGH_NIBBLE

/*this macro is used to Assign nibble in the variable
INPUT : REG          :variable to be changed
	  : NIB_VAL :the which the nibble will change to 
    :NIB_IND  : unmber of nibble which will change
*/
#define ASSIGN_NIBBLE(NIB_IND,NIB_VAL,REG) REG=(NIB_VAL<<NIB_IND*NIB_SIZE)\
                                                |(REG&(~(HIGH<<NIB_IND*NIB_SIZE)))


/*this macro is used to set all bits in var to 1
INPUT : VAR          :variable to be changed
	  : HIEGH_PORT :11111111
*/
#define SET_PORT(VAR) (VAR) |= HIEGH_PORT




/*********************************************************/
/*this macro is used to assign bits in var by value
	INPUT 	   : VAR          :variable to be changed
	PORT_VALUE : 0x########
*/
#define ASSI_PORT(VAR,PORT_VALUE)  VAR = PORT_VALUE


/*this macro is used to set low nibble in the variable
INPUT : VAR        :variable to be changed
	  : LOW_NIBBLE :00001111
*/
#define SET_LOW_NIBBLE(VAR)   (VAR) |= LOW_NIBBLE


/*this macro is used to clear high nibble in the variable
INPUT : VAR          :variable to be changed
	  : HIEGH_NIBBLE :11110000
*/
#define CLR_HIEGH_NIBBLE(VAR) (VAR) &= LOW_NIBBLE

/*this macro is used to clear high nibble in the variable
INPUT : VAR          :variable to be changed
	  : LOW_PORT :00000000
*/
#define CLR_PORT(VAR) (VAR) &= LOW_PORT


/*this macro is used to clear low nibble in the variable
INPUT : VAR        :variable to be changed
	  : LOW_NIBBLE :00001111
*/
#define CLR_LOW_NIBBLE(VAR)   (VAR) &= HIEGH_NIBBLE


/*this macro is used to toggle high nibble in the variable
INPUT : VAR          :variable to be changed
	  : HIEGH_NIBBLE :11110000
*/
#define TOG_HIEGH_NIBBLE(VAR) (VAR) ^= HIEGH_NIBBLE


/*this macro is used to toggle low nibble in the variable
INPUT : VAR        :variable to be changed
	  : LOW_NIBBLE :00001111
*/
#define TOG_LOW_NIBBLE(VAR)   (VAR) ^= LOW_NIBBLE



#endif



