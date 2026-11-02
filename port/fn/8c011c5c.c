#include "../decls.h"
undefined4 * FUN_8c011c5c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0)

{
  uint uVar1;
  float fVar2;
  ulonglong in_dr4;
  float fVar3;
  float fStack_14;
  
  fVar3 = (float)(in_dr4 >> 0x20);
  fVar2 = (float)in_dr4;
  if ((((uint)fVar3 & 0x7f800000) == 0x7f800000) ||
     (((((uint)fVar2 & 0x7f800000) == 0x7f800000 && ((in_dr4 & 0x7fffff) != 0)) ||
      (ain0 = (undefined4 *)0x14, fVar2 == 0.0)))) {
    *ar4 = 0;
  }
  else if (((uint)fVar2 & 0x7f800000) == 0x7f800000) {
    *ar4 = 0;
  }
  else {
    fStack_14 = ABS(fVar3) / ABS(fVar2);
    uVar1 = (uint)fStack_14 & 0x80000000;
    if (((uint)fStack_14 & 0x7f800000) < 0x4b000000) {
      fStack_14 = (float)(int)fStack_14;
    }
    fStack_14 = (float)((uint)fStack_14 | uVar1);
    ain0 = &DAT_8c011d48;
    if (2.1474836e+09 < fStack_14) {
      ain0 = &DAT_8c011d4c;
      fStack_14 = fStack_14 + -4.2949673e+09;
    }
    *ar4 = (int)fStack_14;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011c5c\n.set _FUN_8c011c5c, _FUN_8c011c5c_def\n");
