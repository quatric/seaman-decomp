#include "../decls.h"
int * FUN_8c1124ea_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  int *unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  *unaff_r14 = *unaff_r13;
  unaff_r14[1] = unaff_r13[1];
  unaff_r14[2] = *unaff_r13 * unaff_r13[1];
  iVar1 = (**(code **)(unaff_r12 + 0x10))(unaff_r12,*unaff_r14 * unaff_r14[1] * 4,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r12 + 0x18))(unaff_r12,unaff_r14,ar6,ar7);
    unaff_r14 = (int *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
    FUN_8c1129e4(unaff_r14,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c1124ea\n.set _FUN_8c1124ea, _FUN_8c1124ea_def\n");
