/************************************************************************************* 
 * @file 	 bootloader_main.cpp
 * @date     April, 02 2023
 * @author   AWATSA HERMANN
 * @brief	 main bootloader source file
 * 
 *           All the main bootloader related calls will be done here
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
#include "features.h"
#include "boot_jump.hpp"

// Todo! Set bootloader version (major, minor, patch)

/************************************************************************************#
|                                       DEFINES                                      |
#************************************************************************************/ 


/************************************************************************************#
|                              VARIABLES DECLARATIONS                                |
#************************************************************************************/
extern const u32 APP_ADDRESS;



/************************************************************************************#
|                              FUNCTIONS DECLARATIONS                                |
#************************************************************************************/



/************************************************************************************#
|                              FUNCTIONS DEFINITIONS                                 |
#************************************************************************************/

int main (void)
{
    RTT_WriteString(0, "\n\nIci c'est le bootloader\n");

    JumpToApp(&APP_ADDRESS);

    while (true)
    {
        RTT_WriteString(0, "\n\nOn est entré dans la boucle\n");
    }
}


/************************************************************************************#
|                                    END OF FILE                                     |
#************************************************************************************/
