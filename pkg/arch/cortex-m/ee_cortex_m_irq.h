/* ###*B*###
 * Erika Enterprise, version 3
 * 
 * Copyright (C) 2017 - 2018 Evidence s.r.l.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License, version 2, for more details.
 * 
 * You should have received a copy of the GNU General Public License,
 * version 2, along with this program; if not, see
 * < www.gnu.org/licenses/old-licenses/gpl-2.0.html >.
 * 
 * This program is distributed to you subject to the following
 * clarifications and special exceptions to the GNU General Public
 * License, version 2.
 * 
 * THIRD PARTIES' MATERIALS
 * 
 * Certain materials included in this library are provided by third
 * parties under licenses other than the GNU General Public License. You
 * may only use, copy, link to, modify and redistribute this library
 * following the terms of license indicated below for third parties'
 * materials.
 * 
 * In case you make modified versions of this library which still include
 * said third parties' materials, you are obligated to grant this special
 * exception.
 * 
 * The complete list of Third party materials allowed with ERIKA
 * Enterprise version 3, together with the terms and conditions of each
 * license, is present in the file THIRDPARTY.TXT in the root of the
 * project.
 * ###*E*### */

/** \file	ee_cortex_m_irq.h
 *  \brief	ARM Cortex-M IRQs.
 *
 *  This files contains the interfaces of the IRQs support for ARM Cortex-M
 *  Architecture available in Erika Enterprise.
 *
 *  \note	TO BE DOCUMENTED!!!
 *
 *  \author	Giuseppe Serano
 *  \date	2018
 */
#ifndef OSEE_CORTEX_M_IRQ_H
#define OSEE_CORTEX_M_IRQ_H

/* I need base API */
#include "ee_compiler.h"

#include "ee_mcu_irq.h"

#if (defined(__cplusplus))
extern "C" {
#endif

/** \brief	ISR priority level defines
 *
 *  The value of thess macros can be used in assembly inline templates,
 *  so no parentheses nor unsigned specifiers is allowed
 */
#define	OSEE_ISR_UNMASKED	(0x00U)
#define	OSEE_ISR_PRI_1		(0x0FU)
#define	OSEE_ISR_PRI_2		(0x0EU)
#define	OSEE_ISR_PRI_3		(0x0DU)
#define	OSEE_ISR_PRI_4		(0x0CU)
#define	OSEE_ISR_PRI_5		(0x0BU)
#define	OSEE_ISR_PRI_6		(0x0AU)
#define	OSEE_ISR_PRI_8		(0x09U)
#define	OSEE_ISR_PRI_9		(0x08U)
#define	OSEE_ISR_PRI_10		(0x07U)
#define	OSEE_ISR_PRI_11		(0x06U)
#define	OSEE_ISR_PRI_12		(0x05U)
#define	OSEE_ISR_PRI_13		(0x04U)
#define	OSEE_ISR_PRI_14		(0x03U)
#define	OSEE_ISR_PRI_15		(0x02U)
#define	OSEE_ISR_PRI_16		(0x01U)


/* Macro to declare ISR1: always valid */
#define	DeclareIsr1(f)	FUNC(void, OS_CODE) f ( void )

/* Macro to define ISR1: always valid */
#define	ISR1(f)		FUNC(void, OS_CODE) f ( void )

/* Macro to declare ISR2: always valid */
#define	DeclareIsr2(f)	FUNC(void, OS_CODE) f ( void )

/* Macro to define ISR2: always valid */
#define	ISR2(f)		FUNC(void, OS_CODE) f ( void )

/* Macro to declare ISR: always valid */
#define	DeclareIsr(f)	FUNC(void, OS_CODE) f ( void )

/* Macro to define ISR: always valid */
#define	ISR(f)		FUNC(void, OS_CODE) f ( void )

/*
 * Exceptions
 */

/* Reset */
#define	OSEE_CORTEX_M_RESET_EXC_NUM		0x00000001U
#define	OSEE_CORTEX_M_RESET_ISR_ID		OSEE_CORTEX_M_RESET_EXC_NUM
/* NMI */
#define	OSEE_CORTEX_M_NMI_EXC_NUM		0x00000002U
#define	OSEE_CORTEX_M_NMI_ISR_ID		OSEE_CORTEX_M_NMI_EXC_NUM
/* hard fault */
#define	OSEE_CORTEX_M_HARD_FAULT_EXC_NUM	0x00000003U
#define	OSEE_CORTEX_M_HARD_FAULT_ISR_ID		OSEE_CORTEX_M_HARD_FAULT_EXC_NUM
/* MPU fault */
#define	OSEE_CORTEX_M_MPU_FAULT_EXC_NUM		0x00000004U
#define	OSEE_CORTEX_M_MPU_FAULT_ISR_ID		OSEE_CORTEX_M_MPU_FAULT_EXC_NUM
/* bus fault */
#define	OSEE_CORTEX_M_BUS_FAULT_EXC_NUM		0x00000005U
#define	OSEE_CORTEX_M_BUS_FAULT_ISR_ID		OSEE_CORTEX_M_BUS_FAULT_EXC_NUM
/* usage fault */
#define	OSEE_CORTEX_M_USAGE_FAULT_EXC_NUM	0x00000006U
#define	OSEE_CORTEX_M_USAGE_FAULT_ISR_ID	\
	OSEE_CORTEX_M_USAGE_FAULT_EXC_NUM
/* SVCall */
#define	OSEE_CORTEX_M_SVCALL_EXC_NUM		0x0000000BU
#define	OSEE_CORTEX_M_SVCALL_ISR_ID		OSEE_CORTEX_M_SVCALL_EXC_NUM
/* Debug monitor */
#define	OSEE_CORTEX_M_DEBUG_MONITOR_EXC_NUM	0x0000000CU
#define	OSEE_CORTEX_M_DEBUG_MONITOR_ISR_ID	\
	OSEE_CORTEX_M_DEBUG_MONITOR_EXC_NUM
/* PendSV */
#define	OSEE_CORTEX_M_PENDSV_EXC_NUM		0x0000000EU
#define	OSEE_CORTEX_M_PENDSV_ISR_ID		OSEE_CORTEX_M_PENDSV_EXC_NUM
/* SysTick */
#define	OSEE_CORTEX_M_SYSTICK_EXC_NUM		0x0000000FU
#define	OSEE_CORTEX_M_SYSTICK_ISR_ID		OSEE_CORTEX_M_SYSTICK_EXC_NUM

/* Overall Exceprions Number. */
#define	OSEE_CORTEX_M_OVERALL_EXC_NUM		0x00000010U

/*
 * Interrupts
 */
#define	OSEE_CORTEX_M_INT_00_NUM	0x00000000U
#define	OSEE_CORTEX_M_INT_01_NUM	0x00000001U
#define	OSEE_CORTEX_M_INT_02_NUM	0x00000002U
#define	OSEE_CORTEX_M_INT_03_NUM	0x00000003U
#define	OSEE_CORTEX_M_INT_04_NUM	0x00000004U
#define	OSEE_CORTEX_M_INT_05_NUM	0x00000005U
#define	OSEE_CORTEX_M_INT_06_NUM	0x00000006U
#define	OSEE_CORTEX_M_INT_07_NUM	0x00000007U
#define	OSEE_CORTEX_M_INT_08_NUM	0x00000008U
#define	OSEE_CORTEX_M_INT_09_NUM	0x00000009U
#define	OSEE_CORTEX_M_INT_0A_NUM	0x0000000AU
#define	OSEE_CORTEX_M_INT_0B_NUM	0x0000000BU
#define	OSEE_CORTEX_M_INT_0C_NUM	0x0000000CU
#define	OSEE_CORTEX_M_INT_0D_NUM	0x0000000DU
#define	OSEE_CORTEX_M_INT_0E_NUM	0x0000000EU
#define	OSEE_CORTEX_M_INT_0F_NUM	0x0000000FU
#define	OSEE_CORTEX_M_INT_10_NUM	0x00000010U
#define	OSEE_CORTEX_M_INT_11_NUM	0x00000011U
#define	OSEE_CORTEX_M_INT_12_NUM	0x00000012U
#define	OSEE_CORTEX_M_INT_13_NUM	0x00000013U
#define	OSEE_CORTEX_M_INT_14_NUM	0x00000014U
#define	OSEE_CORTEX_M_INT_15_NUM	0x00000015U
#define	OSEE_CORTEX_M_INT_16_NUM	0x00000016U
#define	OSEE_CORTEX_M_INT_17_NUM	0x00000017U
#define	OSEE_CORTEX_M_INT_18_NUM	0x00000018U
#define	OSEE_CORTEX_M_INT_19_NUM	0x00000019U
#define	OSEE_CORTEX_M_INT_1A_NUM	0x0000001AU
#define	OSEE_CORTEX_M_INT_1B_NUM	0x0000001BU
#define	OSEE_CORTEX_M_INT_1C_NUM	0x0000001CU
#define	OSEE_CORTEX_M_INT_1D_NUM	0x0000001DU
#define	OSEE_CORTEX_M_INT_1E_NUM	0x0000001EU
#define	OSEE_CORTEX_M_INT_1F_NUM	0x0000001FU
#define	OSEE_CORTEX_M_INT_20_NUM	0x00000020U
#define	OSEE_CORTEX_M_INT_21_NUM	0x00000021U
#define	OSEE_CORTEX_M_INT_22_NUM	0x00000022U
#define	OSEE_CORTEX_M_INT_23_NUM	0x00000023U
#define	OSEE_CORTEX_M_INT_24_NUM	0x00000024U
#define	OSEE_CORTEX_M_INT_25_NUM	0x00000025U
#define	OSEE_CORTEX_M_INT_26_NUM	0x00000026U
#define	OSEE_CORTEX_M_INT_27_NUM	0x00000027U
#define	OSEE_CORTEX_M_INT_28_NUM	0x00000028U
#define	OSEE_CORTEX_M_INT_29_NUM	0x00000029U
#define	OSEE_CORTEX_M_INT_2A_NUM	0x0000002AU
#define	OSEE_CORTEX_M_INT_2B_NUM	0x0000002BU
#define	OSEE_CORTEX_M_INT_2C_NUM	0x0000002CU
#define	OSEE_CORTEX_M_INT_2D_NUM	0x0000002DU
#define	OSEE_CORTEX_M_INT_2E_NUM	0x0000002EU
#define	OSEE_CORTEX_M_INT_2F_NUM	0x0000002FU
#define	OSEE_CORTEX_M_INT_30_NUM	0x00000030U
#define	OSEE_CORTEX_M_INT_31_NUM	0x00000031U
#define	OSEE_CORTEX_M_INT_32_NUM	0x00000032U
#define	OSEE_CORTEX_M_INT_33_NUM	0x00000033U
#define	OSEE_CORTEX_M_INT_34_NUM	0x00000034U
#define	OSEE_CORTEX_M_INT_35_NUM	0x00000035U
#define	OSEE_CORTEX_M_INT_36_NUM	0x00000036U
#define	OSEE_CORTEX_M_INT_37_NUM	0x00000037U
#define	OSEE_CORTEX_M_INT_38_NUM	0x00000038U
#define	OSEE_CORTEX_M_INT_39_NUM	0x00000039U
#define	OSEE_CORTEX_M_INT_3A_NUM	0x0000003AU
#define	OSEE_CORTEX_M_INT_3B_NUM	0x0000003BU
#define	OSEE_CORTEX_M_INT_3C_NUM	0x0000003CU
#define	OSEE_CORTEX_M_INT_3D_NUM	0x0000003DU
#define	OSEE_CORTEX_M_INT_3E_NUM	0x0000003EU
#define	OSEE_CORTEX_M_INT_3F_NUM	0x0000003FU
#define	OSEE_CORTEX_M_INT_40_NUM	0x00000040U
#define	OSEE_CORTEX_M_INT_41_NUM	0x00000041U
#define	OSEE_CORTEX_M_INT_42_NUM	0x00000042U
#define	OSEE_CORTEX_M_INT_43_NUM	0x00000043U
#define	OSEE_CORTEX_M_INT_44_NUM	0x00000044U
#define	OSEE_CORTEX_M_INT_45_NUM	0x00000045U
#define	OSEE_CORTEX_M_INT_46_NUM	0x00000046U
#define	OSEE_CORTEX_M_INT_47_NUM	0x00000047U
#define	OSEE_CORTEX_M_INT_48_NUM	0x00000048U
#define	OSEE_CORTEX_M_INT_49_NUM	0x00000049U
#define	OSEE_CORTEX_M_INT_4A_NUM	0x0000004AU
#define	OSEE_CORTEX_M_INT_4B_NUM	0x0000004BU
#define	OSEE_CORTEX_M_INT_4C_NUM	0x0000004CU
#define	OSEE_CORTEX_M_INT_4D_NUM	0x0000004DU
#define	OSEE_CORTEX_M_INT_4E_NUM	0x0000004EU
#define	OSEE_CORTEX_M_INT_4F_NUM	0x0000004FU
#define	OSEE_CORTEX_M_INT_50_NUM	0x00000050U
#define	OSEE_CORTEX_M_INT_51_NUM	0x00000051U
#define	OSEE_CORTEX_M_INT_52_NUM	0x00000052U
#define	OSEE_CORTEX_M_INT_53_NUM	0x00000053U
#define	OSEE_CORTEX_M_INT_54_NUM	0x00000054U
#define	OSEE_CORTEX_M_INT_55_NUM	0x00000055U
#define	OSEE_CORTEX_M_INT_56_NUM	0x00000056U
#define	OSEE_CORTEX_M_INT_57_NUM	0x00000057U
#define	OSEE_CORTEX_M_INT_58_NUM	0x00000058U
#define	OSEE_CORTEX_M_INT_59_NUM	0x00000059U
#define	OSEE_CORTEX_M_INT_5A_NUM	0x0000005AU
#define	OSEE_CORTEX_M_INT_5B_NUM	0x0000005BU
#define	OSEE_CORTEX_M_INT_5C_NUM	0x0000005CU
#define	OSEE_CORTEX_M_INT_5D_NUM	0x0000005DU
#define	OSEE_CORTEX_M_INT_5E_NUM	0x0000005EU
#define	OSEE_CORTEX_M_INT_5F_NUM	0x0000005FU
#define	OSEE_CORTEX_M_INT_60_NUM	0x00000060U
#define	OSEE_CORTEX_M_INT_61_NUM	0x00000061U
#define	OSEE_CORTEX_M_INT_62_NUM	0x00000062U
#define	OSEE_CORTEX_M_INT_63_NUM	0x00000063U
#define	OSEE_CORTEX_M_INT_64_NUM	0x00000064U
#define	OSEE_CORTEX_M_INT_65_NUM	0x00000065U
#define	OSEE_CORTEX_M_INT_66_NUM	0x00000066U
#define	OSEE_CORTEX_M_INT_67_NUM	0x00000067U
#define	OSEE_CORTEX_M_INT_68_NUM	0x00000068U
#define	OSEE_CORTEX_M_INT_69_NUM	0x00000069U
#define	OSEE_CORTEX_M_INT_6A_NUM	0x0000006AU
#define	OSEE_CORTEX_M_INT_6B_NUM	0x0000006BU
#define	OSEE_CORTEX_M_INT_6C_NUM	0x0000006CU
#define	OSEE_CORTEX_M_INT_6D_NUM	0x0000006DU
#define	OSEE_CORTEX_M_INT_6E_NUM	0x0000006EU
#define	OSEE_CORTEX_M_INT_6F_NUM	0x0000006FU
#define	OSEE_CORTEX_M_INT_70_NUM	0x00000070U
#define	OSEE_CORTEX_M_INT_71_NUM	0x00000071U
#define	OSEE_CORTEX_M_INT_72_NUM	0x00000072U
#define	OSEE_CORTEX_M_INT_73_NUM	0x00000073U
#define	OSEE_CORTEX_M_INT_74_NUM	0x00000074U
#define	OSEE_CORTEX_M_INT_75_NUM	0x00000075U
#define	OSEE_CORTEX_M_INT_76_NUM	0x00000076U
#define	OSEE_CORTEX_M_INT_77_NUM	0x00000077U
#define	OSEE_CORTEX_M_INT_78_NUM	0x00000078U
#define	OSEE_CORTEX_M_INT_79_NUM	0x00000079U
#define	OSEE_CORTEX_M_INT_7A_NUM	0x0000007AU
#define	OSEE_CORTEX_M_INT_7B_NUM	0x0000007BU
#define	OSEE_CORTEX_M_INT_7C_NUM	0x0000007CU
#define	OSEE_CORTEX_M_INT_7D_NUM	0x0000007DU
#define	OSEE_CORTEX_M_INT_7E_NUM	0x0000007EU
#define	OSEE_CORTEX_M_INT_7F_NUM	0x0000007FU
#define	OSEE_CORTEX_M_INT_80_NUM	0x00000080U
#define	OSEE_CORTEX_M_INT_81_NUM	0x00000081U
#define	OSEE_CORTEX_M_INT_82_NUM	0x00000082U
#define	OSEE_CORTEX_M_INT_83_NUM	0x00000083U
#define	OSEE_CORTEX_M_INT_84_NUM	0x00000084U
#define	OSEE_CORTEX_M_INT_85_NUM	0x00000085U
#define	OSEE_CORTEX_M_INT_86_NUM	0x00000086U
#define	OSEE_CORTEX_M_INT_87_NUM	0x00000087U
#define	OSEE_CORTEX_M_INT_88_NUM	0x00000088U
#define	OSEE_CORTEX_M_INT_89_NUM	0x00000089U
#define	OSEE_CORTEX_M_INT_8A_NUM	0x0000008AU
#define	OSEE_CORTEX_M_INT_8B_NUM	0x0000008BU
#define	OSEE_CORTEX_M_INT_8C_NUM	0x0000008CU
#define	OSEE_CORTEX_M_INT_8D_NUM	0x0000008DU
#define	OSEE_CORTEX_M_INT_8E_NUM	0x0000008EU
#define	OSEE_CORTEX_M_INT_8F_NUM	0x0000008FU
#define	OSEE_CORTEX_M_INT_90_NUM	0x00000090U
#define	OSEE_CORTEX_M_INT_91_NUM	0x00000091U
#define	OSEE_CORTEX_M_INT_92_NUM	0x00000092U
#define	OSEE_CORTEX_M_INT_93_NUM	0x00000093U
#define	OSEE_CORTEX_M_INT_94_NUM	0x00000094U
#define	OSEE_CORTEX_M_INT_95_NUM	0x00000095U
#define	OSEE_CORTEX_M_INT_96_NUM	0x00000096U
#define	OSEE_CORTEX_M_INT_97_NUM	0x00000097U
#define	OSEE_CORTEX_M_INT_98_NUM	0x00000098U
#define	OSEE_CORTEX_M_INT_99_NUM	0x00000099U
#define	OSEE_CORTEX_M_INT_9A_NUM	0x0000009AU
#define	OSEE_CORTEX_M_INT_9B_NUM	0x0000009BU
#define	OSEE_CORTEX_M_INT_9C_NUM	0x0000009CU
#define	OSEE_CORTEX_M_INT_9D_NUM	0x0000009DU
#define	OSEE_CORTEX_M_INT_9E_NUM	0x0000009EU
#define	OSEE_CORTEX_M_INT_9F_NUM	0x0000009FU
#define	OSEE_CORTEX_M_INT_A0_NUM	0x000000A0U
#define	OSEE_CORTEX_M_INT_A1_NUM	0x000000A1U
#define	OSEE_CORTEX_M_INT_A2_NUM	0x000000A2U
#define	OSEE_CORTEX_M_INT_A3_NUM	0x000000A3U
#define	OSEE_CORTEX_M_INT_A4_NUM	0x000000A4U
#define	OSEE_CORTEX_M_INT_A5_NUM	0x000000A5U
#define	OSEE_CORTEX_M_INT_A6_NUM	0x000000A6U
#define	OSEE_CORTEX_M_INT_A7_NUM	0x000000A7U
#define	OSEE_CORTEX_M_INT_A8_NUM	0x000000A8U
#define	OSEE_CORTEX_M_INT_A9_NUM	0x000000A9U
#define	OSEE_CORTEX_M_INT_AA_NUM	0x000000AAU
#define	OSEE_CORTEX_M_INT_AB_NUM	0x000000ABU
#define	OSEE_CORTEX_M_INT_AC_NUM	0x000000ACU
#define	OSEE_CORTEX_M_INT_AD_NUM	0x000000ADU
#define	OSEE_CORTEX_M_INT_AE_NUM	0x000000AEU
#define	OSEE_CORTEX_M_INT_AF_NUM	0x000000AFU
#define	OSEE_CORTEX_M_INT_B0_NUM	0x000000B0U
#define	OSEE_CORTEX_M_INT_B1_NUM	0x000000B1U
#define	OSEE_CORTEX_M_INT_B2_NUM	0x000000B2U
#define	OSEE_CORTEX_M_INT_B3_NUM	0x000000B3U
#define	OSEE_CORTEX_M_INT_B4_NUM	0x000000B4U
#define	OSEE_CORTEX_M_INT_B5_NUM	0x000000B5U
#define	OSEE_CORTEX_M_INT_B6_NUM	0x000000B6U
#define	OSEE_CORTEX_M_INT_B7_NUM	0x000000B7U
#define	OSEE_CORTEX_M_INT_B8_NUM	0x000000B8U
#define	OSEE_CORTEX_M_INT_B9_NUM	0x000000B9U
#define	OSEE_CORTEX_M_INT_BA_NUM	0x000000BAU
#define	OSEE_CORTEX_M_INT_BB_NUM	0x000000BBU
#define	OSEE_CORTEX_M_INT_BC_NUM	0x000000BCU
#define	OSEE_CORTEX_M_INT_BD_NUM	0x000000BDU
#define	OSEE_CORTEX_M_INT_BE_NUM	0x000000BEU
#define	OSEE_CORTEX_M_INT_BF_NUM	0x000000BFU
#define	OSEE_CORTEX_M_INT_C0_NUM	0x000000C0U
#define	OSEE_CORTEX_M_INT_C1_NUM	0x000000C1U
#define	OSEE_CORTEX_M_INT_C2_NUM	0x000000C2U
#define	OSEE_CORTEX_M_INT_C3_NUM	0x000000C3U
#define	OSEE_CORTEX_M_INT_C4_NUM	0x000000C4U
#define	OSEE_CORTEX_M_INT_C5_NUM	0x000000C5U
#define	OSEE_CORTEX_M_INT_C6_NUM	0x000000C6U
#define	OSEE_CORTEX_M_INT_C7_NUM	0x000000C7U
#define	OSEE_CORTEX_M_INT_C8_NUM	0x000000C8U
#define	OSEE_CORTEX_M_INT_C9_NUM	0x000000C9U
#define	OSEE_CORTEX_M_INT_CA_NUM	0x000000CAU
#define	OSEE_CORTEX_M_INT_CB_NUM	0x000000CBU
#define	OSEE_CORTEX_M_INT_CC_NUM	0x000000CCU
#define	OSEE_CORTEX_M_INT_CD_NUM	0x000000CDU
#define	OSEE_CORTEX_M_INT_CE_NUM	0x000000CEU
#define	OSEE_CORTEX_M_INT_CF_NUM	0x000000CFU
#define	OSEE_CORTEX_M_INT_D0_NUM	0x000000D0U
#define	OSEE_CORTEX_M_INT_D1_NUM	0x000000D1U
#define	OSEE_CORTEX_M_INT_D2_NUM	0x000000D2U
#define	OSEE_CORTEX_M_INT_D3_NUM	0x000000D3U
#define	OSEE_CORTEX_M_INT_D4_NUM	0x000000D4U
#define	OSEE_CORTEX_M_INT_D5_NUM	0x000000D5U
#define	OSEE_CORTEX_M_INT_D6_NUM	0x000000D6U
#define	OSEE_CORTEX_M_INT_D7_NUM	0x000000D7U
#define	OSEE_CORTEX_M_INT_D8_NUM	0x000000D8U
#define	OSEE_CORTEX_M_INT_D9_NUM	0x000000D9U
#define	OSEE_CORTEX_M_INT_DA_NUM	0x000000DAU
#define	OSEE_CORTEX_M_INT_DB_NUM	0x000000DBU
#define	OSEE_CORTEX_M_INT_DC_NUM	0x000000DCU
#define	OSEE_CORTEX_M_INT_DD_NUM	0x000000DDU
#define	OSEE_CORTEX_M_INT_DE_NUM	0x000000DEU
#define	OSEE_CORTEX_M_INT_DF_NUM	0x000000DFU
#define	OSEE_CORTEX_M_INT_E0_NUM	0x000000E0U
#define	OSEE_CORTEX_M_INT_E1_NUM	0x000000E1U
#define	OSEE_CORTEX_M_INT_E2_NUM	0x000000E2U
#define	OSEE_CORTEX_M_INT_E3_NUM	0x000000E3U
#define	OSEE_CORTEX_M_INT_E4_NUM	0x000000E4U
#define	OSEE_CORTEX_M_INT_E5_NUM	0x000000E5U
#define	OSEE_CORTEX_M_INT_E6_NUM	0x000000E6U
#define	OSEE_CORTEX_M_INT_E7_NUM	0x000000E7U
#define	OSEE_CORTEX_M_INT_E8_NUM	0x000000E8U
#define	OSEE_CORTEX_M_INT_E9_NUM	0x000000E9U
#define	OSEE_CORTEX_M_INT_EA_NUM	0x000000EAU
#define	OSEE_CORTEX_M_INT_EB_NUM	0x000000EBU
#define	OSEE_CORTEX_M_INT_EC_NUM	0x000000ECU
#define	OSEE_CORTEX_M_INT_ED_NUM	0x000000EDU
#define	OSEE_CORTEX_M_INT_EE_NUM	0x000000EEU
#define	OSEE_CORTEX_M_INT_EF_NUM	0x000000EFU
#define	OSEE_CORTEX_M_INT_F0_NUM	0x000000F0U
#define	OSEE_CORTEX_M_INT_F1_NUM	0x000000F1U
#define	OSEE_CORTEX_M_INT_F2_NUM	0x000000F2U
#define	OSEE_CORTEX_M_INT_F3_NUM	0x000000F3U
#define	OSEE_CORTEX_M_INT_F4_NUM	0x000000F4U
#define	OSEE_CORTEX_M_INT_F5_NUM	0x000000F5U
#define	OSEE_CORTEX_M_INT_F6_NUM	0x000000F6U
#define	OSEE_CORTEX_M_INT_F7_NUM	0x000000F7U
#define	OSEE_CORTEX_M_INT_F8_NUM	0x000000F8U
#define	OSEE_CORTEX_M_INT_F9_NUM	0x000000F9U
#define	OSEE_CORTEX_M_INT_FA_NUM	0x000000FAU
#define	OSEE_CORTEX_M_INT_FB_NUM	0x000000FBU
#define	OSEE_CORTEX_M_INT_FC_NUM	0x000000FCU
#define	OSEE_CORTEX_M_INT_FD_NUM	0x000000FDU
#define	OSEE_CORTEX_M_INT_FE_NUM	0x000000FEU
#define	OSEE_CORTEX_M_INT_FF_NUM	0x000000FFU

/* Overall Exceprions Number. */
#define	OSEE_CORTEX_M_OVERALL_INT_NUM	0x00000100U

#if (defined(__cplusplus))
}
#endif

#endif  /* !OSEE_CORTEX_M_IRQ_H */
