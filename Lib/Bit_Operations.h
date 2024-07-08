/**
 * Bit_Operations.h
 *
 *  Created on: Sat Apr 19 2024
 *  Author    : Mahmoud Mohamed Ali
 */


#ifndef BIT_OPERATIONS_H
#define BIT_OPERATIONS_H


// Bit_masking operations
#define SET_BIT_REG(REGISTER, MASK, BIT_POS, CONTROL_BIT)    	(REGISTER |= (MASK<<(BIT_POS * CONTROL_BIT)))
#define CLEAR_BIT_REG(REGISTER, MASK, BIT_POS, CONTROL_BIT)  	(REGISTER &= ~(MASK<<(BIT_POS * CONTROL_BIT)))
#define TOGGLE_BIT_REG(REGISTER, MASK, BIT_POS, CONTROL_BIT) 	(REGISTER ^= ( MASK<<(BIT_POS * CONTROL_BIT)))
#define READ_BIT_REG(REGISTER, MASK, BIT_POS, CONTROL_BIT)   	((REGISTER & (MASK << (BIT_POS * CONTROL_BIT))) >> (BIT_POS * CONTROL_BIT))


#endif /* BIT_OPERATIONS_H */