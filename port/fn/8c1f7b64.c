#include "../decls.h"
undefined4 FUN_8c1f7b64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  if (ar4 == 0) {
    ar4 = _DAT_8c4748bc;
  }
  iVar1 = ar5;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  iVar1 = FUN_8c1f6fc8(ar4,iVar1,ar6,ar7);
  if (iVar1 < 0) {
    _DAT_8c4748a8 = 9;
LAB_8c1f7bfa:
    uVar3 = 0;
  }
  else {
    if (ar4 == 0) {
      memmove(ar5,0x8c4748c4,0xf0,ar7);
    }
    else {
      if (DAT_8c474a2b == '\0') {
        _DAT_8c4748a8 = 3;
        goto LAB_8c1f7bfa;
      }
      if (ar5 != 0) {
        iVar4 = 0;
        iVar1 = iVar1 * 4 + 0x18;
        do {
          iVar2 = FUN_8c1f6e0c(iVar1,ar5,ar6,ar7);
          if (iVar2 != 1) {
            _DAT_8c4748a8 = 7;
            return 0;
          }
          iVar4 = iVar4 + 1;
          ar5 = ar5 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar4 < 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f7b64\n.set _FUN_8c1f7b64, _FUN_8c1f7b64_def\n");
