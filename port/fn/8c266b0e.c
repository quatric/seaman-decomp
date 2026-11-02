#include "../decls.h"
undefined4 FUN_8c266b0e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar6_00;
  undefined *ar7_00;
  int *unaff_r14;
  
  if (*(int *)(in_r0 + *unaff_r14) != 0) {
    iVar1 = (int)0x160;
    *(undefined4 *)(iVar1 + *unaff_r14) = 1;
    if ((*(uint *)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
      *(int *)((int)0x15c + *unaff_r14) = *(int *)((int)0x15c + *unaff_r14) + 1;
    }
    iVar1 = (int)0x15c;
    ar6_00 = *(int *)(iVar1 + *unaff_r14) << 4;
    ar7_00 = (&DATA_8c266b70);
    (*(code *)(&FUN_8c265ea0))
              (*(undefined4 *)(iVar1 + 0x1c + *unaff_r14),*(undefined4 *)(iVar1 + -4 + *unaff_r14),
               ar6_00,(&DATA_8c266b70),(int)0x158 + *unaff_r14);
    (*(code *)(&FUN_8c265ff4))
              (*(undefined4 *)(0x1c4 + -0x4c + *unaff_r14),
               *(undefined4 *)((int)0x1c4 + *unaff_r14),ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c266b0e\n.set _FUN_8c266b0e, _FUN_8c266b0e_def\n");
