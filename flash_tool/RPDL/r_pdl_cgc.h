/*""FILE COMMENT""*******************************************************
* System Name	: CGC API
* File Name		: r_pdl_cgc.h
* Version		: 0.10
* Contents		: CGC header
* Customer		:
* Model			:
* Order			:
* CPU			:
* Compiler		:
* OS			:
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

#ifndef R_PDL_CGC_H
#define R_PDL_CGC_H

#include "r_pdl_common_defs_RX62Nxx.h"

/* Function prototypes */
bool R_CGC_Set(
	uint32_t,
	uint32_t,
	uint32_t,
	uint32_t,
	uint16_t
);

bool R_CGC_Control(
	uint16_t
);

bool R_CGC_GetStatus(
	uint8_t *
);

/* BCLK pin putput control */
#define PDL_CGC_BCLK_DISABLE		0x0001u
#define PDL_CGC_BCLK_DIV_1			0x0002u
#define PDL_CGC_BCLK_DIV_2			0x0004u
#define PDL_CGC_BCLK_HIGH			0x0008u

/* SDCLK pin putput control */
#define PDL_CGC_SDCLK_DISABLE		0x0010u
#define PDL_CGC_SDCLK_ENABLE		0x0020u

/* Oscillation Stop Detection control */
#define PDL_CGC_OSC_STOP_ENABLE		0x0100u
#define PDL_CGC_OSC_STOP_DISABLE	0x0200u

/* Sub-clock oscillator control */
#define PDL_CGC_SUB_CLOCK_ENABLE	0x0400u
#define PDL_CGC_SUB_CLOCK_DISABLE	0x0800u

#endif
/* End of file */
