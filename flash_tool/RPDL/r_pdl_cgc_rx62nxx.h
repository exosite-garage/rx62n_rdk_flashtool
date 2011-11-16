/*""FILE COMMENT""*******************************************************
* System Name	: CGC API for RX62Nxx
* File Name		: r_pdl_cgc_RX62Nxx.h
* Version		: 0.10
* Contents		: CGC header
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
* History		: 2010.04.08
*				: Ver 0.10
*				: First draft
*				: 2010.07.20
*				: Ver 0.11
*				: Added R_CGC_Control
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_CGC_RX62Nxx_H
#define R_PDL_CGC_RX62Nxx_H

/* Library prototypes */
bool R_CGC_SetAll(
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint16_t
);

bool R_CGC_ControlAll(
	const uint16_t
);

bool R_CGC_GetStatusAll(
	volatile uint8_t * const
);

/* Macro definitions */

#define R_CGC_Set(a, b, c, d, e) \
R_CGC_SetAll( (a), (b), (c), (d), (e) )

#define R_CGC_Control(a) \
R_CGC_ControlAll( (a) )

#define R_CGC_GetStatus(a) \
R_CGC_GetStatusAll( (a) )

#endif
/* End of file */
