/* BFD support for the Texas Instruments TMS320C54X architecture.
   Copyright (C) 1999-2020 Free Software Foundation, Inc.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA
   02110-1301, USA.  */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

const bfd_arch_info_type bfd_tic54x_arch =
{
  16,				/* Bits in a word.  */
  16,				/* Bits in an address (except '548).  */
  16,				/* Bits in a byte.  */
  bfd_arch_tic54x,
  0,				/* Only 1 machine.  */
  "tic54x",
  "tms320c54x",
  1,
  TRUE,				/* The one and only.  */
  bfd_default_compatible,
  bfd_default_scan,
  bfd_arch_default_fill,
  NULL,
  0 /* Maximum offset of a reloc from the start of an insn.  */
};
