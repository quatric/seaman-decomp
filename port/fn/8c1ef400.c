#include "../decls.h"
undefined4 crt0_start_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar4_00;
  undefined4 uVar1;
  undefined4 a6;
  
  a6 = 0x41474553;
  uVar1 = 0x8c00f400;
  ar4_00 = (undefined4 *)&DAT_8c00c000;
  do {
    *ar4_00 = 0x41474553;
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < (undefined4 *)0x8c00f400);
  FUN_8c1ef440(ar4_00,0x8c00f400,0x41474553,ar7,
               "\n--------------------------------------------------\n Shinobi Library for Dreamcast Version 1.65\n Copyright (C) 1998,1999 SEGA\n--------------------------------------------------\nShinobi Ver 1.65 Build:Dec 07 1999 10:48:27\n"
              );
  FUN_8c1ef430(ar4_00,uVar1,a6,ar7);
  main(ar4_00,uVar1,a6,ar7);
  uVar1 = FUN_8c1ef438(ar4_00,uVar1,a6,ar7);
  return uVar1;
}

__asm__(".globl _crt0_start\n.set _crt0_start, _crt0_start_def\n");
