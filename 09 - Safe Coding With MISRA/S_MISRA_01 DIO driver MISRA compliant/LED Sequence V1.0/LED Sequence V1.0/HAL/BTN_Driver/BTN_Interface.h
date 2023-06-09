/*
 * BTN_Interface.h
 *
 *   Created on: Nov 20, 2022
 *       Author: Abdelrhman Walaa - https://github.com/AbdelrhmanWalaa
 *  Description: This file contains all Button (BTN) functions' prototypes and definitions (Macros) to avoid magic numbers.
 */

#ifndef BTN_INTERFACE_H_
#define BTN_INTERFACE_H_

/*******************************************************************************************************************************************************************/
/* BTN Includes */

/* LIB */
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/* MCAL */
#include "../../MCAL/DIO_Driver/DIO_Interface.h"

/*******************************************************************************************************************************************************************/
/* BTN Macros */

/* The 8 BTNs counted from 1 to 8 */
#define BTN_U8_1	1
#define BTN_U8_2	2
#define BTN_U8_3	3
#define BTN_U8_4	4
#define BTN_U8_5	5
#define BTN_U8_6	6
#define BTN_U8_7	7
#define BTN_U8_8	8

/*******************************************************************************************************************************************************************/
/* BTN Functions' Prototypes */

u8 BTN_u8GetBTNState( u8 Cpy_u8BTNId, u8 *Cpy_pu8ReturnedBTNState );

/*******************************************************************************************************************************************************************/

#endif /* BTN_INTERFACE_H_ */