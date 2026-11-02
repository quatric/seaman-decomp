#include "../decls.h"
uint FUN_8c1efcae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  byte in_MD;
  byte bVar3;
  byte in_RB;
  byte bVar4;
  byte in_BL;
  byte bVar5;
  byte in_FD;
  byte bVar6;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar7;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar7 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)0xa05f6920 = *(undefined4 *)0xa05f6920 & (int)(int)0xffffcfff;
  iVar2 = 0x8c470910;
  puVar1 = (&FUN_8c1fa54c);
  FUN_8c1fa54c(*(undefined4 *)(0x8c470910 + 0xc),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 0x10),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 8),ar5,ar6,ar7);
  ar4_00 = *(undefined4 *)(iVar2 + 4);
  (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
  FUN_8c1f44cc(ar4_00,ar5,ar6,ar7);
  memset(0x8c4709a0,0,(int)0x240,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar7 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d |
         (uint)bVar3 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1efcae\n.set _FUN_8c1efcae, _FUN_8c1efcae_def\n");
