#include "../decls.h"
undefined4 FUN_8c2006fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r8;
  int iVar2;
  undefined4 unaff_r12;
  int unaff_r13;
  int unaff_r14;
  
  iVar2 = *(int *)(*(int *)(unaff_r13 + 0x1c) + 0x10);
  if (0 < iVar2) {
    do {
      iVar1 = (*(code *)(&FUN_8c1fbc44))
                        (unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,
                         unaff_r14 * 0x200 + *(int *)(unaff_r13 + 0x24),ar7);
      if (iVar1 < 0) {
        FUN_8c20099e(unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8 + 5,
                     ar7);
        return iVar1;
      }
      FUN_8c20099e(unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8,ar7);
      unaff_r14 = unaff_r14 + 1;
    } while (unaff_r14 < iVar2);
  }
  return 0;
}

__asm__(".globl _FUN_8c2006fa\n.set _FUN_8c2006fa, _FUN_8c2006fa_def\n");
