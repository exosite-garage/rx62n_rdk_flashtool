/*""FILE COMMENT""*******************************************************
* System Name	: Serial Peripheral Interface API for RX62Nxx
* File Name		: r_pdl_spi_RX62Nxx.h
* Version		: 0.10
* Contents		: SPI API header
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
* History		: 2010.09.14
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_SPI_RX62Nxx_H
#define R_PDL_SPI_RX62Nxx_H

#define SPI_CHANNELS 2
#define SPI_COMMAND_REGISTERS 8

/* Globals */
extern volatile uint8_t rpdl_SPI_method[SPI_CHANNELS];
extern volatile uint16_t rpdl_SPI_sequence_count[SPI_CHANNELS];
extern volatile uint16_t rpdl_SPI_tx_sequence_counter[SPI_CHANNELS];
extern volatile uint16_t rpdl_SPI_rx_sequence_counter[SPI_CHANNELS];
extern volatile uint8_t rpdl_SPI_tx_command_counter[SPI_CHANNELS];
extern volatile uint8_t rpdl_SPI_rx_command_counter[SPI_CHANNELS];
extern volatile const void * rpdl_SPI_command_tx_ptr[SPI_CHANNELS][SPI_COMMAND_REGISTERS];
extern volatile void * rpdl_SPI_command_rx_ptr[SPI_CHANNELS][SPI_COMMAND_REGISTERS];

/* Local function prototypes */
uint8_t rpdl_SPI_NumberOfBytes(const uint8_t, const uint8_t);

/* Callback function prototypes */
extern VoidCallBackFunc rpdl_SPI_callback_func[SPI_CHANNELS];

/* Request trigger options */
typedef enum {
	SPI_USING_POLLING,
	SPI_USING_IRQ,
	SPI_USING_DMAC_DTC
} rpdl_spi_transfer_options;

bool R_SPI_CreateAll(
	const uint8_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint32_t
);
bool R_SPI_DestroyAll(
	const uint8_t
);
bool R_SPI_ControlAll(
	const uint8_t,
	const uint8_t
);
bool R_SPI_CommandAll(
	const uint8_t,
	const uint8_t,
	const uint32_t,
	const uint8_t
);
bool R_SPI_TransferAll(
	const uint8_t,
	const uint8_t,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	volatile const void * const,
	volatile void * const,
	const uint16_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_SPI_GetStatusAll(
	const uint8_t,
	volatile uint16_t * const,
	volatile uint16_t * const
);
bool ReturnFalse(void);

/* Macro definitions */
#define R_SPI_Create(a, b, c, d, e) \
( \
( (a) < SPI_CHANNELS) ? \
R_SPI_CreateAll( (a), (b), (c), (d), (e) ): \
ReturnFalse() \
)

#define R_SPI_Destroy(a) \
( \
( (a) < SPI_CHANNELS) ? \
R_SPI_DestroyAll( (a) ): \
ReturnFalse() \
)

#define R_SPI_Control(a, b) \
( \
( (a) < SPI_CHANNELS) ? \
R_SPI_ControlAll( (a), (b) ): \
ReturnFalse() \
)

#define R_SPI_Command(a, b, c, d) \
( \
( (a) < SPI_CHANNELS) ? \
R_SPI_CommandAll( (a), (b), (c), (d) ): \
ReturnFalse() \
)

#define R_SPI_Transfer(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u) \
( \
( ( ((a) < SPI_CHANNELS ) && ((u) <= IPL_MAX) ) ) ? \
R_SPI_TransferAll( (a), (b), (c), (d), (e), (f), (g), (h), (i), (j), (k), (l), (m), (n), (o), (p), (q), (r), (s), (t), (u) ): \
ReturnFalse() \
)

#define R_SPI_GetStatus(a, b, c) \
( \
( (a) < SPI_CHANNELS) ? \
R_SPI_GetStatusAll( (a), (b), (c) ): \
ReturnFalse() \
)

#endif
/* End of file */
