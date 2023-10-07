/*
 * bitwise_operation.h

 *  Created on: Oct 7, 2023
 *      Author: khalid
 */
#ifndef BITWISE_OPERATION_H_
#define BITWISE_OPERATION_H_

// Macro to get the value of a specific bit (BIT) from a register (REG)
#define GET_BIT(REG, BIT)    ((REG >> BIT) & 1)

// Macro to set a specific bit (BIT) in a register (REG)
#define SET_BIT(REG, BIT)    (REG |= (1 << BIT))

// Macro to clear a specific bit (BIT) in a register (REG)
#define CLR_BIT(REG, BIT)    (REG &= ~(1 << BIT))

// Macro to toggle a specific bit (BIT) in a register (REG)
#define TGL_BIT(REG, BIT)    (REG ^= (1 << BIT))

// Set the entire port to a specific value
#define SET_PORT(PORT, VALUE)    (PORT = VALUE)

// Clear the entire port
#define CLR_PORT(PORT)           (PORT = 0)

// Toggle the entire port
#define TGL_PORT(PORT)           (PORT ^= 0xFF)

// Get the value of the entire port
#define GET_PORT(PORT)           (PORT)


#endif /* BITWISE_OPERATION_H_ */
