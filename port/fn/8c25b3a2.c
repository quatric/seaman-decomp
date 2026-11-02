#include "../decls.h"
undefined4 FUN_8c25b3a2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined4 in_PR;
  
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_PR);
  if (*(int *)(ar4 + 4) == 0) {
    _DAT_8c4aa6b4 = 1;
    ar5_00 = _DAT_8c4aa6ac;
LAB_8c25b3d2:
    _DAT_8c4aa6ac = ar5_00;
    uVar2 = 0xffffffff;
  }
  else {
    for (ar5_00 = 0; ar5_00 < *(uint *)(ar4 + 4); ar5_00 = ar5_00 + 1) {
      iVar1 = FUN_8c23793c(ar4,ar5_00,ar6,ar7);
      if (iVar1 < 0) goto LAB_8c25b3d2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c25b3a2\n.set _FUN_8c25b3a2, _FUN_8c25b3a2_def\n");
