/*
 * DIO.h
 *
 *  Created on: Oct 7, 2023
 *      Author: khalid
 */

#ifndef DIO_H_
#define DIO_H_
#endif /* DIO_H_ */
/***************************************************************************Includes******************************************************************/
#include "tm4c123gh6pm.h"
#include "bitwise_operation.h"
#include "Std_Types.h"
/****************************************************************************Macros********************************************************************/
#define Dio_LevelType uint8
#define Dio_ChannelType uint8
#define Dio_PortLevelType uint8
#define Dio_PortType uint8
#define PORTA      0
#define PORTB      1
#define PORTC      2
#define PORTD      3
#define PORTE      4
#define PORTF      5
#define SW_2       0
#define RED_LED    1
#define BLUE_LED   2
#define GREEN_LED  3
#define SW_1       4
/***************************************************************************Prototypes**************************************************************************/
Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level);
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);
void Dio_WritePort (Dio_PortType PortId,Dio_PortLevelType Level);


