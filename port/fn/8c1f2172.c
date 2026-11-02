#include "../decls.h"
undefined4 FUN_8c1f2172_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *ar5 = *piVar2 + 0x96;
  ar5[1] = piVar2[1];
  *(char *)(ar5 + 2) = (char)piVar2[2];
  return 0;
}

__asm__(".globl _FUN_8c1f2172\n.set _FUN_8c1f2172, _FUN_8c1f2172_def\n");
