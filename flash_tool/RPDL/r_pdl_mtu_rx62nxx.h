/*""FILE COMMENT""*******************************************************
* System Name	: Multi-function Timer Pulse Unit API for RX62N
* File Name		: r_pdl_mtu_RX62Nxx.h
* Version		: 0.10
* Contents		: MTU2 API header
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
* History		: 2010.06.30
*				: Ver 0.10
*				: First release
*				: 2010.09.07
*				: Ver 0.11
*				: Added parameters for TADCOBRx control.
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_MTU_RX62Nxx_H
#define R_PDL_MTU_RX62Nxx_H

#define MTU_UNITS 				2
#define MTU_CHANNELS_PER_UNIT	6
#define MTU_CHANNELS (uint8_t)(MTU_UNITS * MTU_CHANNELS_PER_UNIT)

/* Callback function storage */
extern VoidCallBackFunc rpdl_MTU_func1_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_func2_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_func3_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_func4_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_TGRE_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_TGRF_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_Overflow_callback_func[MTU_CHANNELS];
extern VoidCallBackFunc rpdl_MTU_Underflow_callback_func[MTU_CHANNELS];

typedef struct R_MTU_Create_parameters
{
	uint32_t data2;
	uint32_t data3;
	uint32_t data4;
	uint16_t data5;
	uint32_t data6;
	uint32_t data7;
	uint32_t data8;
	uint16_t data9;
	uint16_t data10;
	uint16_t data11;
	uint16_t data12;
	uint16_t data13;
	uint16_t data14;
	uint16_t data15;
	uint16_t data16;
	uint16_t data17;
	uint16_t data18;
	VoidCallBackFunc func1;
	VoidCallBackFunc func2;
	VoidCallBackFunc func3;
	VoidCallBackFunc func4;
	uint8_t data19;
	VoidCallBackFunc func5;
	VoidCallBackFunc func6;
	VoidCallBackFunc func7;
	VoidCallBackFunc func8;
	uint8_t data20;
} R_MTU_Create_structure;

typedef struct R_MTU_ControlChannel_parameters
{
	uint8_t data2;
	uint16_t data3;
	uint16_t data4;
	uint16_t data5;
	uint16_t data6;
	uint16_t data7;
	uint16_t data8;
	uint16_t data9;
	uint16_t data10;
	uint16_t data11;
	uint16_t data12;
} R_MTU_ControlChannel_structure;

typedef struct R_MTU_ControlUnit_parameters
{
	uint32_t data2;
	uint32_t data3;
	uint16_t data4;
	uint32_t data5;
	uint8_t data6;
	uint16_t data7;
	uint16_t data8;
	uint16_t data9;
} R_MTU_ControlUnit_structure;

typedef struct R_MTU_ReadChannel_parameters
{
	volatile uint8_t * data2;
	volatile uint16_t * data3;
	volatile uint16_t * data4;
	volatile uint16_t * data5;
	volatile uint16_t * data6;
	volatile uint16_t * data7;
	volatile uint16_t * data8;
	volatile uint16_t * data9;
} R_MTU_ReadChannel_structure;

/* Library prototypes */
bool R_MTU_SetAll(
	const uint16_t
);
bool R_MTU_CreateAll(
	const uint8_t,
	R_MTU_Create_structure * const
);
bool R_MTU_DestroyAll(
	const uint8_t
);
bool R_MTU_ControlChannelAll(
	const uint8_t,
	R_MTU_ControlChannel_structure * const
);
bool R_MTU_ControlUnitAll(
	const uint8_t,
	R_MTU_ControlUnit_structure * const
);
bool R_MTU_ReadChannelAll(
	const uint8_t,
	R_MTU_ReadChannel_structure * const
);
bool R_MTU_ReadUnitAll(
	const uint8_t,
	volatile uint16_t * const,
	volatile uint16_t * const
);
bool ReturnFalse(void);
void R_MTU_Create_load_defaults(R_MTU_Create_structure * const);
void R_MTU_ReadChannel_load_defaults(R_MTU_ReadChannel_structure * const);

/* Macro definitions */

#define R_MTU_Set(a) \
( \
R_MTU_SetAll( (a) ) \
)

#define R_MTU_Create(a, b) \
( \
( (a) < MTU_CHANNELS ) ? \
R_MTU_CreateAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_MTU_ControlChannel(a, b) \
( \
( (a) < MTU_CHANNELS ) ? \
R_MTU_ControlChannelAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_MTU_ControlUnit(a, b) \
( \
( (a) < MTU_UNITS ) ? \
R_MTU_ControlUnitAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_MTU_ReadChannel(a, b) \
( \
( (a) < MTU_CHANNELS ) ? \
R_MTU_ReadChannelAll( (a), (b) ) : \
ReturnFalse() \
)

#define R_MTU_ReadUnit(a, b, c) \
( \
( (a) < MTU_UNITS ) ? \
R_MTU_ReadUnitAll( (a), (b), (c) ) : \
ReturnFalse() \
)

#define R_MTU_Destroy(a) \
( \
( (a) < MTU_UNITS ) ? \
R_MTU_DestroyAll( (a) ) : \
ReturnFalse() \
)

#endif
/* End of file */