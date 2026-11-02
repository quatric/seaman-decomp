#include "../decls.h"
undefined4 FUN_8c21ce02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  int ar5_00;
  uint a5;
  uint a6;
  uint uVar2;
  undefined1 *a7;
  uint uVar3;
  float fVar4;
  undefined1 auStack_18 [16];
  
  ar5_00 = _DAT_8c4aad5c * 4;
  a4 = *(int *)(_DAT_8c4aad4c + ar5_00);
  if (a4 == 0) {
    uVar1 = noop_25b638(ar4 + 8,ar5_00,ar6,ar7,ar4);
  }
  else {
    a6 = *(uint *)(_DAT_8c4aad50 + ar5_00);
    fVar4 = _DAT_8c4aad54;
    if (2.1474836e+09 < _DAT_8c4aad54) {
      fVar4 = _DAT_8c4aad54 + -4.2949673e+09;
    }
    a5 = 0;
    uVar2 = a6;
    while (uVar3 = uVar2, 1 < uVar3 - a5) {
      uVar2 = a5 + uVar3 >> 1;
      if (*(uint *)(uVar2 * 0x10 + a4) <= (uint)(int)fVar4) {
        a5 = uVar2;
        uVar2 = uVar3;
      }
    }
    a7 = auStack_18;
    (*_DAT_8c4ab0b4)(a4,a5,a6,a7);
    uVar1 = noop_25b638(auStack_18,a5,a6,a7,ar4);
  }
  _DAT_8c4aad5c = _DAT_8c4aad5c + 1;
  return uVar1;
}

__asm__(".globl _FUN_8c21ce02\n.set _FUN_8c21ce02, _FUN_8c21ce02_def\n");
