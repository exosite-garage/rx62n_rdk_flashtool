/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62Nxx
* File Name		: Interrupt_BSC.c
* Version		: 0.10
* Contents		: Interrupt handler for the BSC
* Customer		: 
* Model			:
* Order			:
* CPU			: RX600
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
************************************************************************
* Copyright,2010 RENESAS ELECTRONICS CORPORATION
* AND RENESAS SOLUTIONS CORPORATION
************************************************************************
* History		: 2010.07.28
*				: Ver 0.10
*""FILE COMMENT END""**************************************************/

#include "r_pdl_bsc.h"
#include "r_pdl_bsc_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline : BSC interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_BSC(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for the BSC
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			:
* Output		: 
*-------------------------------------------------------------------
* Use function	: rpdl_BSC_callback_func
*-------------------------------------------------------------------
* Notes		 	:
*-------------------------------------------------------------------
* History		: 2010.07.28
*				: Ver 0.10
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_BSC_BUSERR
#pragma interrupt Interrupt_BSC(vect=VECT_BSC_BUSERR, fint)
#else
#pragma interrupt Interrupt_BSC(vect=VECT_BSC_BUSERR)
#endif
void Interrupt_BSC(void)
{
	/* Call the user function */
	if (rpdl_BSC_callback_func != PDL_NO_FUNC)
	{
		rpdl_BSC_callback_func();
	}
}
/* End of file */
