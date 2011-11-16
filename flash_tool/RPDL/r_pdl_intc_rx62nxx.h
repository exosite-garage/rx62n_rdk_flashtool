/*""FILE COMMENT""*******************************************************
* System Name	: External interrupt API for RX62Nxx
* File Name		: r_pdl_intc_RX62Nxx.h
* Version		: 0.11
* Contents		: INTC API header
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
* History		: 2010.04.20
*				: Ver 0.10
*				: 2010.05.027
*				: Ver 0.11
*				: Corrected the logic in R_INTC_CreateExtInterrupt
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_INTC_RX62Nxx_H
#define R_PDL_INTC_RX62Nxx_H

/* Callback function storage */
extern VoidCallBackFunc rpdl_INTC_callback_func[];

/* Library prototypes */
bool R_INTC_CreateExtInterruptAll(
	const uint8_t,
	const uint16_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_INTC_CreateSoftwareInterruptAll(
	const uint8_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_INTC_CreateFastInterruptAll(
	const uint8_t
);
bool R_INTC_CreateExceptionHandlersAll(
	VoidCallBackFunc const,
	VoidCallBackFunc const,
	VoidCallBackFunc const
);
bool R_INTC_ControlExtInterruptAll(
	const uint8_t,
	const uint16_t
);
bool R_INTC_GetExtInterruptStatusAll(
	const uint8_t,
	volatile uint8_t * const
);
bool R_INTC_ReadAll(
	const uint16_t,
	volatile uint8_t * const
);
bool R_INTC_WriteAll(
	const uint16_t,
	const uint8_t
);
bool R_INTC_ModifyAll(
	const uint16_t,
	const uint8_t,
	const uint8_t
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_INTC_CreateExtInterrupt(a, b, c, d) \
( \
( ( (a) <= PDL_INTC_NMI ) && ((d) <= IPL_MAX) ) ? \
R_INTC_CreateExtInterruptAll( (a), (b), (c), (d) ) : \
ReturnFalse() \
)

#define R_INTC_CreateSoftwareInterrupt(a, b, c) \
( \
( (c) <= IPL_MAX ) ? \
R_INTC_CreateSoftwareInterruptAll( (a), (b), (c) ) : \
ReturnFalse() \
)

#define R_INTC_ControlExtInterrupt(a, b) \
( \
( (a) <= PDL_INTC_NMI ) ? \
R_INTC_ControlExtInterruptAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_INTC_GetExtInterruptStatus(a, b) \
( \
( (a) <= PDL_INTC_NMI ) ? \
R_INTC_GetExtInterruptStatusAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_INTC_CreateFastInterrupt(a) \
( R_INTC_CreateFastInterruptAll( (a) ) )

#define R_INTC_CreateExceptionHandlers(a, b, c) \
( R_INTC_CreateExceptionHandlersAll( (a), (b), (c) ) )

#define R_INTC_Read(a, b) \
( R_INTC_ReadAll( (a), (b) ) )

#define R_INTC_Write(a, b) \
( R_INTC_WriteAll( (a), (b) ) )

#define R_INTC_Modify(a, b, c) \
( R_INTC_ModifyAll( (a), (b), (c) ) )

#endif
/* End of file */
