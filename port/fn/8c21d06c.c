#include "../decls.h"
undefined4 FUN_8c21d06c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int a4;
  uint a5;
  uint a6;
  uint uVar3;
  undefined1 *a7;
  float fVar4;
  undefined1 auStack_20 [20];
  
  a4 = *(int *)(_DAT_8c4aad4c + _DAT_8c4aad5c * 4);
  if (a4 == 0) {
    uVar2 = FUN_8c2569e0(ar4 + 5,*ar4 & 0x20,ar6,ar7,ar4);
  }
  else {
    a6 = *(uint *)(_DAT_8c4aad50 + _DAT_8c4aad5c * 4);
    fVar4 = _DAT_8c4aad54;
    if (2.1474836e+09 < _DAT_8c4aad54) {
      fVar4 = _DAT_8c4aad54 + -4.2949673e+09;
    }
    a5 = 0;
    uVar1 = a6;
    while (uVar3 = uVar1, 1 < uVar3 - a5) {
      uVar1 = a5 + uVar3 >> 1;
      if (*(uint *)(uVar1 * 0x14 + a4) <= (uint)(int)fVar4) {
        a5 = uVar1;
        uVar1 = uVar3;
      }
    }
    a7 = auStack_20;
    FUN_8c21c1b0(a4,a5,a6,a7);
    uVar2 = FUN_8c2563f8(auStack_20,a5,a6,a7);
  }
  _DAT_8c4aad5c = _DAT_8c4aad5c + 1;
  return uVar2;
}

__asm__(".globl _FUN_8c21d06c\n.set _FUN_8c21d06c, _FUN_8c21d06c_def\n");
