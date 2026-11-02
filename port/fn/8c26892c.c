#include "../decls.h"
uint FUN_8c26892c_def(undefined4 ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r12;
  uint unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    unaff_r13 = 0xd000001;
  }
  else {
    *(undefined4 *)(*unaff_r14 + 0x164) = ar4;
    *(uint *)(*unaff_r14 + 0x168) = unaff_r12;
    *(uint *)(*unaff_r14 + 0x174) = unaff_r13;
    *(uint *)(*unaff_r14 + 0x170) = unaff_r13;
    _DAT_8c4bd578 = ar4;
    memset(ar4,0,unaff_r12 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar1 = unaff_r13;
    uVar2 = unaff_r13;
    if (unaff_r12 != 0) {
      do {
        FUN_8c0107a0(0x1c,*(int *)(*unaff_r14 + 0x164) + uVar1,ar6);
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 0x1c;
      } while (uVar2 < unaff_r12);
    }
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c268920,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c26892c\n.set _FUN_8c26892c, _FUN_8c26892c_def\n");
