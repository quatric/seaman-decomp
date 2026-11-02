#include "../decls.h"
uint FUN_8c1fb590_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar8;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  bVar8 = ar4 == 0;
  if (!bVar8) {
    piVar7 = (int *)(ar4 + -0x20);
    for (piVar6 = (int *)*(undefined4 *)0x8c475f04;
        ((piVar7 <= piVar6 || ((int *)*piVar6 <= piVar7)) &&
        ((piVar6 < (int *)*piVar6 || ((piVar7 <= piVar6 && ((int *)*piVar6 <= piVar7))))));
        piVar6 = (int *)*piVar6) {
    }
    if (piVar7 + *(int *)(ar4 + -0x1c) * 8 == (int *)*piVar6) {
      *(int *)(ar4 + -0x1c) = *(int *)(ar4 + -0x1c) + *(int *)(*piVar6 + 4);
      *piVar7 = *(int *)*piVar6;
    }
    else {
      *piVar7 = *piVar6;
    }
    bVar8 = piVar6 + piVar6[1] * 8 == piVar7;
    if (bVar8) {
      piVar6[1] = piVar6[1] + *(int *)(ar4 + -0x1c);
      *piVar6 = *piVar7;
    }
    else {
      *piVar6 = (int)piVar7;
    }
    *(undefined4 *)0x8c475f04 = piVar6;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar8 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fb590\n.set _FUN_8c1fb590, _FUN_8c1fb590_def\n");
