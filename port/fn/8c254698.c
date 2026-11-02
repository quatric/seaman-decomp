#include "../decls.h"
undefined4 FUN_8c254698_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (_DAT_8c4aad80 == 1) {
    _DAT_8c4aad50 = _DAT_8c4aad48 + 4;
    _DAT_8c4aad4c = _DAT_8c4aad48;
  }
  else {
    if (_DAT_8c4aad80 == 2) {
      _DAT_8c4aad50 = _DAT_8c4aad48 + 8;
    }
    else if (_DAT_8c4aad80 == 3) {
      _DAT_8c4aad50 = _DAT_8c4aad48 + 0xc;
    }
    else {
      if (_DAT_8c4aad80 != 4) goto LAB_8c2546fa;
      _DAT_8c4aad50 = _DAT_8c4aad48 + 0x10;
    }
    _DAT_8c4aad4c = _DAT_8c4aad48;
  }
LAB_8c2546fa:
  iVar2 = (uint)((_DAT_8c4aad82 & 1) != 0) * 4;
  fVar6 = _DAT_8c4aad54;
  if (2.1474836e+09 < _DAT_8c4aad54) {
    fVar6 = _DAT_8c4aad54 + -4.2949673e+09;
  }
  uVar3 = 0;
  uVar4 = *(uint *)(_DAT_8c4aad50 + iVar2);
  while (uVar5 = uVar4, 1 < uVar5 - uVar3) {
    uVar4 = uVar3 + uVar5 >> 1;
    if (*(uint *)(uVar4 * 0x10 + *(int *)(_DAT_8c4aad4c + iVar2)) <= (uint)(int)fVar6) {
      uVar3 = uVar4;
      uVar4 = uVar5;
    }
  }
                    
                    
  uVar1 = (*(code *)(&PTR_FUN_8c277c3c)[ar5])(ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c254698\n.set _FUN_8c254698, _FUN_8c254698_def\n");
