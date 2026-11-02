#include "../decls.h"
undefined4 FUN_8c1f217a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  int *piVar2;
  int *unaff_r14;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(*in_r3 + 0x10),ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *unaff_r14 = *piVar2 + 0x96;
  unaff_r14[1] = piVar2[1];
  *(char *)(unaff_r14 + 2) = (char)piVar2[2];
  return 0;
}

__asm__(".globl _FUN_8c1f217a\n.set _FUN_8c1f217a, _FUN_8c1f217a_def\n");
