#include "../decls.h"
undefined4 FUN_8c26b092_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int ar5_00;
  int iVar3;
  undefined4 in_stack_ffffffd8;
  undefined4 uStack_24;
  int *piStack_20;
  
  ar5_00 = ar5;
  piStack_20 = ar6;
  FUN_8c265ab0(&uStack_24,ar5,ar6,ar7);
  FUN_8c265f84(0,ar5_00,ar6,ar7);
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 << 3;
  piVar2 = (int *)libgcc_divide_helper_010468(ar5,iVar1);
  iVar3 = libgcc_divide_helper_010614(ar5,iVar1);
  iVar1 = libgcc_divide_helper_010614(iVar1 - iVar3,iVar1);
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0xc); iVar3 = iVar3 + 1) {
    *(int *)(ar4 + 0x44) = iVar1;
    ar6 = piVar2;
    if (0 < iVar1) {
      ar6 = (int *)((int)piVar2 + 1);
    }
    FUN_8c26af42(ar5,ar6,&stack0xffffffd8,ar7,in_stack_ffffffd8);
    ar7 = in_stack_ffffffd8;
    ar5_00 = iVar3;
    in_stack_ffffffd8 = ar7;
    FUN_8c26af7a(ar4,iVar3,ar6,ar7);
  }
  FUN_8c265f84(uStack_24,ar5_00,ar6,ar7);
  *piStack_20 = ar5 + *(int *)(ar4 + 0x44);
  return *(undefined4 *)(ar4 + 0x44);
}

__asm__(".globl _FUN_8c26b092\n.set _FUN_8c26b092, _FUN_8c26b092_def\n");
