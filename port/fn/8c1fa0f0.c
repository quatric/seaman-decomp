#include "../decls.h"
uint FUN_8c1fa0f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  bool bVar5;
  
  uVar1 = 0xf4000000;
  if ((*(undefined4 *)0xff00001c >> 5 & 1) == 1) {
    uVar4 = (uint)0x1000;
    uVar3 = 0;
    do {
      uVar2 = uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar2;
    } while (uVar2 < uVar4);
    uVar4 = (uint)0x3000;
    uVar3 = (int)0x2000;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  else {
    uVar4 = (uint)0x4000;
    uVar3 = 0;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  return ((ushort)s0 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa0f0\n.set _FUN_8c1fa0f0, _FUN_8c1fa0f0_def\n");
