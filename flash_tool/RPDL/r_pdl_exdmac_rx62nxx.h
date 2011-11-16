/*""FILE COMMENT""*******************************************************
* System Name	: EXDMAC API for RX62Nxx
* File Name		: r_pdl_exdmac_RX62Nxx.h
* Version		: 0.10
* Contents		: EXDMAC API header
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
* History		: 2010.09.10
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_EXDMAC_RX62Nxx_H
#define R_PDL_EXDMAC_RX62Nxx_H

#define EXDMAC_CHANNELS	2

/* Callback function storage */
extern VoidCallBackFunc rpdl_EXDMAC_callback_func[];

/* Library prototypes */
bool R_EXDMAC_CreateAll(
	const uint8_t,
	const uint32_t,
	const uint16_t,
	const uint8_t,
	volatile const void * const,
	volatile const void * const,
	const uint16_t,
	const uint16_t,
	const int32_t,
	const uint32_t,
	const uint32_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_EXDMAC_DestroyAll(
	const uint8_t
);
bool R_EXDMAC_ControlAll(
	const uint8_t,
	const uint16_t,
	volatile const void * const,
	volatile const void * const,
	const uint16_t,
	const uint16_t,
	const int32_t,
	const uint32_t,
	const uint32_t
);
bool R_EXDMAC_GetStatusAll(
	const uint8_t,
	volatile uint8_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const,
	volatile uint16_t * const,
	volatile uint16_t * const
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_EXDMAC_Create(a, b, c, d, e, f, g, h, i, j, k, l, m) \
( \
( ( ((a) < DMAC_CHANNELS ) && ((m) <= IPL_MAX) ) ) ? \
R_EXDMAC_CreateAll( (a), (b), (c), (d), (e), (f), (g), (h), (i), (j), (k), (l), (m) ) : \
ReturnFalse() \
)

#define R_EXDMAC_Control(a, b, c, d, e, f, g, h, i) \
( \
( ((a) < DMAC_CHANNELS) ) ? \
R_EXDMAC_ControlAll( (a), (b), (c), (d), (e), (f), (g), (h), (i) ) : \
ReturnFalse() \
)

#define R_EXDMAC_GetStatus(a, b, c, d, e, f) \
( \
( ((a) < DMAC_CHANNELS) ) ? \
R_EXDMAC_GetStatusAll( (a), (b), (c), (d), (e), (f) ) : \
ReturnFalse() \
)

#define R_EXDMAC_Destroy(a) \
( \
( ((a) < DMAC_CHANNELS) ) ? \
R_EXDMAC_DestroyAll( (a) ) : \
ReturnFalse() \
)

#endif
/* End of file */