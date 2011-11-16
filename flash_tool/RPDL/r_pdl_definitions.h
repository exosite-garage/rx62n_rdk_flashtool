/*""FILE COMMENT""*******************************************************
* System Name	: PDL driver API
* File Name		: r_pdl_definitions.h
* Version		: 0.10
* Contents		: API headers for RX62N (100-pin package)
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX600
* Compiler		: RXC
* OS			:
* Programmer	: 
* Note			: 
************************************************************************
* Copyright,2010 RENESAS ELECTRONICS CORPORATION
* AND RENESAS SOLUTIONS CORPORATION
************************************************************************
* History		: 2010.06.22
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_DEFS_H
#define R_PDL_DEFS_H

#define PDL_VERSION	0x0010u	/* v00.10 in BCD format */
#define DEVICE_PACKAGE_LQFP_100

#include "r_pdl_user_definitions.h"

/* Peripiherals that are common to all device packages */
#include "r_pdl_adc_10_RX62Nxx.h"
#include "r_pdl_adc_12_RX62Nxx.h"
#include "r_pdl_bsc_RX62Nxx.h"
#include "r_pdl_cgc_RX62Nxx.h"
#include "r_pdl_cmt_RX62Nxx.h"
#include "r_pdl_crc_RX62Nxx.h"
#include "r_pdl_dac_10_RX62Nxx.h"
#include "r_pdl_dmac_RX62Nxx.h"
#include "r_pdl_dtc_RX62Nxx.h"
#include "r_pdl_intc_RX62Nxx.h"
#include "r_pdl_lpc_RX62Nxx.h"
#include "r_pdl_mcu_RX62Nxx.h"
#include "r_pdl_mtu_RX62Nxx.h"
#include "r_pdl_pfc_RX62Nxx.h"
#include "r_pdl_poe_RX62Nxx.h"
#include "r_pdl_ppg_RX62Nxx.h"
#include "r_pdl_sci_RX62Nxx.h"
#include "r_pdl_spi_RX62Nxx.h"
#include "r_pdl_tmr_RX62Nxx.h"
#include "r_pdl_wdt_RX62Nxx.h"

/* Peripiherals that are device package-dependent */
#include "r_pdl_iic_RX62NxFP.h"
#include "r_pdl_io_port_RX62NxFP.h"

#endif
/* End of file */
