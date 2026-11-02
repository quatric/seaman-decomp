#include "../decls.h"
undefined4 FUN_8c01cb54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01cbc8(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_8c01cc74(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = asr_load_language_model(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c01d008(ar4,ar5,ar6,ar7);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01cb54\n.set _FUN_8c01cb54, _FUN_8c01cb54_def\n");
