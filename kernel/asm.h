/*-
 * Copyright (c) 2013 Andrew Turner
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _ARM64_INCLUDE_ASM_H_
#define	_ARM64_INCLUDE_ASM_H_

/* PCR in from AArch64 bits */
/*
 * M[3:2] is the exception level
 * M[1] is unused
 * M[0] is the SP select:
 *       0: always SP0
 *       1: current ELs SP
 */
#define	PSR_M_EL0t	0x00000000
#define	PSR_M_EL1t	0x00000004
#define	PSR_M_EL1h	0x00000005
#define	PSR_M_EL2t	0x00000008
#define	PSR_M_EL2h	0x00000009

#define	PSR_F		0x00000040
#define	PSR_I		0x00000080
#define	PSR_A		0x00000100
#define	PSR_D		0x00000200

/* SCTLR bits */
#define	SCTLR_RES0	0xc8222400	/* Reserved, write 0 */
#define	SCTLR_RES1	0x30d00800	/* Reserved, write 1 */

#define	SCTLR_M		0x00000001
#define	SCTLR_A		0x00000002
#define	SCTLR_C		0x00000004
#define	SCTLR_SA	0x00000008
#define	SCTLR_SA0	0x00000010
#define	SCTLR_CP15BEN	0x00000020
#define	SCTLR_THEE	0x00000040
#define	SCTLR_ITD	0x00000080
#define	SCTLR_SED	0x00000100
#define	SCTLR_UMA	0x00000200
#define	SCTLR_I		0x00001000
#define	SCTLR_DZE	0x00004000
#define	SCTLR_UCT	0x00008000
#define	SCTLR_nTWI	0x00010000
#define	SCTLR_nTWE	0x00040000
#define	SCTLR_WXN	0x00080000
#define	SCTLR_EOE	0x01000000
#define	SCTLR_EE	0x02000000
#define	SCTLR_UCI	0x04000000

/* CPTR bits */
#define	CPTR_LOWER	0x33ff

/* HCR bits */
/* TODO: Add more */
#define	HCR_RW		0x80000000 /* Register Width */

#endif
