/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62Nxx
* File Name		: Interrupt_INTC.c
* Version		: 0.10
* Contents		: Interrupt handlers for the external interrupts
* Customer		: 
* Model			:
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
* History		: 2010.04.08
*				: Ver 0.10
*""FILE COMMENT END""**************************************************/

#include "r_pdl_intc.h"
#include "r_pdl_intc_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/* External functions */
extern void PowerON_Reset_PC(void);
extern void rpdl_ADC_10_Start(void);

/* CMT control register definition */
#define CMSTR_ADDRESS(a) ( (volatile uint16_t *)&CMT.CMSTR0 + ( (0x10u * (a >> 1)) / sizeof(uint16_t)) )

/*""FUNC COMMENT""***************************************************
* Module outline: External interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_XXXX(void)
*-------------------------------------------------------------------
* Function		: Interrupt processing function for External interrupts
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------
* Input			: 
* Output		: 
*-------------------------------------------------------------------
* Use function	: rpdl_INTC_callback_func[n]()
*-------------------------------------------------------------------
* Notes		 	:
*-------------------------------------------------------------------
* History		: 2010.04.23
*				: Ver 0.10
*				: First draft
*				: 2010.07.20
*				: Ver 0.11
*				: Added CMT start and stop control.
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_ICU_IRQ0
#pragma interrupt Interrupt_IRQ0(vect=VECT_ICU_IRQ0, fint)
#else
#pragma interrupt Interrupt_IRQ0(vect=VECT_ICU_IRQ0)
#endif
void Interrupt_IRQ0(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ0] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ0]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ1
#pragma interrupt Interrupt_IRQ1(vect=VECT_ICU_IRQ1, fint)
#else
#pragma interrupt Interrupt_IRQ1(vect=VECT_ICU_IRQ1)
#endif
void Interrupt_IRQ1(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ1] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ1]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ2
#pragma interrupt Interrupt_IRQ2(vect=VECT_ICU_IRQ2, fint)
#else
#pragma interrupt Interrupt_IRQ2(vect=VECT_ICU_IRQ2)
#endif
void Interrupt_IRQ2(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ2] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ2]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ3
#pragma interrupt Interrupt_IRQ3(vect=VECT_ICU_IRQ3, fint)
#else
#pragma interrupt Interrupt_IRQ3(vect=VECT_ICU_IRQ3)
#endif
void Interrupt_IRQ3(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ3] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ3]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ4
#pragma interrupt Interrupt_IRQ4(vect=VECT_ICU_IRQ4, fint)
#else
#pragma interrupt Interrupt_IRQ4(vect=VECT_ICU_IRQ4)
#endif
void Interrupt_IRQ4(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ4] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ4]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ5
#pragma interrupt Interrupt_IRQ5(vect=VECT_ICU_IRQ5, fint)
#else
#pragma interrupt Interrupt_IRQ5(vect=VECT_ICU_IRQ5)
#endif
void Interrupt_IRQ5(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ5] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ5]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ6
#pragma interrupt Interrupt_IRQ6(vect=VECT_ICU_IRQ6, fint)
#else
#pragma interrupt Interrupt_IRQ6(vect=VECT_ICU_IRQ6)
#endif
void Interrupt_IRQ6(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ6] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ6]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ7
#pragma interrupt Interrupt_IRQ7(vect=VECT_ICU_IRQ7, fint)
#else
#pragma interrupt Interrupt_IRQ7(vect=VECT_ICU_IRQ7)
#endif
void Interrupt_IRQ7(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ7] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ7]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ8
#pragma interrupt Interrupt_IRQ8(vect=VECT_ICU_IRQ8, fint)
#else
#pragma interrupt Interrupt_IRQ8(vect=VECT_ICU_IRQ8)
#endif
void Interrupt_IRQ8(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ8] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ8]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ9
#pragma interrupt Interrupt_IRQ9(vect=VECT_ICU_IRQ9, fint)
#else
#pragma interrupt Interrupt_IRQ9(vect=VECT_ICU_IRQ9)
#endif
void Interrupt_IRQ9(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ9] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ9]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ10
#pragma interrupt Interrupt_IRQ10(vect=VECT_ICU_IRQ10, fint)
#else
#pragma interrupt Interrupt_IRQ10(vect=VECT_ICU_IRQ10)
#endif
void Interrupt_IRQ10(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ10] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ10]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ11
#pragma interrupt Interrupt_IRQ11(vect=VECT_ICU_IRQ11, fint)
#else
#pragma interrupt Interrupt_IRQ11(vect=VECT_ICU_IRQ11)
#endif
void Interrupt_IRQ11(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ11] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ11]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ12
#pragma interrupt Interrupt_IRQ12(vect=VECT_ICU_IRQ12, fint)
#else
#pragma interrupt Interrupt_IRQ12(vect=VECT_ICU_IRQ12)
#endif
void Interrupt_IRQ12(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ12] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ12]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ13
#pragma interrupt Interrupt_IRQ13(vect=VECT_ICU_IRQ13, fint)
#else
#pragma interrupt Interrupt_IRQ13(vect=VECT_ICU_IRQ13)
#endif
void Interrupt_IRQ13(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ13] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ13]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ14
#pragma interrupt Interrupt_IRQ14(vect=VECT_ICU_IRQ14, fint)
#else
#pragma interrupt Interrupt_IRQ14(vect=VECT_ICU_IRQ14)
#endif
void Interrupt_IRQ14(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ14] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ14]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_IRQ15
#pragma interrupt Interrupt_IRQ15(vect=VECT_ICU_IRQ15, fint)
#else
#pragma interrupt Interrupt_IRQ15(vect=VECT_ICU_IRQ15)
#endif
void Interrupt_IRQ15(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_IRQ15] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_IRQ15]();
	}
}

#if FAST_INTC_VECTOR == VECT_ICU_SWINT
#pragma interrupt Interrupt_SWINT(vect=VECT_ICU_SWINT, fint)
#else
#pragma interrupt Interrupt_SWINT(vect=VECT_ICU_SWINT)
#endif
void Interrupt_SWINT(void)
{
	/* Call the user function */
	if (rpdl_INTC_callback_func[PDL_INTC_SWINT] != PDL_NO_FUNC)
	{
		rpdl_INTC_callback_func[PDL_INTC_SWINT]();
	}
}

#pragma interrupt Interrupt_BRK(vect=0)
void Interrupt_BRK(void)
{
	uint32_t * vector_location;
	uint8_t * saved_ipl_location;
	uint8_t temp;
	switch (rpdl_INTC_brk_command)
	{
		case BRK_START_ADC_10:
			rpdl_ADC_10_Start();
			break;
		case BRK_START_ADC_10_AND_SLEEP:
			rpdl_ADC_10_Start();
			/* Prevent all-module clock stop */
			SYSTEM.MSTPCRA.BIT.ACSE = 0;
			/* Select sleep or all-module clock stop */
			SYSTEM.SBYCR.BIT.SSBY = 0;
			/* Prevent out-of-order execution */
			while (SYSTEM.SBYCR.BIT.SSBY != 0);
			wait();
			break;
		case BRK_SLEEP:
			/* Prevent all-module clock stop */
			SYSTEM.MSTPCRA.BIT.ACSE = 0;
			/* Select sleep or all-module clock stop */
			SYSTEM.SBYCR.BIT.SSBY = 0;
			/* Prevent out-of-order execution */
			while (SYSTEM.SBYCR.BIT.SSBY != 0);
			wait();
			break;
		case BRK_ALL_MODULE_CLOCK_STOP:
			/* Select sleep or all-module clock stop */
			SYSTEM.SBYCR.BIT.SSBY = 0;
			/* Prevent out-of-order execution */
			while (SYSTEM.SBYCR.BIT.SSBY != 0);
			wait();
			break;
		case BRK_STANDBY:
			/* Prevent deep standby mode */
			SYSTEM.DPSBYCR.BIT.DPSBY = 0;
			/* Select standby mode */
			SYSTEM.SBYCR.BIT.SSBY = 1;
			/* Prevent out-of-order execution */
			while (SYSTEM.SBYCR.BIT.SSBY != 1);
			wait();
			break;
		case BRK_DEEP_STANDBY:
			/* Select deep standby mode */
			SYSTEM.DPSBYCR.BIT.DPSBY = 1;
			/* Select standby mode */
			SYSTEM.SBYCR.BIT.SSBY = 1;
			/* Prevent out-of-order execution */
			while (SYSTEM.SBYCR.BIT.SSBY != 1);
			wait();
			break;
		case BRK_LOAD_FINTV_REGISTER:
			/* Find the start of the maskable interrupt vector table */
			vector_location = (uint32_t *)get_intb();
			/* Move to the location of the address of the selected interrupt */
			vector_location += ICU.FIR.BIT.FVCT;
			/* Store the address of this vector in the FINTV register */
			set_fintv(*vector_location);
			break;
		case BRK_WRITE_IPL:
			/* Where was the PSW put? */
			saved_ipl_location = (uint8_t *)rpdl_INTC_saved_isp;
			/* Move to the IPL byte location */
			saved_ipl_location -= 1;
			/* Read the saved IPL */
			temp = *saved_ipl_location;
			/* Clear the IPL bits */
			temp &= (uint8_t)(INV_BIT_2 & INV_BIT_1 & INV_BIT_0);
			/* Modify the IPL bits */
			temp |= rpdl_INTC_brk_data8;
			/* Modify the saved IPL */
			*saved_ipl_location = temp;
			break;
		case BRK_CMT_START:
			/* Set STRn to 1 */
			*(CMSTR_ADDRESS(rpdl_INTC_brk_data8)) |= (uint16_t)((rpdl_INTC_brk_data8 & 0x01u) + 1);
			break;
		case BRK_CMT_STOP:
			/* Set STRn to 0 */
			*(CMSTR_ADDRESS(rpdl_INTC_brk_data8)) &= (uint16_t)(0x2u >> (rpdl_INTC_brk_data8 & 0x01u));
			break;
		default:
			/* This must never occur */
			break;
	}
	rpdl_INTC_brk_command = BRK_NO_COMMAND;
}

/* Exception (Privileged Instruction) */
#pragma interrupt Excep_PrivilegedInst
void Excep_PrivilegedInst(void)
{
	if (rpdl_INTC_callback_func[PDL_INTC_PRIVILEGED] != PDL_NO_FUNC)
	{
		/* Call the user function */
		rpdl_INTC_callback_func[PDL_INTC_PRIVILEGED]();
	}
}

/* Exception (Undefined Instruction) */
#pragma interrupt Excep_UndefinedInst
void Excep_UndefinedInst(void)
{
	if (rpdl_INTC_callback_func[PDL_INTC_UNDEFINED] != PDL_NO_FUNC)
	{
		/* Call the user function */
		rpdl_INTC_callback_func[PDL_INTC_UNDEFINED]();
	}
}

/* Exception(Floating Point) */
#pragma interrupt Excep_FloatingPoint
void Excep_FloatingPoint(void)
{
	if (rpdl_INTC_callback_func[PDL_INTC_FLOATING_POINT] != PDL_NO_FUNC)
	{
		/* Call the user function */
		rpdl_INTC_callback_func[PDL_INTC_FLOATING_POINT]();
	}
}

#pragma interrupt Interrupt_NMI
void Interrupt_NMI(void)
{
	if (rpdl_INTC_callback_func[PDL_INTC_NMI] != PDL_NO_FUNC)
	{
		/* Call the user function */
		rpdl_INTC_callback_func[PDL_INTC_NMI]();
	}
}

/* Padding function for the fixed-vector table */
void Dummy(void){}

#pragma section C FIXEDVECT

const void * const Fixed_Vectors[12] = {
/* 0xFFFFFFD0	Privileged Instruction */
	(void *) Excep_PrivilegedInst,
/* 0xFFFFFFD4	Reserved */
	Dummy,
/* 0xFFFFFFD8	Reserved */
	Dummy,
/* 0xFFFFFFDC	Undefined Instruction */
	(void *) Excep_UndefinedInst,
/* 0xFFFFFFE0	Reserved */
	Dummy,
/* 0xFFFFFFE4	Floating Point */
	(void *) Excep_FloatingPoint,
/* 0xFFFFFFE8	Reserved */
	Dummy,
/* 0xFFFFFFEC	Reserved */
	Dummy,
/* 0xFFFFFFF0	Reserved */
	Dummy,
/* 0xFFFFFFF4	Reserved */
	Dummy,
/* 0xFFFFFFF8	NMI */
	(void *) Interrupt_NMI,
/* 0xFFFFFFFC	RESET */
	(void *) PowerON_Reset_PC
};
/* End of file */
