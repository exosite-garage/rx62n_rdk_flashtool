/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62Nxx
* File Name		: Interrupt_not_RPDL.c
* Version		: 0.10
* Contents		: Interrupt handlers for peripherals outside the scope
*				: of RPDL
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
* History		: 2010.06.17
*				: Ver 0.10
*				: First release
*""FILE COMMENT END""**************************************************/

#include "r_pdl_common_defs_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

#if FAST_INTC_VECTOR == VECT_FCU_FIFERR
#pragma interrupt Interrupt_FIFERR(vect=VECT_FCU_FIFERR, fint)
#else
#pragma interrupt Interrupt_FIFERR(vect=VECT_FCU_FIFERR)
#endif
void Interrupt_FIFERR(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_FCU_FRDYI
#pragma interrupt Interrupt_FRDYI(vect=VECT_FCU_FRDYI, fint)
#else
#pragma interrupt Interrupt_FRDYI(vect=VECT_FCU_FRDYI)
#endif
void Interrupt_FRDYI(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_ETHER_EINT
#pragma interrupt Interrupt_EINT(vect=VECT_ETHER_EINT, fint)
#else
#pragma interrupt Interrupt_EINT(vect=VECT_ETHER_EINT)
#endif
void Interrupt_EINT(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB0_D0FIFO0
#pragma interrupt Interrupt_D0FIFO0(vect=VECT_USB0_D0FIFO0, fint)
#else
#pragma interrupt Interrupt_D0FIFO0(vect=VECT_USB0_D0FIFO0)
#endif
void Interrupt_D0FIFO0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB0_D1FIFO0
#pragma interrupt Interrupt_D1FIFO0(vect=VECT_USB0_D1FIFO0, fint)
#else
#pragma interrupt Interrupt_D1FIFO0(vect=VECT_USB0_D1FIFO0)
#endif
void Interrupt_D1FIFO0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB0_USBI0
#pragma interrupt Interrupt_USBI0(vect=VECT_USB0_USBI0, fint)
#else
#pragma interrupt Interrupt_USBI0(vect=VECT_USB0_USBI0)
#endif
void Interrupt_USBI0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB_USBR0
#pragma interrupt Interrupt_USBR0(vect=VECT_USB_USBR0, fint)
#else
#pragma interrupt Interrupt_USBR0(vect=VECT_USB_USBR0)
#endif
void Interrupt_USBR0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB1_D0FIFO1
#pragma interrupt Interrupt_D0FIFO1(vect=VECT_USB1_D0FIFO1, fint)
#else
#pragma interrupt Interrupt_D0FIFO1(vect=VECT_USB1_D0FIFO1)
#endif
void Interrupt_D0FIFO1(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB1_D1FIFO1
#pragma interrupt Interrupt_D1FIFO1(vect=VECT_USB1_D1FIFO1, fint)
#else
#pragma interrupt Interrupt_D1FIFO1(vect=VECT_USB1_D1FIFO1)
#endif
void Interrupt_D1FIFO1(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB1_USBI1
#pragma interrupt Interrupt_USBI1(vect=VECT_USB1_USBI1, fint)
#else
#pragma interrupt Interrupt_USBI1(vect=VECT_USB1_USBI1)
#endif
void Interrupt_USBI1(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_USB_USBR1
#pragma interrupt Interrupt_USBR1(vect=VECT_USB_USBR1, fint)
#else
#pragma interrupt Interrupt_USBR1(vect=VECT_USB_USBR1)
#endif
void Interrupt_USBR1(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_CAN0_ERS0
#pragma interrupt Interrupt_ERS0(vect=VECT_CAN0_ERS0, fint)
#else
#pragma interrupt Interrupt_ERS0(vect=VECT_CAN0_ERS0)
#endif
void Interrupt_ERS0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_CAN0_RXF0
#pragma interrupt Interrupt_RXF0(vect=VECT_CAN0_RXF0, fint)
#else
#pragma interrupt Interrupt_RXF0(vect=VECT_CAN0_RXF0)
#endif
void Interrupt_RXF0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_CAN0_TXF0
#pragma interrupt Interrupt_TXF0(vect=VECT_CAN0_TXF0, fint)
#else
#pragma interrupt Interrupt_TXF0(vect=VECT_CAN0_TXF0)
#endif
void Interrupt_TXF0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_CAN0_RXM0
#pragma interrupt Interrupt_RXM0(vect=VECT_CAN0_RXM0, fint)
#else
#pragma interrupt Interrupt_RXM0(vect=VECT_CAN0_RXM0)
#endif
void Interrupt_RXM0(void)
{
	/* The user can put their own code here */
	nop();
}

#if FAST_INTC_VECTOR == VECT_CAN0_TXM0
#pragma interrupt Interrupt_TXM0(vect=VECT_CAN0_TXM0, fint)
#else
#pragma interrupt Interrupt_TXM0(vect=VECT_CAN0_TXM0)
#endif
void Interrupt_TXM0(void)
{
	/* The user can put their own code here */
	nop();
}

/* End of file */
