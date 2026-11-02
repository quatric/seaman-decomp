#include "../decls.h"
undefined4 FUN_8c1f0fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c2739d8 == 0) {
    return 0;
  }
  iVar1 = *(int *)(_DAT_8c2739d8 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar1 = FUN_8c1f0cdc(_DAT_8c2739d8,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar1 = FUN_8c1f0d34(_DAT_8c2739d8,ar5,ar6,ar7);
    if (iVar1 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  *(int *)(_DAT_8c2739d8 + 0x2c) = iVar1;
LAB_8c1f1016:
  return *(undefined4 *)(_DAT_8c2739d8 + 0x20);
}

__asm__(".globl _FUN_8c1f0fa0\n.set _FUN_8c1f0fa0, _FUN_8c1f0fa0_def\n");
