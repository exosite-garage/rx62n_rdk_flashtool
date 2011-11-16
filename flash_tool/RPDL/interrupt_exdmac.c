/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62N
* File Name		: Interrupt_EXDMAC.c
* Version		: 0.10
* Contents		: Interrupt handlers for the EXDMAC channels
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
* History		: 2010.09.09
*				: Ver 0.10
*""FILE COMMENT END""**************************************************/

#include "r_pdl_exdmac.h"
#include "r_pdl_exdmac_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline : EXDMAC interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_EXDMACn(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for EXDMAC channel n
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			: 
* Output		: 
*-------------------------------------------------------------------
* Use function	: EXDMAC_callback_func[n]
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.09.09
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_EXDMAC_EXDMAC0I
#pragma interrupt Interrupt_EXDMAC0(vect=VECT_EXDMAC_EXDMAC0I, fint)
#else
#pragma interrupt Interrupt_EXDMAC0(vect=VECT_EXDMAC_EXDMAC0I)
#endif
void Interrupt_EXDMAC0(void)
{
	/* Call the user function */
	if (rpdl_EXDMAC_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_EXDMAC_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_EXDMAC_EXDMAC1I
#pragma interrupt Interrupt_EXDMAC1(vect=VECT_EXDMAC_EXDMAC1I, fint)
#else
#pragma interrupt Interrupt_EXDMAC1(vect=VECT_EXDMAC_EXDMAC1I)
#endif
void Interrupt_EXDMAC1(void)
{
	/* Call the user function */
	if (rpdl_EXDMAC_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_EXDMAC_callback_func[1]();
	}
}

/* End of file */
