/*=============================================================================
* flash_tool.c
* Menu function that calls flash operations 
*============================================================================== 
*
* Copyright (c) 2011, Exosite LLC
* All rights reserved.
*/

#include "switch.h"
#include "lcd.h"
#include <string.h>
#include <stdio.h>
#include "YRDKRX62N.h"
#include "rdk_meta.h"
#include "flash_tool.h"

//Defines
#define MAC_LOCATION  0x00107FF0  // mac address should be stored in flash at this position

//Constants
/*=============================================================================
*=============   UPDATE NEW_MAC WITH YOUR MAC ADDRESS !!! ===================*/
const unsigned char NEW_MAC[6] = {0x00,0x30,0x55,0x08,0x00,0x00};
/*===========================================================================*/
const unsigned char blank[6] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

//Globals
static bool menu_selected = false; 
static uint8_t menu_index = 0;
extern volatile uint8_t gSwitchFlag;

//Local Function Prototypes
void menuCallBack(void);
void updateFlash(uint8_t cmd);
void binToLCD(unsigned char * ptrFlash, uint8_t lcdLine);

/*=============================================================================
* initFlashMenu
*
* Initializes the menu system
*============================================================================*/
void initFlashMenu(void)
{
  menu_selected = false;
  menu_index = 0;

  /* Configure switch callback function */
  SetSwitchReleaseCallback(menuCallBack);
}

/*=============================================================================
* menuCallback
*
* Main menu worker function responding to switch presses
*============================================================================*/
void menuCallBack(void)
{
  /* Declare temporary character string */
  uint8_t lcd_buffer[] = "__ __";
  
  DisplayLCD(LCD_LINE5, "           ");
  DisplayLCD(LCD_LINE6, "           ");
  DisplayLCD(LCD_LINE7, " SW1: Select");
  DisplayLCD(LCD_LINE8, " SW2: Go");
  /* Check if switch pressed was SW3 */
  if (gSwitchFlag & SWITCHPRESS_1)
  {
    if (++menu_index > 3)
      menu_index=1;
    lcd_buffer[2] = 0x30 + menu_index;
    DisplayLCD(LCD_LINE4,lcd_buffer);
  }

  if (gSwitchFlag & SWITCHPRESS_2)
  {
    if (menu_selected)
    {
      updateFlash(menu_index);
    }
    else
    {
      menu_selected = true;
    }
  }
  
  if (gSwitchFlag & SWITCHPRESS_3)
  {
    if (menu_selected)
    {
      menu_selected = false;
    }
  }

  /* Clear switch press flags */
  gSwitchFlag &= 0x0F;
}

/*=============================================================================
* updateFlash
*
* Menu item routines
*============================================================================*/
void updateFlash(uint8_t cmd)
{
  rdk_meta_init();
  switch(cmd)
  {
    case 1:
      rdk_mac_write(&blank[0]);
      DisplayLCD(LCD_LINE5,"MAC Cleared");
      binToLCD((unsigned char *)(MAC_LOCATION + 2), LCD_LINE6);   
      break;
    case 2:
      rdk_mac_write(&NEW_MAC[0]);
      DisplayLCD(LCD_LINE5, "MAC Set:");
      binToLCD((unsigned char *)(MAC_LOCATION + 2), LCD_LINE6);
      break;
    case 3:
      rdk_meta_defaults();
      DisplayLCD(LCD_LINE5, "Meta Cleared");
      binToLCD((unsigned char *)(RDK_META_LOCATION), LCD_LINE6);
      break;
  }
}

/*=============================================================================
* binToLCD
*
* Stuffs a 6 byte binary buffer in the LCD (converts to ASCII)
*============================================================================*/
void binToLCD(unsigned char * pFl, uint8_t lcdLine) {
  uint8_t lcd_buff[13];
  uint8_t i = 0;
  uint8_t adder = 0;
  while (i < 11) 
  {
    if (((*pFl & 0xf0) >> 4) < 10) adder = 48;
      else adder = 55;
    lcd_buff[i++] = adder + ((*pFl & 0xf0) >> 4);

    if ((*pFl & 0x0f) < 10) adder = 48;
      else adder = 55;
    lcd_buff[i++] = adder + (*pFl++ & 0x0f);
  }
  lcd_buff[12] = 0; //null terminate
  DisplayLCD(lcdLine, lcd_buff);
}
