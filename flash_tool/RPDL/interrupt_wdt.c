/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62Nxx
* File Name		: Interrupt_WDT.c
* Version		: 0.10
* Contents		: Interrupt handler for the Watchdog timer
* Customer		: 
* Model		 	:
* Order		 	:
* CPU			: RX600
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
************************************************************************
* Copyright,2010 RENESAS ELECTRONICS CORPORATION
* AND RENESAS SOLUTIONS CORPORATION
************************************************************************
* History		: 2010.05.10
*				: Ver 0.10
*				: initial creation
*""FILE COMMENT END""**************************************************/

#include "r_pdl_wdt.h"
#include "r_pdl_wdt_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline : Timer interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_WDT(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for the WDT
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			:
* Output		: 
*-------------------------------------------------------------------
* Use function	: WDT_callback_func
*-------------------------------------------------------------------
* Notes			:
*-------------------------------------------------------------------
* History		: 2010.05.10
*				: Ver 0.10
*				: initial creation
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_WDT_WOVI
#pragma interrupt Interrupt_WDT(vect=VECT_WDT_WOVI, fint)
#else
#pragma interrupt Interrupt_WDT(vect=VECT_WDT_WOVI)
#endif
void Interrupt_WDT(void)
{
	/* Call the user function */
	if (rpdl_WDT_callback_func != PDL_NO_FUNC)
	{
		rpdl_WDT_callback_func();
	}
}
/* End of file */
