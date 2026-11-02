#include "../decls.h"
int FUN_8c260284_def(undefined4 ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int unaff_r13;
  int unaff_r14;
  
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    ar5 = unaff_r13 + 0x70;
    ar7 = unaff_r13 + 0x78;
    ar6 = unaff_r13 + 0x74;
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),ar5,ar6,ar7);
    FUN_8c260062(unaff_r14,ar5,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar1 = *(int *)(unaff_r14 + 4);
  if (iVar1 == 2) {
    FUN_8c26501c(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    if (iVar1 == 3) {
      FUN_8c260198(unaff_r14,ar5,ar6,ar7);
      FUN_8c264fea(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
      iVar1 = (int)0x90;
      iVar1 = (**(code **)(iVar1 + unaff_r14))
                        (*(undefined4 *)(iVar1 + 4 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x14 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x10 + unaff_r14),ar7);
      *(undefined4 *)(unaff_r14 + 4) = 3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c260284\n.set _FUN_8c260284, _FUN_8c260284_def\n");
