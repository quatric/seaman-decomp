#include "../decls.h"
undefined4 FUN_8c25a966_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = (*(code *)(&FUN_8c233e10))
                    (ar4 + 4,*(undefined4 *)(unaff_r14 + 0x10),*(undefined4 *)(unaff_r14 + 0x14),
                     *(uint *)(unaff_r14 + 4) >> 0x10);
  if (iVar1 != 0) {
    *(undefined4 *)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  return 1;
}

__asm__(".globl _FUN_8c25a966\n.set _FUN_8c25a966, _FUN_8c25a966_def\n");
