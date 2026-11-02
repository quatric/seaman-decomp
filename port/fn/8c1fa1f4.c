#include "../decls.h"
uint FUN_8c1fa1f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar10;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  uVar8 = (int)0x1000 + 0x8c474bc8;
  uVar6 = 0x8c474bc8;
  do {
    *(undefined4 *)(uVar6 + 0xc) = 0;
    uVar6 = uVar6 + 0x10;
  } while (uVar6 < uVar8);
  puVar9 = (undefined4 *)((int)0x300 + (int)0x8c475bc8);
  puVar7 = 0x8c475bc8;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    bVar10 = puVar9 <= puVar7;
  } while (!bVar10);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar10 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa1f4\n.set _FUN_8c1fa1f4, _FUN_8c1fa1f4_def\n");
