#include "../decls.h"
undefined4 FUN_8c20136c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  undefined4 a4;
  uint unaff_r12;
  uint unaff_r13;
  int unaff_r14;
  
  a4 = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(in_r0 + unaff_r14) = *(undefined4 *)(unaff_r14 + 0x38);
  while( true ) {
    if (unaff_r12 <= unaff_r13) {
      return *(undefined4 *)(unaff_r14 + 0x34);
    }
    if (*(int *)(unaff_r14 + 0x40) == 0xfffa) break;
    if (*(int *)(unaff_r14 + 0x34) == 0) {
      return 0xffff0000;
    }
    uVar1 = FUN_8c2009d0(a4,*(undefined4 *)(unaff_r14 + 0x40),ar6,ar7);
    unaff_r13 = unaff_r13 + 1;
    *(uint *)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + -1;
  }
  if (*(int *)(unaff_r14 + 0x34) != 0) {
    return 0xffff0000;
  }
  return 0;
}

__asm__(".globl _FUN_8c20136c\n.set _FUN_8c20136c, _FUN_8c20136c_def\n");
