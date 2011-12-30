/*=============================================================================
* main.c
* C entry point for the app 
*============================================================================== 
*
* Copyright (c) 2011, Exosite LLC
* All rights reserved.
*/

#include <stdbool.h>
#include "lcd.h"
#include "YRDKRX62N.h"
#include "flash_tool.h"

/*=============================================================================
* main
*
* C entry for the app
*============================================================================*/
void main(void)
{
    YRDKRX62N_RSPI_Init(RSPI_CHANNEL_0);
    InitialiseLCD();

    /* Initialise the ADC unit */
    initFlashMenu();
    
    /*Should never return*/
    while (1) ;	
}
