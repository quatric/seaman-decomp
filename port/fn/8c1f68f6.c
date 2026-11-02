#include "../decls.h"
undefined4 FUN_8c1f68f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r12;
  int unaff_r13;
  int a5;
  
  a5 = 0x210 + unaff_r13;
  for (; unaff_r12 < *(int *)(0x208 + unaff_r13); unaff_r12 = unaff_r12 + 1) {
    if (*(int *)(a5 + 0xc) != 0) {
      FUN_8c1f689e(unaff_r13,a5,ar6,ar7);
    }
    a5 = a5 + 0x124;
  }
  uVar1 = memset(0,(int)0xd7c);
  return uVar1;
}

__asm__(".globl _FUN_8c1f68f6\n.set _FUN_8c1f68f6, _FUN_8c1f68f6_def\n");
