/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only 
* intended for use with Renesas products. No other uses are authorized. This 
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE 
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*******************************************************************************/
/*******************************************************************************
* Copyright (C) 2010 Renesas Electronics Corporation. All rights reserved.    */ 
/*******************************************************************************
* File Name    : vect.h
* Version      : 1.00
* Device       : R5F562N8
* Tool Chain   : RX Family C Compiler
* H/W Platform : YRDKRX62N
* Description  : Defines interrupt function prototypes, used in intprg.c
*******************************************************************************/
/*******************************************************************************
* History	   : 02.09.2010 Ver. 1.00 First Release
*******************************************************************************/


// Exception(Supervisor Instruction)
#pragma interrupt (Excep_SuperVisorInst)
void Excep_SuperVisorInst(void);

// Exception(Undefined Instruction)
#pragma interrupt (Excep_UndefinedInst)
void Excep_UndefinedInst(void);

// Exception(Floating Point)
#pragma interrupt (Excep_FloatingPoint)
void Excep_FloatingPoint(void);

// NMI
#pragma interrupt (NonMaskableInterrupt)
void NonMaskableInterrupt(void);

// Dummy
#pragma interrupt (Dummy)
void Dummy(void);

// BRK
#pragma interrupt (Excep_BRK(vect=0))
void Excep_BRK(void);

// vector  1 reserved
// vector  2 reserved
// vector  3 reserved
// vector  4 reserved
// vector  5 reserved
// vector  6 reserved
// vector  7 reserved
// vector  8 reserved
// vector  9 reserved
// vector 10 reserved
// vector 11 reserved
// vector 12 reserved
// vector 13 reserved
// vector 14 reserved
// vector 15 reserved

// BUSERR
#pragma interrupt (Excep_BUSERR(vect=16))
void Excep_BUSERR(void);

// vector 17 reserved
// vector 18 reserved
// vector 19 reserved
// vector 20 reserved

// FCU_FCUERR
#pragma interrupt (Excep_FCU_FCUERR(vect=21))
void Excep_FCU_FCUERR(void);

// vector 22 reserved

// FCU_FRDYI
#pragma interrupt (Excep_FCU_FRDYI(vect=23))
void Excep_FCU_FRDYI(void);

// vector 24 reserved
// vector 25 reserved
// vector 26 reserved
// vector 27 reserved

// CMTU0_CMT0
#pragma interrupt (Excep_CMTU0_CMT0(vect=28))
void Excep_CMTU0_CMT0(void);

// CMTU0_CMT1
#pragma interrupt (Excep_CMTU0_CMT1(vect=29))
void Excep_CMTU0_CMT1(void);

// CMTU1_CMT2
#pragma interrupt (Excep_CMTU1_CMT2(vect=30))
void Excep_CMTU1_CMT2(void);

// CMTU1_CMT3
#pragma interrupt (Excep_CMTU1_CMT3(vect=31))
void Excep_CMTU1_CMT3(void);

// vector 32 reserved
// vector 33 reserved
// vector 34 reserved
// vector 35 reserved
// vector 36 reserved
// vector 37 reserved
// vector 38 reserved
// vector 39 reserved
// vector 40 reserved
// vector 41 reserved
// vector 42 reserved
// vector 43 reserved
// vector 44 reserved
// vector 45 reserved
// vector 46 reserved
// vector 47 reserved
// vector 48 reserved
// vector 49 reserved
// vector 50 reserved
// vector 51 reserved
// vector 52 reserved
// vector 53 reserved
// vector 54 reserved
// vector 55 reserved
// vector 56 reserved
// vector 57 reserved
// vector 58 reserved
// vector 59 reserved
// vector 60 reserved
// vector 61 reserved
// vector 62 reserved
// vector 63 reserved

// IRQ0
#pragma interrupt (Excep_IRQ0(vect=64))
void Excep_IRQ0(void);

// IRQ1
#pragma interrupt (Excep_IRQ1(vect=65))
void Excep_IRQ1(void);

// IRQ2
#pragma interrupt (Excep_IRQ2(vect=66))
void Excep_IRQ2(void);

// IRQ3
#pragma interrupt (Excep_IRQ3(vect=67))
void Excep_IRQ3(void);

// IRQ4
#pragma interrupt (Excep_IRQ4(vect=68))
void Excep_IRQ4(void);

// IRQ5
#pragma interrupt (Excep_IRQ5(vect=69))
void Excep_IRQ5(void);

// IRQ6
#pragma interrupt (Excep_IRQ6(vect=70))
void Excep_IRQ6(void);

// IRQ7
#pragma interrupt (Excep_IRQ7(vect=71))
void Excep_IRQ7(void);

// IRQ8
#pragma interrupt (Excep_IRQ8(vect=72))
void Excep_IRQ8(void);

// IRQ9
#pragma interrupt (Excep_IRQ9(vect=73))
void Excep_IRQ9(void);

// IRQ10
#pragma interrupt (Excep_IRQ10(vect=74))
void Excep_IRQ10(void);

// IRQ11
#pragma interrupt (Excep_IRQ11(vect=75))
void Excep_IRQ11(void);

// IRQ12
#pragma interrupt (Excep_IRQ12(vect=76))
void Excep_IRQ12(void);

// IRQ13
#pragma interrupt (Excep_IRQ13(vect=77))
void Excep_IRQ13(void);

// IRQ14
#pragma interrupt (Excep_IRQ14(vect=78))
void Excep_IRQ14(void);

// IRQ15
#pragma interrupt (Excep_IRQ15(vect=79))
void Excep_IRQ15(void);

// vector 80 reserved
// vector 81 reserved
// vector 82 reserved
// vector 83 reserved
// vector 84 reserved
// vector 85 reserved
// vector 86 reserved
// vector 87 reserved
// vector 88 reserved
// vector 89 reserved
// vector 90 reserved
// vector 91 reserved
// vector 92 reserved
// vector 93 reserved
// vector 94 reserved
// vector 95 reserved

// WDT_WOVI
#pragma interrupt (Excep_WDT_WOVI(vect=96))
void Excep_WDT_WOVI(void);

// vector 97 reserved

// AD0_ADI0
#pragma interrupt (Excep_AD0_ADI0(vect=98))
void Excep_AD0_ADI0(void);

// AD1_ADI1
#pragma interrupt (Excep_AD1_ADI1(vect=99))
void Excep_AD1_ADI1(void);

// AD2_ADI2
#pragma interrupt (Excep_AD2_ADI2(vect=100))
void Excep_AD2_ADI2(void);

// AD3_ADI3
#pragma interrupt (Excep_AD3_ADI3(vect=101))
void Excep_AD3_ADI3(void);

// vector 102 reserved
// vector 103 reserved

// TPU0_TGI0A
#pragma interrupt (Excep_TPU0_TGI0A(vect=104))
void Excep_TPU0_TGI0A(void);

// TPU0_TGI0B
#pragma interrupt (Excep_TPU0_TGI0B(vect=105))
void Excep_TPU0_TGI0B(void);

// TPU0_TGI0C
#pragma interrupt (Excep_TPU0_TGI0C(vect=106))
void Excep_TPU0_TGI0C(void);

// TPU0_TGI0D
#pragma interrupt (Excep_TPU0_TGI0D(vect=107))
void Excep_TPU0_TGI0D(void);

// TPU0_TCI0V
#pragma interrupt (Excep_TPU0_TCI0V(vect=108))
void Excep_TPU0_TCI0V(void);

// vector 109 reserved
// vector 110 reserved

// TPU1_TGI1A
#pragma interrupt (Excep_TPU1_TGI1A(vect=111))
void Excep_TPU1_TGI1A(void);

// TPU1_TGI1B
#pragma interrupt (Excep_TPU1_TGI1B(vect=112))
void Excep_TPU1_TGI1B(void);

// vector 113 reserved
// vector 114 reserved

// TPU1_TCI1V
#pragma interrupt (Excep_TPU1_TCI1V(vect=115))
void Excep_TPU1_TCI1V(void);

// TPU1_TCI1U
#pragma interrupt (Excep_TPU1_TCI1U(vect=116))
void Excep_TPU1_TCI1U(void);

// TPU2_TGI2A
#pragma interrupt (Excep_TPU2_TGI2A(vect=117))
void Excep_TPU2_TGI2A(void);

// TPU2_TGI2B
#pragma interrupt (Excep_TPU2_TGI2B(vect=118))
void Excep_TPU2_TGI2B(void);

// vector 119 reserved

// TPU2_TCI2V
#pragma interrupt (Excep_TPU2_TCI2V(vect=120))
void Excep_TPU2_TCI2V(void);

// TPU2_TCI2U
#pragma interrupt (Excep_TPU2_TCI2U(vect=121))
void Excep_TPU2_TCI2U(void);

// TPU3_TGI3A
#pragma interrupt (Excep_TPU3_TGI3A(vect=122))
void Excep_TPU3_TGI3A(void);

// TPU3_TGI3B
#pragma interrupt (Excep_TPU3_TGI3B(vect=123))
void Excep_TPU3_TGI3B(void);

// TPU3_TGI3C
#pragma interrupt (Excep_TPU3_TGI3C(vect=124))
void Excep_TPU3_TGI3C(void);

// TPU3_TGI3D
#pragma interrupt (Excep_TPU3_TGI3D(vect=125))
void Excep_TPU3_TGI3D(void);

// TPU3_TCI3V
#pragma interrupt (Excep_TPU3_TCI3V(vect=126))
void Excep_TPU3_TCI3V(void);

// TPU4_TGI4A
#pragma interrupt (Excep_TPU4_TGI4A(vect=127))
void Excep_TPU4_TGI4A(void);

// TPU4_TGI4B
#pragma interrupt (Excep_TPU4_TGI4B(vect=128))
void Excep_TPU4_TGI4B(void);

// vector 129 reserved
// vector 130 reserved

// TPU4_TCI4V
#pragma interrupt (Excep_TPU4_TCI4V(vect=131))
void Excep_TPU4_TCI4V(void);

// TPU4_TCI4U
#pragma interrupt (Excep_TPU4_TCI4U(vect=132))
void Excep_TPU4_TCI4U(void);

// TPU5_TGI5A
#pragma interrupt (Excep_TPU5_TGI5A(vect=133))
void Excep_TPU5_TGI5A(void);

// TPU5_TGI5B
#pragma interrupt (Excep_TPU5_TGI5B(vect=134))
void Excep_TPU5_TGI5B(void);

// vector 135 reserved

// TPU5_TCI5V
#pragma interrupt (Excep_TPU5_TCI5V(vect=136))
void Excep_TPU5_TCI5V(void);

// TPU5_TCI5U
#pragma interrupt (Excep_TPU5_TCI5U(vect=137))
void Excep_TPU5_TCI5U(void);

// TPU6_TGI6A
#pragma interrupt (Excep_TPU6_TGI6A(vect=138))
void Excep_TPU6_TGI6A(void);

// TPU6_TGI6B
#pragma interrupt (Excep_TPU6_TGI6B(vect=139))
void Excep_TPU6_TGI6B(void);

// TPU6_TGI6C
#pragma interrupt (Excep_TPU6_TGI6C(vect=140))
void Excep_TPU6_TGI6C(void);

// TPU6_TGI6D
#pragma interrupt (Excep_TPU6_TGI6D(vect=141))
void Excep_TPU6_TGI6D(void);

// TPU6_TCI6V
#pragma interrupt (Excep_TPU6_TCI6V(vect=142))
void Excep_TPU6_TCI6V(void);

// vector 143 reserved
// vector 144 reserved

// TPU7_TGI7A
#pragma interrupt (Excep_TPU7_TGI7A(vect=145))
void Excep_TPU7_TGI7A(void);

// TPU7_TGI7B
#pragma interrupt (Excep_TPU7_TGI7B(vect=146))
void Excep_TPU7_TGI7B(void);

// vector 147 reserved
// vector 148 reserved

// TPU7_TCI7V
#pragma interrupt (Excep_TPU7_TCI7V(vect=149))
void Excep_TPU7_TCI7V(void);

// TPU7_TCI7U
#pragma interrupt (Excep_TPU7_TCI7U(vect=150))
void Excep_TPU7_TCI7U(void);

// TPU8_TGI8A
#pragma interrupt (Excep_TPU8_TGI8A(vect=151))
void Excep_TPU8_TGI8A(void);

// TPU8_TGI8B
#pragma interrupt (Excep_TPU8_TGI8B(vect=152))
void Excep_TPU8_TGI8B(void);

// vector 153 reserved

// TPU8_TCI8V
#pragma interrupt (Excep_TPU8_TCI8V(vect=154))
void Excep_TPU8_TCI8V(void);

// TPU8_TCI8U
#pragma interrupt (Excep_TPU8_TCI8U(vect=155))
void Excep_TPU8_TCI8U(void);

// TPU9_TGI9A
#pragma interrupt (Excep_TPU9_TGI9A(vect=156))
void Excep_TPU9_TGI9A(void);

// TPU9_TGI9B
#pragma interrupt (Excep_TPU9_TGI9B(vect=157))
void Excep_TPU9_TGI9B(void);

// TPU9_TGI9C
#pragma interrupt (Excep_TPU9_TGI9C(vect=158))
void Excep_TPU9_TGI9C(void);

// TPU9_TGI9D
#pragma interrupt (Excep_TPU9_TGI9D(vect=159))
void Excep_TPU9_TGI9D(void);

// TPU9_TCI9V
#pragma interrupt (Excep_TPU9_TCI9V(vect=160))
void Excep_TPU9_TCI9V(void);

// TPU10_TGI10A
#pragma interrupt (Excep_TPU10_TGI10A(vect=161))
void Excep_TPU10_TGI10A(void);

// TPU10_TGI10B
#pragma interrupt (Excep_TPU10_TGI10B(vect=162))
void Excep_TPU10_TGI10B(void);

// vector 163 reserved
// vector 164 reserved

// TPU10_TCI10V
#pragma interrupt (Excep_TPU10_TCI10V(vect=165))
void Excep_TPU10_TCI10V(void);

// TPU10_TCI10U
#pragma interrupt (Excep_TPU10_TCI10U(vect=166))
void Excep_TPU10_TCI10U(void);

// TPU11_TGI11A
#pragma interrupt (Excep_TPU11_TGI11A(vect=167))
void Excep_TPU11_TGI11A(void);

// TPU11_TGI11B
#pragma interrupt (Excep_TPU11_TGI11B(vect=168))
void Excep_TPU11_TGI11B(void);

// vector 169 reserved

// TPU11_TCI11V
#pragma interrupt (Excep_TPU11_TCI11V(vect=170))
void Excep_TPU11_TCI11V(void);

// TPU11_TCI11U
#pragma interrupt (Excep_TPU11_TCI11U(vect=171))
void Excep_TPU11_TCI11U(void);

// vector 172 reserved
// vector 173 reserved

// TMR0_CMI0A
#pragma interrupt (Excep_TMR0_CMI0A(vect=174))
void Excep_TMR0_CMI0A(void);

// TMR0_CMI0B
#pragma interrupt (Excep_TMR0_CMI0B(vect=175))
void Excep_TMR0_CMI0B(void);

// TMR0_OV0I
#pragma interrupt (Excep_TMR0_OV0I(vect=176))
void Excep_TMR0_OV0I(void);

// TMR1_CMI1A
#pragma interrupt (Excep_TMR1_CMI1A(vect=177))
void Excep_TMR1_CMI1A(void);

// TMR1_CMI1B
#pragma interrupt (Excep_TMR1_CMI1B(vect=178))
void Excep_TMR1_CMI1B(void);

// TMR1_OV1I
#pragma interrupt (Excep_TMR1_OV1I(vect=179))
void Excep_TMR1_OV1I(void);

// TMR2_CMI2A
#pragma interrupt (Excep_TMR2_CMI2A(vect=180))
void Excep_TMR2_CMI2A(void);

// TMR2_CMI2B
#pragma interrupt (Excep_TMR2_CMI2B(vect=181))
void Excep_TMR2_CMI2B(void);

// TMR2_OV2I
#pragma interrupt (Excep_TMR2_OV2I(vect=182))
void Excep_TMR2_OV2I(void);

// TMR3_CMI3A
#pragma interrupt (Excep_TMR3_CMI3A(vect=183))
void Excep_TMR3_CMI3A(void);

// TMR3_CMI3B
#pragma interrupt (Excep_TMR3_CMI3B(vect=184))
void Excep_TMR3_CMI3B(void);

// TMR3_OV3I
#pragma interrupt (Excep_TMR3_OV3I(vect=185))
void Excep_TMR3_OV3I(void);

// vector 186 reserved
// vector 187 reserved
// vector 188 reserved
// vector 189 reserved
// vector 190 reserved
// vector 191 reserved
// vector 192 reserved
// vector 193 reserved
// vector 194 reserved
// vector 195 reserved
// vector 196 reserved
// vector 197 reserved

// DMAC_DMTEND0
#pragma interrupt (Excep_DMAC_DMTEND0(vect=198))
void Excep_DMAC_DMTEND0(void);

// DMAC_DMTEND1
#pragma interrupt (Excep_DMAC_DMTEND1(vect=199))
void Excep_DMAC_DMTEND1(void);

// DMAC_DMTEND2
#pragma interrupt (Excep_DMAC_DMTEND2(vect=200))
void Excep_DMAC_DMTEND2(void);

// DMAC_DMTEND3
#pragma interrupt (Excep_DMAC_DMTEND3(vect=201))
void Excep_DMAC_DMTEND3(void);

// vector 202 reserved
// vector 203 reserved
// vector 204 reserved
// vector 205 reserved
// vector 206 reserved
// vector 207 reserved
// vector 208 reserved
// vector 209 reserved
// vector 210 reserved
// vector 211 reserved
// vector 212 reserved
// vector 213 reserved

// SCI0_ERI0
#pragma interrupt (Excep_SCI0_ERI0(vect=214))
void Excep_SCI0_ERI0(void);

// SCI0_RXI0
#pragma interrupt (Excep_SCI0_RXI0(vect=215))
void Excep_SCI0_RXI0(void);

// SCI0_TXI0
#pragma interrupt (Excep_SCI0_TXI0(vect=216))
void Excep_SCI0_TXI0(void);

// SCI0_TEI0
#pragma interrupt (Excep_SCI0_TEI0(vect=217))
void Excep_SCI0_TEI0(void);

// SCI1_ERI1
#pragma interrupt (Excep_SCI1_ERI1(vect=218))
void Excep_SCI1_ERI1(void);

// SCI1_RXI1
#pragma interrupt (Excep_SCI1_RXI1(vect=219))
void Excep_SCI1_RXI1(void);

// SCI1_TXI1
#pragma interrupt (Excep_SCI1_TXI1(vect=220))
void Excep_SCI1_TXI1(void);

// SCI1_TEI1
#pragma interrupt (Excep_SCI1_TEI1(vect=221))
void Excep_SCI1_TEI1(void);

// SCI2_ERI2
#pragma interrupt (Excep_SCI2_ERI2(vect=222))
void Excep_SCI2_ERI2(void);

// SCI2_RXI2
#pragma interrupt (Excep_SCI2_RXI2(vect=223))
void Excep_SCI2_RXI2(void);

// SCI2_TXI2
#pragma interrupt (Excep_SCI2_TXI2(vect=224))
void Excep_SCI2_TXI2(void);

// SCI2_TEI2
#pragma interrupt (Excep_SCI2_TEI2(vect=225))
void Excep_SCI2_TEI2(void);

// SCI3_ERI3
#pragma interrupt (Excep_SCI3_ERI3(vect=226))
void Excep_SCI3_ERI3(void);

// SCI3_RXI3
#pragma interrupt (Excep_SCI3_RXI3(vect=227))
void Excep_SCI3_RXI3(void);

// SCI3_TXI3
#pragma interrupt (Excep_SCI3_TXI3(vect=228))
void Excep_SCI3_TXI3(void);

// SCI3_TEI3
#pragma interrupt (Excep_SCI3_TEI3(vect=229))
void Excep_SCI3_TEI3(void);

// SCI4_ERI4
#pragma interrupt (Excep_SCI4_ERI4(vect=230))
void Excep_SCI4_ERI4(void);

// SCI4_RXI4
#pragma interrupt (Excep_SCI4_RXI4(vect=231))
void Excep_SCI4_RXI4(void);

// SCI4_TXI4
#pragma interrupt (Excep_SCI4_TXI4(vect=232))
void Excep_SCI4_TXI4(void);

// SCI4_TEI4
#pragma interrupt (Excep_SCI4_TEI4(vect=233))
void Excep_SCI4_TEI4(void);

// SCI5_ERI5
#pragma interrupt (Excep_SCI5_ERI5(vect=234))
void Excep_SCI5_ERI5(void);

// SCI5_RXI5
#pragma interrupt (Excep_SCI5_RXI5(vect=235))
void Excep_SCI5_RXI5(void);

// SCI5_TXI5
#pragma interrupt (Excep_SCI5_TXI5(vect=236))
void Excep_SCI5_TXI5(void);

// SCI5_TEI5
#pragma interrupt (Excep_SCI5_TEI5(vect=237))
void Excep_SCI5_TEI5(void);

// SCI6_ERI6
#pragma interrupt (Excep_SCI6_ERI6(vect=238))
void Excep_SCI6_ERI6(void);

// SCI6_RXI6
#pragma interrupt (Excep_SCI6_RXI6(vect=239))
void Excep_SCI6_RXI6(void);

// SCI6_TXI6
#pragma interrupt (Excep_SCI6_TXI6(vect=240))
void Excep_SCI6_TXI6(void);

// SCI6_TEI6
#pragma interrupt (Excep_SCI6_TEI6(vect=241))
void Excep_SCI6_TEI6(void);

// vector 242 reserved
// vector 243 reserved
// vector 244 reserved
// vector 245 reserved

// RIIC0_EEI0
#pragma interrupt (Excep_RIIC0_EEI0(vect=246))
void Excep_RIIC0_EEI0(void);

// RIIC0_RXI0
#pragma interrupt (Excep_RIIC0_RXI0(vect=247))
void Excep_RIIC0_RXI0(void);

// RIIC0_TXI0
#pragma interrupt (Excep_RIIC0_TXI0(vect=248))
void Excep_RIIC0_TXI0(void);

// RIIC0_TEI0
#pragma interrupt (Excep_RIIC0_TEI0(vect=249))
void Excep_RIIC0_TEI0(void);

// RIIC1_EEI1
#pragma interrupt (Excep_RIIC1_EEI1(vect=250))
void Excep_RIIC1_EEI1(void);

// RIIC1_RXI1
#pragma interrupt (Excep_RIIC1_RXI1(vect=251))
void Excep_RIIC1_RXI1(void);

// RIIC1_TXI1
#pragma interrupt (Excep_RIIC1_TXI1(vect=252))
void Excep_RIIC1_TXI1(void);

// RIIC1_TEI1
#pragma interrupt (Excep_RIIC1_TEI1(vect=253))
void Excep_RIIC1_TEI1(void);

// vector 254 reserved
// vector 255 reserved

//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                
//;<<VECTOR DATA END (POWER ON RESET)>>

