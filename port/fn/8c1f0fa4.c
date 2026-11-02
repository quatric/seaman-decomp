#include "../decls.h"
undefined4 FUN_8c1f0fa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar2 = FUN_8c1f0cdc(iVar2,ar5,ar6,ar7);
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(*unaff_r14 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar2 = FUN_8c1f0d34(iVar2,ar5,ar6,ar7);
    if (iVar2 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  *(int *)(*unaff_r14 + 0x2c) = iVar2;
LAB_8c1f1016:
  return *(undefined4 *)(*unaff_r14 + 0x20);
}

__asm__(".globl _FUN_8c1f0fa4\n.set _FUN_8c1f0fa4, _FUN_8c1f0fa4_def\n");
