#include "../decls.h"
undefined4 FUN_8c2545ec_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  if (_DAT_8c4aad80 == 1) {
    _DAT_8c4aad50 = (uint *)(_DAT_8c4aad48 + 1);
    _DAT_8c4aad4c = _DAT_8c4aad48;
  }
  else {
    if (_DAT_8c4aad80 == 2) {
      _DAT_8c4aad50 = (uint *)(_DAT_8c4aad48 + 2);
    }
    else if (_DAT_8c4aad80 == 3) {
      _DAT_8c4aad50 = (uint *)(_DAT_8c4aad48 + 3);
    }
    else {
      if (_DAT_8c4aad80 != 4) goto LAB_8c25463a;
      _DAT_8c4aad50 = (uint *)(_DAT_8c4aad48 + 4);
    }
    _DAT_8c4aad4c = _DAT_8c4aad48;
  }
LAB_8c25463a:
  fVar5 = _DAT_8c4aad54;
  if (2.1474836e+09 < _DAT_8c4aad54) {
    fVar5 = _DAT_8c4aad54 + -4.2949673e+09;
  }
  uVar2 = 0;
  uVar3 = *_DAT_8c4aad50;
  while (uVar4 = uVar3, 1 < uVar4 - uVar2) {
    uVar3 = uVar2 + uVar4 >> 1;
    if (*(uint *)(uVar3 * 0x10 + *_DAT_8c4aad4c) <= (uint)(int)fVar5) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
  }
                    
                    
  uVar1 = (*(code *)(&PTR_FUN_8c277c34)[ar5])(ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c2545ec\n.set _FUN_8c2545ec, _FUN_8c2545ec_def\n");
