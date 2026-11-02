#include "../decls.h"
undefined4 FUN_8c1f231e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  int *in_r2;
  
  uVar1 = (**(code **)(ain0 + *(int *)(*in_r2 + 0xc)))(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f231e\n.set _FUN_8c1f231e, _FUN_8c1f231e_def\n");
