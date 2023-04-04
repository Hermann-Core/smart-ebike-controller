/************************************************************************************* 
 * @file 	 boot_jump.hpp
 * @date     April, 02 2023
 * @author   AWATSA HERMANN
 * @brief	 bootloader jump header file
 * 
 *           Contains the functions used to jump to the main application
 * ***********************************************************************************
 * @attention
 * 
 * The functions used in this file have been written mainly for the STM32F303
 * and STM32G473 MCUs. There is no guarantee of operation for other microcontrollers.
 * 
 #   DATE       |  Version  | revision   |
 -----------------------------------------
 # 2023.04.02   |    1      |  0         |

*************************************************************************************/


/************************************************************************************#
|                                      INCLUDES                                      |
#************************************************************************************/
#include "peripherals_defs.h"



/************************************************************************************#
|                              FUNCTIONS DECLARATIONS                                |
#************************************************************************************/

void JumpToApp(const u32 *appAddress);


/************************************************************************************#
|                                    END OF FILE                                     |
#************************************************************************************/