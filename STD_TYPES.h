/**************************************************************/
/*Author   : Ahmed Tarek                                      */
/*Date     : 15 dec 2018                                      */
/*Version  : V01                                              */
/**************************************************************/

/********************************************************************/
/*Description:                                                      */
/*------------                                                      */
/*this file use to define new datatype with fixed size              */
/********************************************************************/

#ifndef STD_TYPES_H_
#define STD_TYPES_H_




#define STD_u8_ERROR                (u8)1
#define STD_u8_OK                   (u8)0
#define NULL                        ((void*)0)
typedef unsigned char               u8          ;
typedef unsigned short int          u16         ;
typedef unsigned long int           u32         ;
typedef signed char                 s8          ;
typedef signed short int            s16         ;
typedef signed long int             s32         ;
typedef float                       f32         ;
typedef double                      f64         ;


typedef union {

	struct {
		u32 Bit0 : 1;
		u32 Bit1 : 1;
		u32 Bit2 : 1;
		u32 Bit3 : 1;
		u32 Bit4 : 1;
		u32 Bit5 : 1;
		u32 Bit6 : 1;
		u32 Bit7 : 1;
		u32 Bit8 : 1;
		u32 Bit9 : 1;
		u32 Bit10: 1;
		u32 Bit11: 1;
		u32 Bit12: 1;
		u32 Bit13: 1;
		u32 Bit14: 1;
		u32 Bit15: 1;
		u32 Bit16: 1;
		u32 Bit17: 1;
		u32 Bit18: 1;
		u32 Bit19: 1;
		u32 Bit20: 1;
		u32 Bit21: 1;
		u32 Bit22: 1;
		u32 Bit23: 1;
		u32 Bit24: 1;
		u32 Bit25: 1;
		u32 Bit26: 1;
		u32 Bit27: 1;
		u32 Bit28: 1;
		u32 Bit29: 1;
		u32 Bit30: 1;
		u32 Bit31: 1;

	}BitAccess;

	u32 WordAccess;

}Register_32B;

/***************************************************/
/**/

typedef union {

	struct {
		u32 Bit0 : 1;
		u32 Bit1 : 1;
		u32 Bit2 : 1;
		u32 Bit3 : 1;
		u32 Bit4 : 1;
		u32 Bit5 : 1;
		u32 Bit6 : 1;
		u32 Bit7 : 1;
		u32 Bit8 : 1;
		u32 Bit9 : 1;
		u32 Bit10: 1;
		u32 Bit11: 1;
		u32 Bit12: 1;
		u32 Bit13: 1;
		u32 Bit14: 1;
		u32 Bit15: 1;
	}BitAccess;

	u32 HalfWordAccess;

}Register_16B;

/*****************************************************/
/**/

typedef union {

	struct {
		u8 Bit0 : 1;
		u8 Bit1 : 1;
		u8 Bit2 : 1;
		u8 Bit3 : 1;
		u8 Bit4 : 1;
		u8 Bit5 : 1;
		u8 Bit6 : 1;
		u8 Bit7 : 1;

	}BitAccess;

	u8 ByteAccess;

}Register_8B;

#endif


