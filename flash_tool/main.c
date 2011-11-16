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

    /* Display instructions onto the LCD */
    DisplayLCD(LCD_LINE1, "1.Clear MAC ");
    DisplayLCD(LCD_LINE2, "2.Set MAC   ");
    DisplayLCD(LCD_LINE3, "3.Clear Meta");
    DisplayLCD(LCD_LINE7, " SW1: Select");
    DisplayLCD(LCD_LINE8, " SW2: Go");
    /* Initialise the ADC unit */
    initFlashMenu();
    
    /*Should never return*/
    while (1) ;	
}


