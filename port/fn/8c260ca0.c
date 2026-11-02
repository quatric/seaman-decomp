#include "../decls.h"
uint FUN_8c260ca0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  if (DAT_8c277fb0 == 0) {
    DAT_8c277fb4 = (((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
    ain0 = ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
           (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
           (uint)in_MD << 0x1e | 0xf0;
  }
  DAT_8c277fb0 = DAT_8c277fb0 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c260ca0\n.set _FUN_8c260ca0, _FUN_8c260ca0_def\n");
