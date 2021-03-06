/*
 * model.lds.S - simple linker script for stand-alone Linux booting
 *
 * Copyright (C) 2012 ARM Limited. All rights reserved.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE.txt file.
 */

OUTPUT_FORMAT("elf64-littleaarch64")
OUTPUT_ARCH(aarch64)
TARGET(binary)

INPUT(./boot.o)
INPUT(KERNEL)
/*INPUT(./fdt.dtb)*/

#ifdef USE_INITRD
INPUT(FILESYSTEM)
#endif

SECTIONS
{
	. = PHYS_OFFSET;
	.text : { boot.o }
	. = PHYS_OFFSET + MBOX_OFFSET;
	mbox = .;
	.mbox : { QUAD(0x0) }
	. = PHYS_OFFSET + KERNEL_OFFSET;
	kernel = .;
	.kernel : { KERNEL }

	.data : { *(.data) }
	.bss : { *(.bss) }
}
