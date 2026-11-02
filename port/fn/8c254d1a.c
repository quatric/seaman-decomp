#include "../decls.h"
undefined4 FUN_8c254d1a_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int a4;
  uint a5;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_18 [16];
  
  a5 = _DAT_8c4aad5c * 4;
  a4 = *(int *)(_DAT_8c4aad4c + a5);
  if (a4 != 0) {
    ar6 = *(uint *)(_DAT_8c4aad50 + a5);
    fVar4 = _DAT_8c4aad54;
    if (2.1474836e+09 < _DAT_8c4aad54) {
      fVar4 = _DAT_8c4aad54 + -4.2949673e+09;
    }
    a5 = 0;
    uVar2 = ar6;
    while (uVar3 = uVar2, 1 < uVar3 - a5) {
      uVar2 = a5 + uVar3 >> 1;
      if (*(uint *)(uVar2 * 0x10 + a4) <= (uint)(int)fVar4) {
        a5 = uVar2;
        uVar2 = uVar3;
      }
    }
    ar7 = auStack_18;
    (*_DAT_8c4ab0b4)(a4,a5,ar6,ar7);
  }
  uVar1 = FUN_8c25b5d0(_DAT_8c4aad60,a5,ar6,ar7,ar4);
  _DAT_8c4aad5c = _DAT_8c4aad5c + 1;
  return uVar1;
}

__asm__(".globl _FUN_8c254d1a\n.set _FUN_8c254d1a, _FUN_8c254d1a_def\n");
