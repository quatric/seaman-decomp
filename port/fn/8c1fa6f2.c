#include "../decls.h"
uint FUN_8c1fa6f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte bVar1;
  byte in_RB;
  byte bVar2;
  byte in_BL;
  byte bVar3;
  byte in_FD;
  byte bVar4;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar5;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1fb9d2(ar4,ar5,ar6,ar7);
  FUN_8c1fa72e(ar4,ar5,ar6,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c | (uint)bVar2 << 0x1d |
         (uint)bVar1 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa6f2\n.set _FUN_8c1fa6f2, _FUN_8c1fa6f2_def\n");
