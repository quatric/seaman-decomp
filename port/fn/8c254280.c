#include "../decls.h"
undefined4 FUN_8c254280_def(int ar4,int ar5,int ar6,undefined4 ar7,int ain0,undefined4 *ain1)

{
  uint ain0_00;
  undefined4 uVar1;
  undefined4 *in_r2;
  int iVar2;
  undefined4 unaff_r13;
  int *unaff_r14;
  
  *in_r2 = *(undefined4 *)(ain0 + ar6);
  *ain1 = *(undefined4 *)((int)&PTR_FUN_8c277c3c + ar5);
  unaff_r14[6] = ar4;
  ain0_00 = (uint)_DAT_8c4aad80;
  iVar2 = *unaff_r14;
  if (ain0_00 == 0) {
    (*_DAT_8c4aad34)(unaff_r13,ar5,ar6,ar7);
    (*_DAT_8c4aad40)(unaff_r13,ar5,ar6,ar7);
    ain0_00 = (*_DAT_8c4aad3c)(unaff_r13,ar5,ar6,ar7);
  }
  else {
    if (ain0_00 == 1) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 4;
      unaff_r14[5] = 0;
      (*_DAT_8c4aad34)(unaff_r13,ar5,ar6,ar7);
      (*_DAT_8c4aad40)(unaff_r13,ar5,ar6,ar7);
      ain0_00 = (*_DAT_8c4aad3c)(unaff_r13,ar5,ar6,ar7);
      iVar2 = iVar2 + 8;
    }
    else if (ain0_00 == 2) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 8;
      unaff_r14[5] = 0;
      (*_DAT_8c4aad34)(unaff_r13,ar5,ar6,ar7);
      (*_DAT_8c4aad40)(unaff_r13,ar5,ar6,ar7);
      ain0_00 = (*_DAT_8c4aad3c)(unaff_r13,ar5,ar6,ar7);
      iVar2 = iVar2 + 0x10;
    }
    else if (ain0_00 == 3) {
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 0xc;
      unaff_r14[5] = 0;
      (*_DAT_8c4aad34)(unaff_r13,ar5,ar6,ar7);
      (*_DAT_8c4aad40)(unaff_r13,ar5,ar6,ar7);
      ain0_00 = (*_DAT_8c4aad3c)(unaff_r13,ar5,ar6,ar7);
      iVar2 = iVar2 + 0x18;
    }
    else {
      if (ain0_00 != 4) goto LAB_8c2543be;
      unaff_r14[1] = iVar2;
      unaff_r14[2] = iVar2 + 0x10;
      unaff_r14[5] = 0;
      (*_DAT_8c4aad34)(unaff_r13,ar5,ar6,ar7);
      (*_DAT_8c4aad40)(unaff_r13,ar5,ar6,ar7);
      ain0_00 = (*_DAT_8c4aad3c)(unaff_r13,ar5,ar6,ar7);
      iVar2 = iVar2 + 0x20;
    }
    *unaff_r14 = iVar2;
  }
LAB_8c2543be:
  if (unaff_r14[6] == 0) {
    return ain0_00;
  }
  uVar1 = FUN_8c255d6c(0,unaff_r14[6],ar6,ar7,ain0_00);
  return uVar1;
}

__asm__(".globl _FUN_8c254280\n.set _FUN_8c254280, _FUN_8c254280_def\n");
