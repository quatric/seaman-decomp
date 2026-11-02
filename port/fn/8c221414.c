#include "../decls.h"
undefined8 * FUN_8c221414_def(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr4;
  float fVar8;
  
  uVar3 = *ar4;
  puVar1 = &DAT_8c2214d0;
  uVar2 = *ar5;
  fVar8 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar7 = 1.0 - fVar8;
  fVar4 = fVar7 * (float)(uVar3 >> 0x18) + (float)(uVar2 >> 0x18) * fVar8;
  if (2.1474836e+09 < fVar4) {
    puVar1 = (undefined8 *)0x8c2214d4;
    fVar4 = fVar4 + -4.2949673e+09;
  }
  fVar5 = fVar7 * (float)(uVar3 >> 0x10 & 0xff) + (float)(uVar2 >> 0x10 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar5) {
    puVar1 = (undefined8 *)0x8c2214d4;
    fVar5 = fVar5 + -4.2949673e+09;
  }
  fVar6 = fVar7 * (float)(uVar3 >> 8 & 0xff) + (float)(uVar2 >> 8 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar6) {
    puVar1 = (undefined8 *)&DAT_8c221758;
    fVar6 = fVar6 + -4.2949673e+09;
  }
  fVar7 = fVar7 * (float)(uVar3 & 0xff) + (float)(uVar2 & 0xff) * fVar8;
  if (2.1474836e+09 < fVar7) {
    puVar1 = (undefined8 *)&DAT_8c221758;
    fVar7 = fVar7 + -4.2949673e+09;
  }
  *ar6 = (int)fVar4 << 0x18 | ((int)fVar5 & 0xffU) << 0x10 | ((int)fVar6 & 0xffU) << 8 |
         (int)fVar7 & 0xffU;
  return puVar1;
}

__asm__(".globl _FUN_8c221414\n.set _FUN_8c221414, _FUN_8c221414_def\n");
