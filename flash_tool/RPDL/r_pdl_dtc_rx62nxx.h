/*""FILE COMMENT""*******************************************************
* System Name	: DTC API for RX62N
* File Name		: r_pdl_dtc_RX62Nxx.h
* Version		: 0.10
* Contents		: DTC API header
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
* History		: 2010.05.04
*				: Ver 0.10
* 				: 2010.06.16
*				: Ver 0.11
*				: Added register parameters to R_DTC_ControlAll.
* 				: 2010.07.12
*				: Ver 0.12
*				: Updated the R_DTC_Control macro.
* 				: 2010.08.10
*				: Ver 0.13
*				: Inserted parameter 2 into R_DTC_CreateAll.
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_DTC_RX62Nxx_H
#define R_PDL_DTC_RX62Nxx_H

/* Library prototypes */
bool R_DTC_SetAll(
	const uint8_t,
	uint32_t * const
);
bool R_DTC_CreateAll(
	const uint32_t,
	const uint8_t,
	uint32_t * const,
	volatile const void * const,
	volatile const void * const,
	const uint16_t,
	const uint8_t
);
bool R_DTC_DestroyAll(
	void
);
bool R_DTC_ControlAll(
	const uint32_t,
	const uint8_t,
	uint32_t * const,
	volatile const void * const,
	volatile const void * const,
	const uint16_t,
	const uint8_t
);
bool R_DTC_GetStatusAll(
	const uint32_t * const,
	volatile uint16_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const,
 	volatile uint16_t * const,
 	volatile uint8_t * const
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_DTC_Set(a, b) \
( \
R_DTC_SetAll( (a), (b) ) \
)

#define R_DTC_Create(a, b, c, d, e, f) \
( \
R_DTC_CreateAll( (a), (uint8_t)((a) >> 24), (b), (c), (d), (e), (f) ) \
)

#define R_DTC_Destroy() \
( \
R_DTC_DestroyAll() \
)

#define R_DTC_Control(a, b, c, d, e, f) \
( \
R_DTC_ControlAll( (a), (uint8_t)((a) >> 24), (b), (c), (d), (e), (f) ) \
)

#define R_DTC_GetStatus(a, b, c, d, e, f) \
( \
R_DTC_GetStatusAll( (a), (b), (c), (d), (e), (f) ) \
)

#endif
/* End of file */