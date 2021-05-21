/**************************************************************************/
/* Author  : Ahmed Tarek                                                  */
/* Date    : 29 Jan 2019                                                  */
/* Version : v01                                                          */
/**************************************************************************/
/*Description															  */
/*******************************************************************************/
/*DIO_private.h is a file from DIO Deriver                                     */
/*******************************************************************************/





#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_


#define PIN0          (u8)0
#define PIN1          (u8)1
#define PIN2          (u8)2
#define PIN3          (u8)3
#define PIN4          (u8)4
#define PIN5          (u8)5
#define PIN6          (u8)6
#define PIN7          (u8)7
#define PIN8          (u8)8
#define PIN9          (u8)9
#define PIN10         (u8)10
#define PIN11         (u8)11
#define PIN12         (u8)12
#define PIN13         (u8)13
#define PIN14         (u8)14
#define PIN15         (u8)15
#define PIN16         (u8)16
#define PIN17         (u8)17
#define PIN18         (u8)18
#define PIN19         (u8)19
#define PIN20         (u8)20
#define PIN21         (u8)21
#define PIN22         (u8)22
#define PIN23         (u8)23
#define PIN24         (u8)24
#define PIN25         (u8)25
#define PIN26         (u8)26
#define PIN27         (u8)27
#define PIN28         (u8)28
#define PIN29         (u8)29
#define PIN30         (u8)30
#define PIN31         (u8)31



#define DIO_u8_PIN_INIT_INPUT      0
#define DIO_u8_PIN_INIT_OUTPUT     1

#define DIO_u8_PORT_INIT_INPUT      (u8)0x00
#define DIO_u8_PORT_INIT_OUTPUT     (u8)0xff


#define DIO_u8_PIN_INIT_LOW      0
#define DIO_u8_PIN_INIT_HIGH     1
#define DIO_u8_PIN_INIT_DEF      0


#define DIO_u8_PORT_INIT_LOW      (u8)0x00
#define DIO_u8_PORT_INIT_HIGH     (u8)0xff

/*for handling port A*/
#define DIO_PORT_0_ADD	((Register_8B*) 0x3B)
#define DIO_DDR_0_ADD   ((Register_8B*) 0x3A)
#define DIO_PIN_0_ADD   ((Register_8B*) 0x39)

/*for handling port B*/
#define DIO_PORT_1_ADD	((Register_8B*) 0x38)
#define DIO_DDR_1_ADD   ((Register_8B*) 0x37)
#define DIO_PIN_1_ADD   ((Register_8B*) 0x36)

/*for handling port C*/
#define DIO_PORT_2_ADD  ((Register_8B*) 0x35)
#define DIO_DDR_2_ADD   ((Register_8B*) 0x34)
#define DIO_PIN_2_ADD   ((Register_8B*) 0x33)

/*for handling port D*/
#define DIO_PORT_3_ADD  ((Register_8B*) 0x32)
#define DIO_DDR_3_ADD   ((Register_8B*) 0x31)
#define DIO_PIN_3_ADD   ((Register_8B*) 0x30)


/*for handling port 0*/
#define DIO_PORT_0_REG	 DIO_PORT_0_ADD -> ByteAccess
#define DIO_DDR_0_REG	   DIO_DDR_0_ADD -> ByteAccess
#define DIO_PIN_0_REG	   DIO_PIN_0_ADD -> ByteAccess

/*for handling port 1*/ 
#define DIO_PORT_1_REG	 DIO_PORT_1_ADD -> ByteAccess
#define DIO_DDR_1_REG	   DIO_DDR_1_ADD -> ByteAccess
#define DIO_PIN_1_REG	   DIO_PIN_1_ADD -> ByteAccess

/*for handling port 2*/ 
#define DIO_PORT_2_REG	 DIO_PORT_2_ADD -> ByteAccess
#define DIO_DDR_2_REG	   DIO_DDR_2_ADD -> ByteAccess
#define DIO_PIN_2_REG	   DIO_PIN_2_ADD -> ByteAccess

/*for handling port 3*/ 
#define DIO_PORT_3_REG	 DIO_PORT_3_ADD -> ByteAccess
#define DIO_DDR_3_REG	   DIO_DDR_3_ADD -> ByteAccess
#define DIO_PIN_3_REG	   DIO_PIN_3_ADD -> ByteAccess



#define DIO_u8_PIN_NO_8         (u8)8
#define DIO_u8_PIN_NO_16        (u8)16
#define DIO_u8_PIN_NO_24        (u8)24
#define DIO_u8_PIN_NO_32        (u8)32
#define DIO_MAX_PIN_NO          (u8)32    
#define DIO_MAX_PORT_NO         (u8)4
#define DIO_MAX_VALUE_OF_U8     (u8)255
#define DIO_INITILIZATION_VALUE (u8)0
#define DIO_NUMBER_PINS_IN_PORT (u8)8


#endif /* DIO_PRIVATE_H_ */
