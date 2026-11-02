#include "../decls.h"
undefined4 FUN_8c20a104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  uint ar5_00;
  
  if ((in_r3 & ar4) != 0) {
    ar4 = 0;
  }
  if ((0x7fffff00 & ar4) != 0) {
    ar4 = (uint)0xff;
  }
  *(undefined4 *)0x8c4a9c4c = ar4;
  ar5_00 = *(undefined4 *)0x8c4a9e78 & 0xff00ffff | (ar4 & 0xff) << 0xf;
  *(undefined4 *)0x8c4a9e78 = ar5_00;
  pvr_20a844(0x48,ar5_00,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20a104\n.set _FUN_8c20a104, _FUN_8c20a104_def\n");
