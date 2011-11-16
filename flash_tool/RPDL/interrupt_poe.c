/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62N
* File Name		: Interrupt_POE.c
* Version		: 0.10
* Contents		: Interrupt handlers for the Port Output Enable module
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
* History		: 2010.09.13
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#include "r_pdl_poe.h"
#include "r_pdl_poe_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline : POE interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_EXDMACn(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for POE interrupt n
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			: 
* Output		: 
*-------------------------------------------------------------------
* Use function	: POE_callback_func[n]
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.09.13
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_POE_OEI1
#pragma interrupt Interrupt_POE1(vect=VECT_POE_OEI1, fint)
#else
#pragma interrupt Interrupt_POE1(vect=VECT_POE_OEI1)
#endif
void Interrupt_POE1(void)
{
	/* Call the user function */
	if (rpdl_POE_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_POE_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_POE_OEI2
#pragma interrupt Interrupt_POE2(vect=VECT_POE_OEI2, fint)
#else
#pragma interrupt Interrupt_POE2(vect=VECT_POE_OEI2)
#endif
void Interrupt_POE2(void)
{
	/* Call the user function */
	if (rpdl_POE_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_POE_callback_func[1]();
	}
}

#if FAST_INTC_VECTOR == VECT_POE_OEI3
#pragma interrupt Interrupt_POE3(vect=VECT_POE_OEI3, fint)
#else
#pragma interrupt Interrupt_POE3(vect=VECT_POE_OEI3)
#endif
void Interrupt_POE3(void)
{
	/* Call the user function */
	if (rpdl_POE_callback_func[2] != PDL_NO_FUNC)
	{
		rpdl_POE_callback_func[2]();
	}
}

#if FAST_INTC_VECTOR == VECT_POE_OEI4
#pragma interrupt Interrupt_POE4(vect=VECT_POE_OEI4, fint)
#else
#pragma interrupt Interrupt_POE4(vect=VECT_POE_OEI4)
#endif
void Interrupt_POE4(void)
{
	/* Call the user function */
	if (rpdl_POE_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_POE_callback_func[3]();
	}
}

/* End of file */
