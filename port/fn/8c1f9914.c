#include "../decls.h"
uint FUN_8c1f9914_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar8;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar8 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar7 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1fa0c4(ar4,ar5,ar6,ar7);
  puVar1 = 0xff00001c;
  uVar2 = (uint)0x800;
  *(undefined4 *)0xff00001c = ar4;
  uVar3 = (uint)(int)0xffffff0f;
  *puVar1 = *puVar1 & (int)(int)0xfffff7ff | uVar2;
  *puVar1 = *puVar1 & 0xfffffff7 | 8;
  return (int)(short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar8 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e) & uVar3;
}

__asm__(".globl _FUN_8c1f9914\n.set _FUN_8c1f9914, _FUN_8c1f9914_def\n");
