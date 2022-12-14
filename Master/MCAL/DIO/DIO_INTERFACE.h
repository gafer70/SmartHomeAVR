#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

enum PORT
{
	DIO_PORTA = 0 ,
	DIO_PORTB = 1 ,
	DIO_PORTC = 2 ,
	DIO_PORTD = 3
};

enum DIRECTION
{
	DIO_INPUT = 0 ,
	DIO_OUTPUT = 1
};

enum PIN
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7	
};

enum PIN_VALUE
{
	DIO_HIGH = 1,
	DIO_LOW = 0
};

enum PORT_VALUE
{
	DIO_PORT_HIGH = 0xff,
	DIO_PORT_LOW = 0x00
};
void DIO_SetPinDirection(u8 Port , u8 Pin , u8 Direction);
void DIO_SetPinValue    (u8 Port , u8 Pin , u8 Value    );
u8   DIO_GetPinValue    (u8 Port , u8 Pin );

void DIO_SetPortDirection(u8 Port, u8 Direction);
void DIO_SetPortValue    (u8 Port, u8 PORT_Value);


#endif
