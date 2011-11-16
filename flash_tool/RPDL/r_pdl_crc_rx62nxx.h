/*""FILE COMMENT""*******************************************************
* System Name	: CRC calculator API for RX62Nxx
* File Name		: r_pdl_crc_RX62Nxx.h
* Version		: 0.10
* Contents		: CRC header
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
* History		: 2010.04.09
*				: Ver 0.10
* 				: 2010.06.18
*				: Ver 0.11
*				: Swapped the Read parameters.
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_CRC_RX62Nxx_H
#define R_PDL_CRC_RX62Nxx_H

/* Library prototypes */
bool R_CRC_CreateAll(
	const uint8_t
);
bool R_CRC_DestroyAll(
	void
);
bool R_CRC_WriteAll(
	const uint8_t
);
bool R_CRC_ReadAll(
	const uint8_t,
	volatile uint16_t * const
);

/* Macro definitions */

#define R_CRC_Create(a) \
( \
R_CRC_CreateAll( (a) ) \
)

#define R_CRC_Destroy() \
( \
R_CRC_DestroyAll() \
)

#define R_CRC_Write(a) \
( \
R_CRC_WriteAll( (a) ) \
)

#define R_CRC_Read(a, b) \
( \
R_CRC_ReadAll( (a), (b) ) \
)

#endif
/* End of file */
