/*""FILE COMMENT""*******************************************************
* System Name	: Interrupt program for RX62Nxx
* File Name		: Interrupt_SPI.c
* Version		: 0.10
* Contents		: Interrupt handlers for all SPI channels
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
* History		: 2001.08.23
*				: Ver 0.10
*				: First draft
*""FILE COMMENT END""**************************************************/

#include "r_pdl_spi.h"
#include "r_pdl_spi_RX62Nxx.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""***************************************************
* Module outline: SPIn receive data error interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_RSPIn_SPEIn(void)
*-------------------------------------------------------------------
* Function		: 
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Output		: None
*-------------------------------------------------------------------
* Use function	: rpdl_SPI_callback_func[n]
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.08.23
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_RSPI0_SPEI0
#pragma interrupt Interrupt_RSPI0_SPEI0(vect=VECT_RSPI0_SPEI0, fint)
#else
#pragma interrupt Interrupt_RSPI0_SPEI0(vect=VECT_RSPI0_SPEI0)
#endif
void Interrupt_RSPI0_SPEI0(void)
{
	/* Will the user handle the errors? */
	if (rpdl_SPI_callback_func[0] != PDL_NO_FUNC)
	{
		/* Notify the user */
		rpdl_SPI_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_RSPI1_SPEI1
#pragma interrupt Interrupt_RSPI1_SPEI1(vect=VECT_RSPI1_SPEI1, fint)
#else
#pragma interrupt Interrupt_RSPI1_SPEI1(vect=VECT_RSPI1_SPEI1)
#endif
void Interrupt_RSPI1_SPEI1(void)
{
	/* Will the user handle the errors? */
	if (rpdl_SPI_callback_func[1] != PDL_NO_FUNC)
	{
		/* Notify the user */
		rpdl_SPI_callback_func[1]();
	}
}

/*""FUNC COMMENT""***************************************************
* Module outline: SPIn receive data interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_RSPIn_SPRIn(void)
*-------------------------------------------------------------------
* Function		: 
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			: (I/ ) : SPDCR, SBDR
* Output		: (I/O) : SPCR, SPCR2
*-------------------------------------------------------------------
* Use function	: None
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.09.14
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_RSPI0_SPRI0
#pragma interrupt Interrupt_RSPI0_SPRI0(vect=VECT_RSPI0_SPRI0, fint)
#else
#pragma interrupt Interrupt_RSPI0_SPRI0(vect=VECT_RSPI0_SPRI0)
#endif
void Interrupt_RSPI0_SPRI0(void)
{
	uint8_t command_number;
	uint8_t byte_count;
	uint8_t frame_count;
	uint32_t received_frame;
	uint8_t spdcr_copy;
	uint8_t splw;
	uint8_t spfc;
	volatile void * rx_data_ptr;

	/* Ok to process the data? */
	if (rpdl_SPI_method[0] == SPI_USING_IRQ)
	{
		command_number = rpdl_SPI_rx_command_counter[0];
		spdcr_copy = RSPI0.SPDCR.BYTE;
		splw = (uint8_t)(spdcr_copy & BIT_5);
		spfc = (uint8_t)(spdcr_copy & 0x03u);
		rx_data_ptr = rpdl_SPI_command_rx_ptr[0][command_number];

		/* Note the data length */
		byte_count = rpdl_SPI_NumberOfBytes(0, command_number);

		/* Load the data register */
		for (frame_count = 0; frame_count <= spfc; frame_count++)
		{
			if (splw == 0)
			{
				/* Read the data */
				received_frame = (uint16_t)RSPI0.SPDR.WORD.L;

				if (byte_count == 1)
				{
					*(volatile uint8_t *)rx_data_ptr = (uint8_t)received_frame;
				}
				else
				{
					*(volatile uint16_t *)rx_data_ptr = (uint16_t)received_frame;
				}
			}
			else
			{
				/* Read the data */
				received_frame = RSPI0.SPDR.LONG;

				if (byte_count == 1)
				{
					*(volatile uint8_t *)rx_data_ptr = (uint8_t)received_frame;
				}
				else if (byte_count == 2)
				{
					*(volatile uint16_t *)rx_data_ptr = (uint16_t)received_frame;
				}
				else
				{
					*(volatile uint32_t *)rx_data_ptr = received_frame;
				}
			}
	
			/* Increment the address pointer */
			(volatile uint8_t *)rx_data_ptr += byte_count;
		}

		/* Store the updated pointer */
		rpdl_SPI_command_rx_ptr[0][command_number] = rx_data_ptr;

		/* All commands completed? */
		if (command_number == RSPI0.SPSCR.BIT.SPSLN)
		{
			/* Increment the loop counter */
			rpdl_SPI_rx_sequence_counter[0]++;

			/* All loops completed? */
			if (rpdl_SPI_rx_sequence_counter[0] == rpdl_SPI_sequence_count[0])
			{
				/* Disable receive interrupts */
				RSPI0.SPCR.BIT.SPRIE = 0;

				/* Master mode? */
				if (RSPI0.SPCR.BIT.MSTR == 1)
				{
					/* Enable idle interrupts */
					RSPI0.SPCR2.BIT.SPIIE = 1;
				}
				else
				{
					/* Notify the user */
					rpdl_SPI_callback_func[0]();
				}
			}
		}
		else
		{
			rpdl_SPI_rx_command_counter[0]++;
		}
	}
}

#if FAST_INTC_VECTOR == VECT_RSPI1_SPRI1
#pragma interrupt Interrupt_RSPI1_SPRI1(vect=VECT_RSPI1_SPRI1, fint)
#else
#pragma interrupt Interrupt_RSPI1_SPRI1(vect=VECT_RSPI1_SPRI1)
#endif
void Interrupt_RSPI1_SPRI1(void)
{
	uint8_t command_number;
	uint8_t byte_count;
	uint8_t frame_count;
	uint32_t received_frame;
	uint8_t spdcr_copy;
	uint8_t splw;
	uint8_t spfc;
	volatile void * rx_data_ptr;

	/* Ok to process the data? */
	if (rpdl_SPI_method[1] == SPI_USING_IRQ)
	{
		command_number = rpdl_SPI_rx_command_counter[1];
		spdcr_copy = RSPI1.SPDCR.BYTE;
		splw = (uint8_t)(spdcr_copy & BIT_5);
		spfc = (uint8_t)(spdcr_copy & 0x03u);
		rx_data_ptr = rpdl_SPI_command_rx_ptr[1][command_number];

		/* Note the data length */
		byte_count = rpdl_SPI_NumberOfBytes(1, command_number);

		/* Load the data register */
		for (frame_count = 0; frame_count <= spfc; frame_count++)
		{
			if (splw == 0)
			{
				/* Read the data */
				received_frame = (uint16_t)RSPI1.SPDR.WORD.L;

				if (byte_count == 1)
				{
					*(volatile uint8_t *)rx_data_ptr = (uint8_t)received_frame;
				}
				else
				{
					*(volatile uint16_t *)rx_data_ptr = (uint16_t)received_frame;
				}
			}
			else
			{
				/* Read the data */
				received_frame = RSPI1.SPDR.LONG;

				if (byte_count == 1)
				{
					*(volatile uint8_t *)rx_data_ptr = (uint8_t)received_frame;
				}
				else if (byte_count == 2)
				{
					*(volatile uint16_t *)rx_data_ptr = (uint16_t)received_frame;
				}
				else
				{
					*(volatile uint32_t *)rx_data_ptr = received_frame;
				}
			}
	
			/* Increment the address pointer */
			(volatile uint8_t *)rx_data_ptr += byte_count;
		}

		/* Store the updated pointer */
		rpdl_SPI_command_rx_ptr[1][command_number] = rx_data_ptr;

		/* All commands completed? */
		if (command_number == RSPI1.SPSCR.BIT.SPSLN)
		{
			/* Increment the loop counter */
			rpdl_SPI_rx_sequence_counter[1]++;

			/* All loops completed? */
			if (rpdl_SPI_rx_sequence_counter[1] == rpdl_SPI_sequence_count[1])
			{
				/* Disable receive interrupts */
				RSPI1.SPCR.BIT.SPRIE = 0;

				/* Master mode? */
				if (RSPI1.SPCR.BIT.MSTR == 1)
				{
					/* Enable idle interrupts */
					RSPI1.SPCR2.BIT.SPIIE = 1;
				}
				else
				{
					/* Notify the user */
					rpdl_SPI_callback_func[1]();
				}
			}
		}
		else
		{
			rpdl_SPI_rx_command_counter[1]++;
		}
	}
}

/*""FUNC COMMENT""***************************************************
* Module outline: SPIn transmit data interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_RSPIn_SPTIn(void)
*-------------------------------------------------------------------
* Function		: 
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Input			: (I/ ) : SPDCR
* Output		: ( /O) : SBDR
*				: (I/O) : SPCR, SPCR2
*-------------------------------------------------------------------
* Use function	: 
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.09.14
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_RSPI0_SPTI0
#pragma interrupt Interrupt_RSPI0_SPTI0(vect=VECT_RSPI0_SPTI0, fint)
#else
#pragma interrupt Interrupt_RSPI0_SPTI0(vect=VECT_RSPI0_SPTI0)
#endif
void Interrupt_RSPI0_SPTI0(void)
{
	uint8_t command_number;
	uint8_t byte_count;
	uint8_t frame_count;
	uint8_t spdcr_copy;
	uint8_t splw;
	uint8_t spfc;
	volatile const void * tx_data_ptr;

	/* Ok to process the string? */
	if (rpdl_SPI_method[0] == SPI_USING_IRQ)
	{
		command_number = rpdl_SPI_tx_command_counter[0];
		spdcr_copy = RSPI0.SPDCR.BYTE;
		splw = (uint8_t)(spdcr_copy & BIT_5);
		spfc = (uint8_t)(spdcr_copy & 0x03u);
		tx_data_ptr = rpdl_SPI_command_tx_ptr[0][command_number];

		/* Note the data length */
		byte_count = rpdl_SPI_NumberOfBytes(0, command_number);

		/* Load the data register */
		for (frame_count = 0; frame_count <= spfc; frame_count++)
		{
			if (splw == 0)
			{
				if (byte_count == 1)
				{
					RSPI0.SPDR.WORD.L = (uint16_t)( *(volatile const uint16_t *)tx_data_ptr & 0x00FFu);
				}
				else
				{
					RSPI0.SPDR.WORD.L = *(volatile const uint16_t *)tx_data_ptr;
				}
			}
			else
			{
				if (byte_count == 1)
				{
					RSPI0.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr & 0x000000FFu;
				}
				else if (byte_count == 2)
				{
					RSPI0.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr & 0x0000FFFFu;
				}
				else
				{
					RSPI0.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr;
				}
			}

			/* Increment the address pointer */
			(volatile const uint8_t *)tx_data_ptr += byte_count;
		}

		/* Store the updated pointer */
		rpdl_SPI_command_tx_ptr[1][command_number] = tx_data_ptr;

		/* All commands completed? */
		if (command_number == RSPI0.SPSCR.BIT.SPSLN)
		{
			/* Increment the loop counter */
			rpdl_SPI_tx_sequence_counter[0]++;

			/* All loops completed? */
			if (rpdl_SPI_tx_sequence_counter[0] == rpdl_SPI_sequence_count[0])
			{
				/* Disable transmit interrupts */
				RSPI0.SPCR.BIT.SPTIE = 0;

				/* Transmit only? */
				if (RSPI0.SPCR.BIT.TXMD == 1)
				{
					/* Master mode? */
					if (RSPI0.SPCR.BIT.MSTR == 1)
					{
						/* Enable idle interrupts */
						RSPI0.SPCR2.BIT.SPIIE = 1;
					}
					else
					{
						/* Notify the user */
						rpdl_SPI_callback_func[0]();
					}
				}
			}
		}
		else
		{
			rpdl_SPI_tx_command_counter[0]++;
		}
	}
}

#if FAST_INTC_VECTOR == VECT_RSPI1_SPTI1
#pragma interrupt Interrupt_RSPI1_SPTI1(vect=VECT_RSPI1_SPTI1, fint)
#else
#pragma interrupt Interrupt_RSPI1_SPTI1(vect=VECT_RSPI1_SPTI1)
#endif
void Interrupt_RSPI1_SPTI1(void)
{
	uint8_t command_number;
	uint8_t byte_count;
	uint8_t frame_count;
	uint8_t spdcr_copy;
	uint8_t splw;
	uint8_t spfc;
	volatile const void * tx_data_ptr;

	/* Ok to process the string? */
	if (rpdl_SPI_method[1] == SPI_USING_IRQ)
	{
		command_number = rpdl_SPI_tx_command_counter[1];
		spdcr_copy = RSPI1.SPDCR.BYTE;
		splw = (uint8_t)(spdcr_copy & BIT_5);
		spfc = (uint8_t)(spdcr_copy & 0x03u);
		tx_data_ptr = rpdl_SPI_command_tx_ptr[1][command_number];

		/* Note the data length */
		byte_count = rpdl_SPI_NumberOfBytes(1, command_number);

		/* Load the data register */
		for (frame_count = 0; frame_count <= spfc; frame_count++)
		{
			if (splw == 0)
			{
				if (byte_count == 1)
				{
					RSPI1.SPDR.WORD.L = (uint16_t)( *(volatile const uint16_t *)tx_data_ptr & 0x00FFu);
				}
				else
				{
					RSPI1.SPDR.WORD.L = *(volatile const uint16_t *)tx_data_ptr;
				}
			}
			else
			{
				if (byte_count == 1)
				{
					RSPI1.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr & 0x000000FFu;
				}
				else if (byte_count == 2)
				{
					RSPI1.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr & 0x0000FFFFu;
				}
				else
				{
					RSPI1.SPDR.LONG = *(volatile const uint32_t *)tx_data_ptr;
				}
			}

			/* Increment the address pointer */
			(volatile const uint8_t *)tx_data_ptr += byte_count;
		}

		/* Store the updated pointer */
		rpdl_SPI_command_tx_ptr[1][command_number] = tx_data_ptr;

		/* All commands completed? */
		if (command_number == RSPI1.SPSCR.BIT.SPSLN)
		{
			/* Increment the loop counter */
			rpdl_SPI_tx_sequence_counter[1]++;

			/* All loops completed? */
			if (rpdl_SPI_tx_sequence_counter[1] == rpdl_SPI_sequence_count[1])
			{
				/* Disable transmit interrupts */
				RSPI1.SPCR.BIT.SPTIE = 0;

				/* Transmit only? */
				if (RSPI1.SPCR.BIT.TXMD == 1)
				{
					/* Master mode? */
					if (RSPI1.SPCR.BIT.MSTR == 1)
					{
						/* Enable idle interrupts */
						RSPI1.SPCR2.BIT.SPIIE = 1;
					}
					else
					{
						/* Notify the user */
						rpdl_SPI_callback_func[1]();
					}
				}
			}
		}
		else
		{
			rpdl_SPI_tx_command_counter[1]++;
		}
	}
}

/*""FUNC COMMENT""***************************************************
* Module outline: SPIn idle interrupt processing
*-------------------------------------------------------------------
* Declaration	: void Interrupt_RSPIn_SPIIn(void)
*-------------------------------------------------------------------
* Function		: 
*-------------------------------------------------------------------
* Argument		: Nothing
*-------------------------------------------------------------------
* Return value	: Nothing
*-------------------------------------------------------------------
* Output		: SPCR, SPCR2
*-------------------------------------------------------------------
* Use function	: rpdl_SPI_callback_func()
*-------------------------------------------------------------------
* Notes			: 
*-------------------------------------------------------------------
* History		: 2010.08.27
*				: Ver 0.10
*				: First draft
*""FUNC COMMENT END""**********************************************/

#if FAST_INTC_VECTOR == VECT_RSPI0_SPII0
#pragma interrupt Interrupt_RSPI0_SPII0(vect=VECT_RSPI0_SPII0, fint)
#else
#pragma interrupt Interrupt_RSPI0_SPII0(vect=VECT_RSPI0_SPII0)
#endif
void Interrupt_RSPI0_SPII0(void)
{
	/* Disable the channel */
	RSPI0.SPCR.BIT.SPE = 0;

	/* Disable idle interrupts */
	RSPI0.SPCR2.BIT.SPIIE = 0;

	/* Call the callback function */
	if (rpdl_SPI_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_SPI_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_RSPI1_SPII1
#pragma interrupt Interrupt_RSPI1_SPII1(vect=VECT_RSPI1_SPII1, fint)
#else
#pragma interrupt Interrupt_RSPI1_SPII1(vect=VECT_RSPI1_SPII1)
#endif
void Interrupt_RSPI1_SPII1(void)
{
	/* Disable the channel */
	RSPI1.SPCR.BIT.SPE = 0;

	/* Disable idle interrupts */
	RSPI1.SPCR2.BIT.SPIIE = 0;

	/* Call the callback function */
	if (rpdl_SPI_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_SPI_callback_func[1]();
	}
}

/* End of file */