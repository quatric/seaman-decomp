#include "../decls.h"
int FUN_8c26b132_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar5_00;
  int iVar2;
  undefined1 *ar5_01;
  undefined1 *ar6_00;
  undefined1 *a5;
  undefined4 in_stack_ffffffe4;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  
  ar6_00 = &stack0xffffffe4;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  ar5_00 = (undefined1 *)libgcc_divide_helper_010468(ar5,iVar1);
  if ((int)ar5_00 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = libgcc_divide_helper_010614(ar5,iVar1);
    *(int *)(ar4 + 0x44) = iVar1 - iVar2;
    ar5_01 = ar5_00;
    FUN_8c26af42(ar5,ar5_00,&stack0xffffffe4,ar7,in_stack_ffffffe4);
    FUN_8c265ab0(auStack_18,ar5_01,ar6_00,ar7);
    FUN_8c265f84(0,ar5_01,ar6_00,ar7);
    for (a5 = (undefined1 *)0x0; (int)a5 < *(int *)(ar4 + 0xc); a5 = a5 + 1) {
      ar5_01 = a5;
      ar6_00 = ar5_00;
      uVar3 = in_stack_ffffffe4;
      FUN_8c26af7a(ar4,a5,ar5_00,in_stack_ffffffe4);
      ar7 = in_stack_ffffffe4;
      in_stack_ffffffe4 = uVar3;
    }
    FUN_8c265f84(auStack_18[0],ar5_01,ar6_00,ar7);
    iVar1 = (int)ar5_00 * iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26b132\n.set _FUN_8c26b132, _FUN_8c26b132_def\n");
