/*""FILE COMMENT""*******************************************************
* System Name	: MCU API for RX62Nxx
* File Name		: r_pdl_mcu_RX62Nxx.h
* Version		: 0.10
* Contents		: MCU API header
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
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_MCU_RX62Nxx_H
#define R_PDL_MCU_RX62Nxx_H

/* Library prototypes */
bool R_MCU_ControlAll(
	const uint8_t
);
bool R_MCU_GetStatusAll(
	volatile uint16_t * const
);

/* Macro definitions */
#define R_MCU_Control(a) \
( \
R_MCU_ControlAll( (a) ) \
)

#define R_MCU_GetStatus(a) \
( \
R_MCU_GetStatusAll( (a) ) \
)

#endif
/* End of file */