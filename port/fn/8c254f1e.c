#include "../decls.h"
undefined4 FUN_8c254f1e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  uint a5;
  uint a6;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a4 = *(int *)(_DAT_8c4aad4c + _DAT_8c4aad5c * 4);
  if (a4 == 0) {
    uVar1 = FUN_8c256e18(_DAT_8c4aad60,*(undefined4 *)(ar4 + 0x14),*(undefined4 *)(ar4 + 0x18),
                         *(undefined4 *)(ar4 + 0x1c),ar4);
  }
  else {
    a6 = *(uint *)(_DAT_8c4aad50 + _DAT_8c4aad5c * 4);
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
    (*_DAT_8c4ab0b8)(a4,a5,a6,&uStack_18);
    uVar1 = FUN_8c256e18(_DAT_8c4aad60,uStack_18,uStack_14,uStack_10,ar4);
  }
  _DAT_8c4aad5c = _DAT_8c4aad5c + 1;
  return uVar1;
}

__asm__(".globl _FUN_8c254f1e\n.set _FUN_8c254f1e, _FUN_8c254f1e_def\n");
